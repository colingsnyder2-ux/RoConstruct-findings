// from server: 93% by king_originala
struct String;
typedef void (__thiscall *StringConstructor)(String*, const char*);
extern StringConstructor stringConstructor;

struct String
{
    unsigned char storage[28];
    String(const char*, volatile int&);
    String(const String&);
};

inline String::String(const char* text, volatile int& slot)
{
    slot = reinterpret_cast<int>(this);
    stringConstructor(this, text);
}

struct Base
{
    Base(String, int);
    virtual void v();
};

struct S : Base
{
    S(volatile int, const char*);
    virtual void v();
};

S::S(volatile int value, const char* text)
    : Base(String(text, value), value)
{
}
