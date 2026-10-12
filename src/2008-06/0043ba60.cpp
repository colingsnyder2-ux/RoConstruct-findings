// from server: 96% by king_originala
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

struct S {
    unsigned first;
    unsigned second;
    unsigned third;
    std::string text;

    S(unsigned a, unsigned b, unsigned c, std::string value);
};

S::S(unsigned a, unsigned b, unsigned c, std::string value)
    : first(a), second(b), third(c), text(value)
{
}
