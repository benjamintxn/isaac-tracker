#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "isaac_save_file.h"
#include "/Users/bentan/isaac-tracker/kaitai_struct_cpp_stl_runtime/kaitai/kaitaistream.h"

std::string escape_html(const std::string& str) {
    std::string escaped;
    for (char c : str) {
        switch (c) {
            case '&': escaped += "&amp;"; break;
            case '<': escaped += "&lt;"; break;
            case '>': escaped += "&gt;"; break;
            case '"': escaped += "&quot;"; break;
            case '\'': escaped += "&#39;"; break;
            default: escaped += c; break;
        }
    }
    return escaped;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <save_file.dat>" << std::endl;
        return 1;
    }

    std::string file_path = argv[1];
    std::ofstream html("output.html");

    if (!html) {
        std::cerr << "Error: Cannot create HTML file." << std::endl;
        return 1;
    }

    html << "<!DOCTYPE html>\n<html>\n<head>\n<title>Save File Analysis</title>\n</head>\n<body>\n";
    html << "<h1>Binding of Isaac: Save File Analysis</h1>\n";

    // Open the file in binary mode
    std::ifstream ifs(file_path, std::ifstream::binary);
    if (!ifs) {
        std::cerr << "Error: Cannot open file " << file_path << std::endl;
        return 1;
    }

    // Read the entire file into a buffer
    std::vector<char> buffer((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
    ifs.close();

    // Create an input stream from the buffer
    std::istringstream input_stream(std::string(buffer.begin(), buffer.end()));

    try {
        kaitai::kstream ks(&input_stream);
        isaac_save_file_t save(&ks);

        // Output header information
        html << "<h2>Header Information</h2>\n";
        html << "<p>Magic: " << escape_html(save.header()->magic()) << "</p>\n";
        html << "<p>CRC: " << save.header()->crc() << "</p>\n";

        // Iterate through chunks
        html << "<h2>Chunks</h2>\n<ul>\n";
        for (size_t i = 0; i < save.chunks()->size(); ++i) {
            auto chunk = save.chunks()->at(i);
            html << "<li>\n<h3>Chunk " << i + 1 << "</h3>\n";
            html << "<p>Type: " << chunk->type() << "</p>\n";
            html << "<p>Length: " << chunk->len() << " bytes</p>\n";

            // Handle each chunk type dynamically
            switch (chunk->type()) {
                case isaac_save_file_t::chunk_type_t::CHUNK_TYPE_ACHIEVEMENTS: {
                    auto achievements = static_cast<isaac_save_file_t::achievements_chunk_t*>(chunk->body());
                    html << "<p>Achievements Count: " << achievements->count() << "</p>\n<ul>\n";
                    for (size_t j = 0; j < achievements->achievements()->size(); ++j) {
                        html << "<li>Achievement " << j + 1 << ": "
                             << (achievements->achievements()->at(j) ? "Completed" : "Incomplete") << "</li>\n";
                    }
                    html << "</ul>\n";
                    break;
                }
                // Repeat similar structure for other cases...
                default:
                    html << "<p>Unhandled chunk type.</p>\n";
                    break;
            }
            html << "</li>\n";
        }
        html << "</ul>\n";

    } catch (const std::exception& e) {
        html << "<p>Error parsing save file: " << escape_html(e.what()) << "</p>\n";
        std::cerr << "Error parsing save file: " << e.what() << std::endl;
    }

    html << "</body>\n</html>";
    html.close();

    std::cout << "HTML report generated: output.html" << std::endl;
    return 0;
}