// from server: 98% by king_originala
extern void (__thiscall *stringCopy)(void*, const void*);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        char storage[28];
    public:
        basic_string(const basic_string&);
        ~basic_string();
    };

    template<class T, class Traits, class Allocator>
    inline basic_string<T, Traits, Allocator>::basic_string(
        const basic_string& other)
    {
        stringCopy(this, &other);
    }
}

typedef std::basic_string<char, std::char_traits<char>,
                         std::allocator<char> > String;

void* __cdecl lookup(void*, int);

struct Base {
    virtual void dispatch();
    char storage[32];

    Base(String, int);
    ~Base();
};

struct S : Base {
    void* selection;

    virtual void dispatch();
    S(const String&, int, void*);
};

S::S(const String& name, int kind, void* source)
    : Base(name, kind)
{
    selection = lookup(source, -1);
}
