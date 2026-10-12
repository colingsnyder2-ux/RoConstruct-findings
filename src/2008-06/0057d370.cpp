// from server: 96% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const T*);
        ~basic_string() {}
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

typedef std::string* (__thiscall *StringConstructor)(std::string*, const char*);
extern StringConstructor stringConstructor;

template<>
inline std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(const char* text)
{
    stringConstructor(this, text);
}

struct Input {
    unsigned char padding[0x1c8];
    unsigned char signal;
};

struct Base {
    Base(void*, std::string);
    virtual void slot();
};

struct S : Base {
    S(Input*);
    virtual void slot();
};

S::S(Input* input)
    : Base(input ? &input->signal : 0, "ForceAssertion")
{
}
