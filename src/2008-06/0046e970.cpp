// from server: 98% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const basic_string&);
        ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

extern std::string* (__thiscall *copy_string)(
    std::string*, const std::string&);
extern void (__thiscall *destroy_string)(std::string*);

namespace std {
    template<>
    __forceinline string::basic_string(const string& other)
    {
        copy_string(this, other);
    }

    template<>
    __forceinline string::~basic_string()
    {
        destroy_string(this);
    }
}

struct S {
    int first;
    int second;
    std::string name;
    std::string value;

    S(int a, int b, std::string n, std::string v);
};

S::S(int a, int b, std::string n, std::string v)
    : first(a), second(b), name(n), value(v)
{
}
