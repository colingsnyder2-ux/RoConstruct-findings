// from server: 98% by king_originala
extern void (__thiscall *string_copy)(void *, const void *);
extern void (__thiscall *string_destroy)(void *);

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

    template<class T, class Traits, class Alloc>
    inline basic_string<T, Traits, Alloc>::basic_string(
        const basic_string& other)
    {
        string_copy(this, &other);
    }

    template<class T, class Traits, class Alloc>
    inline basic_string<T, Traits, Alloc>::~basic_string()
    {
        string_destroy(this);
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct Base {
    virtual void f();
    char storage[32];
    Base(std::string, int);
};

struct ClearBackpack : Base {
    bool flag;
    virtual void f();
    ClearBackpack(int, std::string, bool);
};

ClearBackpack::ClearBackpack(int value, std::string text, bool enabled)
    : Base(text, value), flag(enabled)
{
}
