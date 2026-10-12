// from server: 98% by king_originala
struct String;
extern void (__thiscall *ConstructString)(String*, const char*);

struct String
{
    char* data;
    __forceinline String(const char*);
    String(const String&);
    ~String();
};

__forceinline String::String(const char* text)
{
    ConstructString(this, text);
}

extern const char description[];

struct First
{
    virtual ~First();
    char padding[0x1c];
};

struct Second
{
    virtual ~Second();
    char padding[0xe8];
};

struct Third
{
    virtual ~Third();
};

struct Base : First, Second, Third
{
    Base(int, int);
    virtual ~Base();
    void SetDescription(String);
};

struct S : Base
{
    S(int, int);
    virtual ~S();
};

S::S(int a, int b) : Base(a, b)
{
    SetDescription(String(description));
}
