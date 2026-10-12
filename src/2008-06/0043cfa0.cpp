// from server: 97% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> struct allocator;
    template<class C, class T, class A> class basic_string {
    public:
        const C* c_str() const;
    };
}

typedef std::basic_string<char, std::char_traits<char>,
                         std::allocator<char> > String;

typedef const char* (__thiscall *StringAccess)(const String*);
extern StringAccess const string_c_str;

template<class C, class T, class A>
inline const C* std::basic_string<C, T, A>::c_str() const
{
    return string_c_str(this);
}

struct Description {
    char pad[4];
    String name;
};

struct Source {
    virtual void reserved();
    virtual bool value();
    Description* description;
};

struct Primary {
    virtual void primary();
    char pad[0x1c];
};

struct Auxiliary {
    virtual void auxiliary();
    char pad[0xd8];
    int enabled;
    char tail[0x0c];
};

struct CXTPPropertyGridItem : Primary, Auxiliary {
    CXTPPropertyGridItem(const char*, int, int);
    ~CXTPPropertyGridItem();
    void OnValueChanged(int);
};

struct Listener {
    virtual void notify();
    char pad[0x1c];
    Listener(Source*, int);
    ~Listener();
};

struct S : CXTPPropertyGridItem, Listener {
    Source* source;
    S(Source*, int);
    virtual void primary();
    virtual void auxiliary();
    virtual void notify();
};

S::S(Source* p, int n)
    : CXTPPropertyGridItem(p->description->name.c_str(), 0, 0),
      Listener(p, n),
      source(p)
{
    enabled = 1;
    OnValueChanged(p->value());
}
