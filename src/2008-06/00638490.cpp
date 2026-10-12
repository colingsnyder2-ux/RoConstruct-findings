// from server: 98% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const basic_string&);
        basic_string(const T*);
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>,
                         std::allocator<char> > String;

extern String* (__thiscall *stringCopy)(String*, const String&);
extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

namespace std {
    template<class T, class Traits, class Alloc>
    __forceinline basic_string<T, Traits, Alloc>::basic_string(
        const basic_string& other)
    {
        stringCopy(this, other);
    }

    template<class T, class Traits, class Alloc>
    __forceinline basic_string<T, Traits, Alloc>::basic_string(const T* text)
    {
        stringConstruct(this, text);
    }

    template<class T, class Traits, class Alloc>
    __forceinline basic_string<T, Traits, Alloc>::~basic_string()
    {
        stringDestroy(this);
    }
}

extern const String initialValue;

struct P0 {
    virtual void f();
    unsigned char padding[12];
};

struct P1 {
    virtual void f();
};

struct P2 {
    virtual void f();
    unsigned char padding[8];
};

struct P3 {
    virtual void f();
};

struct P4 {
    virtual void f();
    unsigned char padding[28];
};

struct P5 {
    virtual void f();
    unsigned char padding[28];
};

struct P6 {
    virtual void f();
    unsigned char padding[28];
};

struct P7 {
    virtual void f();
    unsigned char padding[28];
};

struct P8 {
    virtual void f();
    unsigned char padding[28];
};

struct P9 {
    virtual void f();
    unsigned char padding[104];
};

struct Base : P0, P1, P2, P3, P4, P5, P6, P7, P8, P9 {
    Base();
    ~Base();
    void setName(const String&);
};

struct S : Base {
    String value;
    S();
    virtual void f();
};

S::S() : Base(), value(initialValue)
{
    String name("Value");
    setName(name);
}
