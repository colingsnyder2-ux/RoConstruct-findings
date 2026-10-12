// from server: 84% by king_originala
struct String;
extern void (__thiscall *stringConstruct)(String *);

struct String {
    char storage[28];
    String();
    ~String();
};

inline String::String()
{
    stringConstruct(this);
}

struct Name;
extern const Name &__cdecl getLocalScope();

struct Scope {
    String text;
    const Name *name;
    Scope();
};

inline Scope::Scope()
{
    name = &getLocalScope();
}

struct S {
    unsigned char reserved[4];
    Scope scope;
    unsigned int value;
    S();
};

S::S()
{
    value = 0;
}
