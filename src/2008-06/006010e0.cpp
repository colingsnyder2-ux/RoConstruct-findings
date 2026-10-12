// from server: 90% by king_originala
struct Name;
extern const Name& __cdecl getLocalScope();
extern void (__thiscall *constructString)(void*);

struct String
{
    unsigned char data[28];
    String();
    ~String();
};

inline String::String()
{
    constructString(this);
}

struct Scope
{
    const Name* value;
    Scope();
    ~Scope();
};

inline Scope::Scope() : value(&getLocalScope())
{
}

struct Slot
{
    unsigned int value;
    Slot();
    ~Slot();
};

inline Slot::Slot() : value(0)
{
}

struct S
{
    String text;
    Scope scope;
    Slot a;
    Slot b;
    Slot c;
    Slot d;
    float x;
    float y;

    S(const char*, unsigned int);
    void setString(const char*, unsigned int);
};

S::S(const char* data, unsigned int length)
    : x(0.0f), y(0.0f)
{
    setString(data, length);
}
