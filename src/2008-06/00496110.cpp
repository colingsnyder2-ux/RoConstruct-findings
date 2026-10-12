// from server: 97% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class C, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const basic_string&);
        ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

typedef void* (__thiscall *StringCopyConstructor)(
    void*, const std::string&);

extern StringCopyConstructor stringCopyConstructor;

template<class C, class Traits, class Alloc>
inline std::basic_string<C, Traits, Alloc>::basic_string(
    const basic_string& other)
{
    stringCopyConstructor(this, other);
}

struct S {
    unsigned int value;
    std::string first;
    std::string second;

    S(const S&);
};

S::S(const S& other)
    : value(other.value),
      first(other.first),
      second(other.second)
{
}
