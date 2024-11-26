#ifndef ISAAC_SAVE_FILE_H_
#define ISAAC_SAVE_FILE_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "/Users/bentan/isaac-tracker/kaitai_struct_cpp_stl_runtime/kaitai/kaitaistruct.h"
#include <stdint.h>
#include <vector>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class isaac_save_file_t : public kaitai::kstruct {

public:
    class counters_chunk_t;
    class bestiary_counter_t;
    class chunk_t;
    class entity_value_t;
    class bestiary_deaths_t;
    class achievements_chunk_t;
    class collectibles_chunk_t;
    class level_counters_chunk_t;
    class save_header_t;
    class cutscene_counters_chunk_t;
    class challenge_counters_chunk_t;
    class bestiary_counters_chunk_t;
    class minibosses_chunk_t;
    class special_seed_counters_chunk_t;
    class bestiary_encounters_t;
    class bestiary_kills_t;
    class bestiary_hits_t;
    class game_settings_chunk_t;
    class bosses_chunk_t;

    enum chunk_type_t {
        CHUNK_TYPE_ACHIEVEMENTS = 1,
        CHUNK_TYPE_COUNTERS = 2,
        CHUNK_TYPE_LEVEL_COUNTERS = 3,
        CHUNK_TYPE_COLLECTIBLES = 4,
        CHUNK_TYPE_MINIBOSSES = 5,
        CHUNK_TYPE_BOSSES = 6,
        CHUNK_TYPE_CHALLENGE_COUNTERS = 7,
        CHUNK_TYPE_CUTSCENE_COUNTERS = 8,
        CHUNK_TYPE_GAME_SETTINGS = 9,
        CHUNK_TYPE_SPECIAL_SEED_COUNTERS = 10,
        CHUNK_TYPE_BESTIARY_COUNTERS = 11
    };

    enum bestiary_type_t {
        BESTIARY_TYPE_ENCOUNTERS = 1,
        BESTIARY_TYPE_KILLS = 2,
        BESTIARY_TYPE_HITS = 3,
        BESTIARY_TYPE_DEATHS = 4
    };

    isaac_save_file_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, isaac_save_file_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~isaac_save_file_t();

    class counters_chunk_t : public kaitai::kstruct {

    public:

        counters_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~counters_chunk_t();

    private:
        int32_t m_count;
        std::vector<int32_t>* m_counters;
        isaac_save_file_t* m__root;
        isaac_save_file_t::chunk_t* m__parent;

    public:
        int32_t count() const { return m_count; }
        std::vector<int32_t>* counters() const { return m_counters; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t::chunk_t* _parent() const { return m__parent; }
    };

    class bestiary_counter_t : public kaitai::kstruct {

    public:

        bestiary_counter_t(kaitai::kstream* p__io, isaac_save_file_t::bestiary_counters_chunk_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~bestiary_counter_t();

    private:
        bestiary_type_t m_type;
        int32_t m_count;
        kaitai::kstruct* m_body;
        bool n_body;

    public:
        bool _is_null_body() { body(); return n_body; };

    private:
        isaac_save_file_t* m__root;
        isaac_save_file_t::bestiary_counters_chunk_t* m__parent;

    public:
        bestiary_type_t type() const { return m_type; }
        int32_t count() const { return m_count; }
        kaitai::kstruct* body() const { return m_body; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t::bestiary_counters_chunk_t* _parent() const { return m__parent; }
    };

    class chunk_t : public kaitai::kstruct {

    public:

        chunk_t(kaitai::kstream* p__io, isaac_save_file_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~chunk_t();

    private:
        chunk_type_t m_type;
        int32_t m_len;
        kaitai::kstruct* m_body;
        bool n_body;

    public:
        bool _is_null_body() { body(); return n_body; };

    private:
        isaac_save_file_t* m__root;
        isaac_save_file_t* m__parent;

    public:
        chunk_type_t type() const { return m_type; }

        /**
         * This tends to be wrong
         */
        int32_t len() const { return m_len; }
        kaitai::kstruct* body() const { return m_body; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t* _parent() const { return m__parent; }
    };

    class entity_value_t : public kaitai::kstruct {

    public:

        entity_value_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~entity_value_t();

    private:
        int32_t m_entity;
        int32_t m_value;
        isaac_save_file_t* m__root;
        kaitai::kstruct* m__parent;

    public:
        int32_t entity() const { return m_entity; }
        int32_t value() const { return m_value; }
        isaac_save_file_t* _root() const { return m__root; }
        kaitai::kstruct* _parent() const { return m__parent; }
    };

    class bestiary_deaths_t : public kaitai::kstruct {

    public:

        bestiary_deaths_t(kaitai::kstream* p__io, isaac_save_file_t::bestiary_counter_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~bestiary_deaths_t();

    private:
        std::vector<entity_value_t*>* m_values;
        isaac_save_file_t* m__root;
        isaac_save_file_t::bestiary_counter_t* m__parent;

    public:
        std::vector<entity_value_t*>* values() const { return m_values; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t::bestiary_counter_t* _parent() const { return m__parent; }
    };

    class achievements_chunk_t : public kaitai::kstruct {

    public:

        achievements_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~achievements_chunk_t();

    private:
        int32_t m_count;
        std::vector<uint8_t>* m_achievements;
        isaac_save_file_t* m__root;
        isaac_save_file_t::chunk_t* m__parent;

    public:
        int32_t count() const { return m_count; }
        std::vector<uint8_t>* achievements() const { return m_achievements; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t::chunk_t* _parent() const { return m__parent; }
    };

    class collectibles_chunk_t : public kaitai::kstruct {

    public:

        collectibles_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~collectibles_chunk_t();

    private:
        int32_t m_count;
        std::vector<uint8_t>* m_seen_by_id;
        isaac_save_file_t* m__root;
        isaac_save_file_t::chunk_t* m__parent;

    public:
        int32_t count() const { return m_count; }
        std::vector<uint8_t>* seen_by_id() const { return m_seen_by_id; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t::chunk_t* _parent() const { return m__parent; }
    };

    class level_counters_chunk_t : public kaitai::kstruct {

    public:

        level_counters_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~level_counters_chunk_t();

    private:
        int32_t m_count;
        std::vector<int32_t>* m_counters;
        isaac_save_file_t* m__root;
        isaac_save_file_t::chunk_t* m__parent;

    public:
        int32_t count() const { return m_count; }
        std::vector<int32_t>* counters() const { return m_counters; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t::chunk_t* _parent() const { return m__parent; }
    };

    class save_header_t : public kaitai::kstruct {

    public:

        save_header_t(kaitai::kstream* p__io, isaac_save_file_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~save_header_t();

    private:
        std::string m_magic;
        int32_t m_crc;
        isaac_save_file_t* m__root;
        isaac_save_file_t* m__parent;

    public:
        std::string magic() const { return m_magic; }
        int32_t crc() const { return m_crc; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t* _parent() const { return m__parent; }
    };

    class cutscene_counters_chunk_t : public kaitai::kstruct {

    public:

        cutscene_counters_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~cutscene_counters_chunk_t();

    private:
        int32_t m_count;
        std::vector<int32_t>* m_count_by_id;
        isaac_save_file_t* m__root;
        isaac_save_file_t::chunk_t* m__parent;

    public:
        int32_t count() const { return m_count; }
        std::vector<int32_t>* count_by_id() const { return m_count_by_id; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t::chunk_t* _parent() const { return m__parent; }
    };

    class challenge_counters_chunk_t : public kaitai::kstruct {

    public:

        challenge_counters_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~challenge_counters_chunk_t();

    private:
        int32_t m_count;
        std::vector<uint8_t>* m_completed_by_id;
        isaac_save_file_t* m__root;
        isaac_save_file_t::chunk_t* m__parent;

    public:
        int32_t count() const { return m_count; }
        std::vector<uint8_t>* completed_by_id() const { return m_completed_by_id; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t::chunk_t* _parent() const { return m__parent; }
    };

    class bestiary_counters_chunk_t : public kaitai::kstruct {

    public:

        bestiary_counters_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~bestiary_counters_chunk_t();

    private:
        uint32_t m_count;
        std::vector<bestiary_counter_t*>* m_counters;
        isaac_save_file_t* m__root;
        isaac_save_file_t::chunk_t* m__parent;

    public:
        uint32_t count() const { return m_count; }
        std::vector<bestiary_counter_t*>* counters() const { return m_counters; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t::chunk_t* _parent() const { return m__parent; }
    };

    class minibosses_chunk_t : public kaitai::kstruct {

    public:

        minibosses_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~minibosses_chunk_t();

    private:
        int32_t m_count;
        std::vector<uint8_t>* m_seen_by_id;
        isaac_save_file_t* m__root;
        isaac_save_file_t::chunk_t* m__parent;

    public:
        int32_t count() const { return m_count; }
        std::vector<uint8_t>* seen_by_id() const { return m_seen_by_id; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t::chunk_t* _parent() const { return m__parent; }
    };

    class special_seed_counters_chunk_t : public kaitai::kstruct {

    public:

        special_seed_counters_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~special_seed_counters_chunk_t();

    private:
        int32_t m_count;
        std::vector<uint8_t>* m_count_by_id;
        isaac_save_file_t* m__root;
        isaac_save_file_t::chunk_t* m__parent;

    public:
        int32_t count() const { return m_count; }
        std::vector<uint8_t>* count_by_id() const { return m_count_by_id; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t::chunk_t* _parent() const { return m__parent; }
    };

    class bestiary_encounters_t : public kaitai::kstruct {

    public:

        bestiary_encounters_t(kaitai::kstream* p__io, isaac_save_file_t::bestiary_counter_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~bestiary_encounters_t();

    private:
        std::vector<entity_value_t*>* m_values;
        isaac_save_file_t* m__root;
        isaac_save_file_t::bestiary_counter_t* m__parent;

    public:
        std::vector<entity_value_t*>* values() const { return m_values; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t::bestiary_counter_t* _parent() const { return m__parent; }
    };

    class bestiary_kills_t : public kaitai::kstruct {

    public:

        bestiary_kills_t(kaitai::kstream* p__io, isaac_save_file_t::bestiary_counter_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~bestiary_kills_t();

    private:
        std::vector<entity_value_t*>* m_values;
        isaac_save_file_t* m__root;
        isaac_save_file_t::bestiary_counter_t* m__parent;

    public:
        std::vector<entity_value_t*>* values() const { return m_values; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t::bestiary_counter_t* _parent() const { return m__parent; }
    };

    class bestiary_hits_t : public kaitai::kstruct {

    public:

        bestiary_hits_t(kaitai::kstream* p__io, isaac_save_file_t::bestiary_counter_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~bestiary_hits_t();

    private:
        std::vector<entity_value_t*>* m_values;
        isaac_save_file_t* m__root;
        isaac_save_file_t::bestiary_counter_t* m__parent;

    public:
        std::vector<entity_value_t*>* values() const { return m_values; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t::bestiary_counter_t* _parent() const { return m__parent; }
    };

    class game_settings_chunk_t : public kaitai::kstruct {

    public:

        game_settings_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~game_settings_chunk_t();

    private:
        int32_t m_count;
        std::vector<int32_t>* m_unk;
        isaac_save_file_t* m__root;
        isaac_save_file_t::chunk_t* m__parent;

    public:
        int32_t count() const { return m_count; }
        std::vector<int32_t>* unk() const { return m_unk; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t::chunk_t* _parent() const { return m__parent; }
    };

    class bosses_chunk_t : public kaitai::kstruct {

    public:

        bosses_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent = 0, isaac_save_file_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~bosses_chunk_t();

    private:
        int32_t m_count;
        std::vector<uint8_t>* m_seen_by_id;
        isaac_save_file_t* m__root;
        isaac_save_file_t::chunk_t* m__parent;

    public:
        int32_t count() const { return m_count; }
        std::vector<uint8_t>* seen_by_id() const { return m_seen_by_id; }
        isaac_save_file_t* _root() const { return m__root; }
        isaac_save_file_t::chunk_t* _parent() const { return m__parent; }
    };

private:
    save_header_t* m_header;
    std::vector<chunk_t*>* m_chunks;
    isaac_save_file_t* m__root;
    kaitai::kstruct* m__parent;

public:
    save_header_t* header() const { return m_header; }
    std::vector<chunk_t*>* chunks() const { return m_chunks; }
    isaac_save_file_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // ISAAC_SAVE_FILE_H_
