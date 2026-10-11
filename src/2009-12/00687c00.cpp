// from server: 49% by atomic.potato
extern "C" {
    typedef unsigned int size_t;
}

namespace std {
    template<class T> class allocator {};
    template<class E, class T, class A> class basic_string {
    public:
        basic_string();
        basic_string(const basic_string&);
        ~basic_string();
        basic_string substr(size_t, size_t) const;
    };
    typedef basic_string<char, char, allocator<char> > string;
    bool operator==(const string&, const char*);
}

struct RBX_ChangeHistoryService {
    char pad0[0x14];
    unsigned int m_count;
    bool check();
};

bool RBX_ChangeHistoryService::check() {
    if (m_count < 2) {
        return false;
    }
    std::string s;
    std::string sub = s.substr(2, m_count - 2);
    bool r = (sub == "Expected '>' but got EOF in Xml stream");
    return r;
}
