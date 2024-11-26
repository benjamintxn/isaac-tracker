// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "isaac_save_file.h"
#include "/Users/bentan/isaac-tracker/kaitai_struct_cpp_stl_runtime/kaitai/exceptions.h"

isaac_save_file_t::isaac_save_file_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_header = 0;
    m_chunks = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::_read() {
    m_header = new save_header_t(m__io, this, m__root);
    m_chunks = new std::vector<chunk_t*>();
    const int l_chunks = 11;
    for (int i = 0; i < l_chunks; i++) {
        m_chunks->push_back(new chunk_t(m__io, this, m__root));
    }
}

isaac_save_file_t::~isaac_save_file_t() {
    _clean_up();
}

void isaac_save_file_t::_clean_up() {
    if (m_header) {
        delete m_header; m_header = 0;
    }
    if (m_chunks) {
        for (std::vector<chunk_t*>::iterator it = m_chunks->begin(); it != m_chunks->end(); ++it) {
            delete *it;
        }
        delete m_chunks; m_chunks = 0;
    }
}

isaac_save_file_t::counters_chunk_t::counters_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_counters = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::counters_chunk_t::_read() {
    m_count = m__io->read_s4le();
    m_counters = new std::vector<int32_t>();
    const int l_counters = count();
    for (int i = 0; i < l_counters; i++) {
        m_counters->push_back(m__io->read_s4le());
    }
}

isaac_save_file_t::counters_chunk_t::~counters_chunk_t() {
    _clean_up();
}

void isaac_save_file_t::counters_chunk_t::_clean_up() {
    if (m_counters) {
        delete m_counters; m_counters = 0;
    }
}

isaac_save_file_t::bestiary_counter_t::bestiary_counter_t(kaitai::kstream* p__io, isaac_save_file_t::bestiary_counters_chunk_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::bestiary_counter_t::_read() {
    m_type = static_cast<isaac_save_file_t::bestiary_type_t>(m__io->read_s4le());
    m_count = m__io->read_s4le();
    n_body = true;
    switch (type()) {
    case isaac_save_file_t::BESTIARY_TYPE_HITS: {
        n_body = false;
        m_body = new bestiary_hits_t(m__io, this, m__root);
        break;
    }
    case isaac_save_file_t::BESTIARY_TYPE_DEATHS: {
        n_body = false;
        m_body = new bestiary_deaths_t(m__io, this, m__root);
        break;
    }
    case isaac_save_file_t::BESTIARY_TYPE_KILLS: {
        n_body = false;
        m_body = new bestiary_kills_t(m__io, this, m__root);
        break;
    }
    case isaac_save_file_t::BESTIARY_TYPE_ENCOUNTERS: {
        n_body = false;
        m_body = new bestiary_encounters_t(m__io, this, m__root);
        break;
    }
    }
}

isaac_save_file_t::bestiary_counter_t::~bestiary_counter_t() {
    _clean_up();
}

void isaac_save_file_t::bestiary_counter_t::_clean_up() {
    if (!n_body) {
        if (m_body) {
            delete m_body; m_body = 0;
        }
    }
}

isaac_save_file_t::chunk_t::chunk_t(kaitai::kstream* p__io, isaac_save_file_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::chunk_t::_read() {
    m_type = static_cast<isaac_save_file_t::chunk_type_t>(m__io->read_s4le());
    m_len = m__io->read_s4le();
    n_body = true;
    switch (type()) {
    case isaac_save_file_t::CHUNK_TYPE_MINIBOSSES: {
        n_body = false;
        m_body = new minibosses_chunk_t(m__io, this, m__root);
        break;
    }
    case isaac_save_file_t::CHUNK_TYPE_CHALLENGE_COUNTERS: {
        n_body = false;
        m_body = new challenge_counters_chunk_t(m__io, this, m__root);
        break;
    }
    case isaac_save_file_t::CHUNK_TYPE_CUTSCENE_COUNTERS: {
        n_body = false;
        m_body = new cutscene_counters_chunk_t(m__io, this, m__root);
        break;
    }
    case isaac_save_file_t::CHUNK_TYPE_SPECIAL_SEED_COUNTERS: {
        n_body = false;
        m_body = new special_seed_counters_chunk_t(m__io, this, m__root);
        break;
    }
    case isaac_save_file_t::CHUNK_TYPE_LEVEL_COUNTERS: {
        n_body = false;
        m_body = new level_counters_chunk_t(m__io, this, m__root);
        break;
    }
    case isaac_save_file_t::CHUNK_TYPE_BESTIARY_COUNTERS: {
        n_body = false;
        m_body = new bestiary_counters_chunk_t(m__io, this, m__root);
        break;
    }
    case isaac_save_file_t::CHUNK_TYPE_ACHIEVEMENTS: {
        n_body = false;
        m_body = new achievements_chunk_t(m__io, this, m__root);
        break;
    }
    case isaac_save_file_t::CHUNK_TYPE_GAME_SETTINGS: {
        n_body = false;
        m_body = new game_settings_chunk_t(m__io, this, m__root);
        break;
    }
    case isaac_save_file_t::CHUNK_TYPE_COUNTERS: {
        n_body = false;
        m_body = new counters_chunk_t(m__io, this, m__root);
        break;
    }
    case isaac_save_file_t::CHUNK_TYPE_COLLECTIBLES: {
        n_body = false;
        m_body = new collectibles_chunk_t(m__io, this, m__root);
        break;
    }
    case isaac_save_file_t::CHUNK_TYPE_BOSSES: {
        n_body = false;
        m_body = new bosses_chunk_t(m__io, this, m__root);
        break;
    }
    }
}

isaac_save_file_t::chunk_t::~chunk_t() {
    _clean_up();
}

void isaac_save_file_t::chunk_t::_clean_up() {
    if (!n_body) {
        if (m_body) {
            delete m_body; m_body = 0;
        }
    }
}

isaac_save_file_t::entity_value_t::entity_value_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::entity_value_t::_read() {
    m_entity = m__io->read_s4le();
    m_value = m__io->read_s4le();
}

isaac_save_file_t::entity_value_t::~entity_value_t() {
    _clean_up();
}

void isaac_save_file_t::entity_value_t::_clean_up() {
}

isaac_save_file_t::bestiary_deaths_t::bestiary_deaths_t(kaitai::kstream* p__io, isaac_save_file_t::bestiary_counter_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_values = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::bestiary_deaths_t::_read() {
    m_values = new std::vector<entity_value_t*>();
    const int l_values = (_parent()->count() / 4);
    for (int i = 0; i < l_values; i++) {
        m_values->push_back(new entity_value_t(m__io, this, m__root));
    }
}

isaac_save_file_t::bestiary_deaths_t::~bestiary_deaths_t() {
    _clean_up();
}

void isaac_save_file_t::bestiary_deaths_t::_clean_up() {
    if (m_values) {
        for (std::vector<entity_value_t*>::iterator it = m_values->begin(); it != m_values->end(); ++it) {
            delete *it;
        }
        delete m_values; m_values = 0;
    }
}

isaac_save_file_t::achievements_chunk_t::achievements_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_achievements = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::achievements_chunk_t::_read() {
    m_count = m__io->read_s4le();
    m_achievements = new std::vector<uint8_t>();
    const int l_achievements = count();
    for (int i = 0; i < l_achievements; i++) {
        m_achievements->push_back(m__io->read_u1());
    }
}

isaac_save_file_t::achievements_chunk_t::~achievements_chunk_t() {
    _clean_up();
}

void isaac_save_file_t::achievements_chunk_t::_clean_up() {
    if (m_achievements) {
        delete m_achievements; m_achievements = 0;
    }
}

isaac_save_file_t::collectibles_chunk_t::collectibles_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_seen_by_id = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::collectibles_chunk_t::_read() {
    m_count = m__io->read_s4le();
    m_seen_by_id = new std::vector<uint8_t>();
    const int l_seen_by_id = count();
    for (int i = 0; i < l_seen_by_id; i++) {
        m_seen_by_id->push_back(m__io->read_u1());
    }
}

isaac_save_file_t::collectibles_chunk_t::~collectibles_chunk_t() {
    _clean_up();
}

void isaac_save_file_t::collectibles_chunk_t::_clean_up() {
    if (m_seen_by_id) {
        delete m_seen_by_id; m_seen_by_id = 0;
    }
}

isaac_save_file_t::level_counters_chunk_t::level_counters_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_counters = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::level_counters_chunk_t::_read() {
    m_count = m__io->read_s4le();
    m_counters = new std::vector<int32_t>();
    const int l_counters = count();
    for (int i = 0; i < l_counters; i++) {
        m_counters->push_back(m__io->read_s4le());
    }
}

isaac_save_file_t::level_counters_chunk_t::~level_counters_chunk_t() {
    _clean_up();
}

void isaac_save_file_t::level_counters_chunk_t::_clean_up() {
    if (m_counters) {
        delete m_counters; m_counters = 0;
    }
}

isaac_save_file_t::save_header_t::save_header_t(kaitai::kstream* p__io, isaac_save_file_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::save_header_t::_read() {
    m_magic = m__io->read_bytes(16);
    if (!(magic() == std::string("\x49\x53\x41\x41\x43\x4E\x47\x53\x41\x56\x45\x30\x39\x52\x20\x20", 16))) {
        throw kaitai::validation_not_equal_error<std::string>(std::string("\x49\x53\x41\x41\x43\x4E\x47\x53\x41\x56\x45\x30\x39\x52\x20\x20", 16), magic(), _io(), std::string("/types/save_header/seq/0"));
    }
    m_crc = m__io->read_s4le();
}

isaac_save_file_t::save_header_t::~save_header_t() {
    _clean_up();
}

void isaac_save_file_t::save_header_t::_clean_up() {
}

isaac_save_file_t::cutscene_counters_chunk_t::cutscene_counters_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_count_by_id = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::cutscene_counters_chunk_t::_read() {
    m_count = m__io->read_s4le();
    m_count_by_id = new std::vector<int32_t>();
    const int l_count_by_id = count();
    for (int i = 0; i < l_count_by_id; i++) {
        m_count_by_id->push_back(m__io->read_s4le());
    }
}

isaac_save_file_t::cutscene_counters_chunk_t::~cutscene_counters_chunk_t() {
    _clean_up();
}

void isaac_save_file_t::cutscene_counters_chunk_t::_clean_up() {
    if (m_count_by_id) {
        delete m_count_by_id; m_count_by_id = 0;
    }
}

isaac_save_file_t::challenge_counters_chunk_t::challenge_counters_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_completed_by_id = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::challenge_counters_chunk_t::_read() {
    m_count = m__io->read_s4le();
    m_completed_by_id = new std::vector<uint8_t>();
    const int l_completed_by_id = count();
    for (int i = 0; i < l_completed_by_id; i++) {
        m_completed_by_id->push_back(m__io->read_u1());
    }
}

isaac_save_file_t::challenge_counters_chunk_t::~challenge_counters_chunk_t() {
    _clean_up();
}

void isaac_save_file_t::challenge_counters_chunk_t::_clean_up() {
    if (m_completed_by_id) {
        delete m_completed_by_id; m_completed_by_id = 0;
    }
}

isaac_save_file_t::bestiary_counters_chunk_t::bestiary_counters_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_counters = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::bestiary_counters_chunk_t::_read() {
    m_count = m__io->read_u4le();
    m_counters = new std::vector<bestiary_counter_t*>();
    const int l_counters = count();
    for (int i = 0; i < l_counters; i++) {
        m_counters->push_back(new bestiary_counter_t(m__io, this, m__root));
    }
}

isaac_save_file_t::bestiary_counters_chunk_t::~bestiary_counters_chunk_t() {
    _clean_up();
}

void isaac_save_file_t::bestiary_counters_chunk_t::_clean_up() {
    if (m_counters) {
        for (std::vector<bestiary_counter_t*>::iterator it = m_counters->begin(); it != m_counters->end(); ++it) {
            delete *it;
        }
        delete m_counters; m_counters = 0;
    }
}

isaac_save_file_t::minibosses_chunk_t::minibosses_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_seen_by_id = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::minibosses_chunk_t::_read() {
    m_count = m__io->read_s4le();
    m_seen_by_id = new std::vector<uint8_t>();
    const int l_seen_by_id = count();
    for (int i = 0; i < l_seen_by_id; i++) {
        m_seen_by_id->push_back(m__io->read_u1());
    }
}

isaac_save_file_t::minibosses_chunk_t::~minibosses_chunk_t() {
    _clean_up();
}

void isaac_save_file_t::minibosses_chunk_t::_clean_up() {
    if (m_seen_by_id) {
        delete m_seen_by_id; m_seen_by_id = 0;
    }
}

isaac_save_file_t::special_seed_counters_chunk_t::special_seed_counters_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_count_by_id = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::special_seed_counters_chunk_t::_read() {
    m_count = m__io->read_s4le();
    m_count_by_id = new std::vector<uint8_t>();
    const int l_count_by_id = count();
    for (int i = 0; i < l_count_by_id; i++) {
        m_count_by_id->push_back(m__io->read_u1());
    }
}

isaac_save_file_t::special_seed_counters_chunk_t::~special_seed_counters_chunk_t() {
    _clean_up();
}

void isaac_save_file_t::special_seed_counters_chunk_t::_clean_up() {
    if (m_count_by_id) {
        delete m_count_by_id; m_count_by_id = 0;
    }
}

isaac_save_file_t::bestiary_encounters_t::bestiary_encounters_t(kaitai::kstream* p__io, isaac_save_file_t::bestiary_counter_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_values = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::bestiary_encounters_t::_read() {
    m_values = new std::vector<entity_value_t*>();
    const int l_values = (_parent()->count() / 4);
    for (int i = 0; i < l_values; i++) {
        m_values->push_back(new entity_value_t(m__io, this, m__root));
    }
}

isaac_save_file_t::bestiary_encounters_t::~bestiary_encounters_t() {
    _clean_up();
}

void isaac_save_file_t::bestiary_encounters_t::_clean_up() {
    if (m_values) {
        for (std::vector<entity_value_t*>::iterator it = m_values->begin(); it != m_values->end(); ++it) {
            delete *it;
        }
        delete m_values; m_values = 0;
    }
}

isaac_save_file_t::bestiary_kills_t::bestiary_kills_t(kaitai::kstream* p__io, isaac_save_file_t::bestiary_counter_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_values = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::bestiary_kills_t::_read() {
    m_values = new std::vector<entity_value_t*>();
    const int l_values = (_parent()->count() / 4);
    for (int i = 0; i < l_values; i++) {
        m_values->push_back(new entity_value_t(m__io, this, m__root));
    }
}

isaac_save_file_t::bestiary_kills_t::~bestiary_kills_t() {
    _clean_up();
}

void isaac_save_file_t::bestiary_kills_t::_clean_up() {
    if (m_values) {
        for (std::vector<entity_value_t*>::iterator it = m_values->begin(); it != m_values->end(); ++it) {
            delete *it;
        }
        delete m_values; m_values = 0;
    }
}

isaac_save_file_t::bestiary_hits_t::bestiary_hits_t(kaitai::kstream* p__io, isaac_save_file_t::bestiary_counter_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_values = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::bestiary_hits_t::_read() {
    m_values = new std::vector<entity_value_t*>();
    const int l_values = (_parent()->count() / 4);
    for (int i = 0; i < l_values; i++) {
        m_values->push_back(new entity_value_t(m__io, this, m__root));
    }
}

isaac_save_file_t::bestiary_hits_t::~bestiary_hits_t() {
    _clean_up();
}

void isaac_save_file_t::bestiary_hits_t::_clean_up() {
    if (m_values) {
        for (std::vector<entity_value_t*>::iterator it = m_values->begin(); it != m_values->end(); ++it) {
            delete *it;
        }
        delete m_values; m_values = 0;
    }
}

isaac_save_file_t::game_settings_chunk_t::game_settings_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_unk = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::game_settings_chunk_t::_read() {
    m_count = m__io->read_s4le();
    m_unk = new std::vector<int32_t>();
    const int l_unk = count();
    for (int i = 0; i < l_unk; i++) {
        m_unk->push_back(m__io->read_s4le());
    }
}

isaac_save_file_t::game_settings_chunk_t::~game_settings_chunk_t() {
    _clean_up();
}

void isaac_save_file_t::game_settings_chunk_t::_clean_up() {
    if (m_unk) {
        delete m_unk; m_unk = 0;
    }
}

isaac_save_file_t::bosses_chunk_t::bosses_chunk_t(kaitai::kstream* p__io, isaac_save_file_t::chunk_t* p__parent, isaac_save_file_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_seen_by_id = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void isaac_save_file_t::bosses_chunk_t::_read() {
    m_count = m__io->read_s4le();
    m_seen_by_id = new std::vector<uint8_t>();
    const int l_seen_by_id = count();
    for (int i = 0; i < l_seen_by_id; i++) {
        m_seen_by_id->push_back(m__io->read_u1());
    }
}

isaac_save_file_t::bosses_chunk_t::~bosses_chunk_t() {
    _clean_up();
}

void isaac_save_file_t::bosses_chunk_t::_clean_up() {
    if (m_seen_by_id) {
        delete m_seen_by_id; m_seen_by_id = 0;
    }
}
