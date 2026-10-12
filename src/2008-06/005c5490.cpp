// from server: 96% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;
    template<class C, class T, class A> class basic_string;
    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

extern void (__thiscall *stringConstruct)(std::string*, const char*);
extern void (__thiscall *stringCopy)(std::string*, const std::string&);
extern void (__thiscall *stringDestroy)(std::string*);

namespace std {
    template<class C, class T, class A>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const C*);
        basic_string(const basic_string&);
        ~basic_string();
    };

    template<class C, class T, class A>
    inline basic_string<C, T, A>::basic_string(const C* text)
    {
        stringConstruct(this, text);
    }

    template<class C, class T, class A>
    inline basic_string<C, T, A>::basic_string(const basic_string& other)
    {
        stringCopy(this, other);
    }

    template<class C, class T, class A>
    inline basic_string<C, T, A>::~basic_string()
    {
        stringDestroy(this);
    }
}

extern const float initialValue;

struct Base {
    unsigned char reserved[32];

    Base(std::string, int);
    virtual ~Base();
};

struct Intermediate : Base {
    float value;

    Intermediate(const std::string&, int);
    virtual ~Intermediate();
};

struct S : Intermediate {
    S(int);
    virtual ~S();
};

inline Intermediate::Intermediate(const std::string& name, int argument)
    : Base(name, argument)
{
    value = initialValue;
}

S::S(int argument)
    : Intermediate(std::string("SelectionUpBrick"), argument)
{
}
