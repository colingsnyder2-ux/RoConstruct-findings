// from server: 96% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        char storage[28];
    public:
        basic_string(const basic_string&);
        ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct Argument {
    std::string name;
    int mode;
};

struct S {
    int open(Argument, int, int);
    bool f(Argument);
};

bool S::f(Argument arg)
{
    return open(arg, 0, 0) != 0;
}
