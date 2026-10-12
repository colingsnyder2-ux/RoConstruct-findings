// from server: 93% by king_originala
struct String
{
    char storage[28];
    String(const char*);
    ~String();
};

extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

inline String::String(const char* text)
{
    stringConstruct(this, text);
}

inline String::~String()
{
    stringDestroy(this);
}

struct Base
{
    unsigned long data[75];
    Base();
    ~Base();
};

struct Exception
{
    char storage[40];
    Exception(const String&);
};

extern String __cdecl format(const char*, ...);
extern "C" __declspec(noreturn) void __stdcall throwException(void*, void*);

struct S : Base
{
    S();
    void setValue(const String&);
};

S::S()
{
    data[0] = 0x824074;
    data[4] = 0x824068;
    data[5] = 0x824060;
    data[8] = 0x824058;
    data[9] = 0x824048;
    data[17] = 0x824038;
    data[25] = 0x824028;
    data[33] = 0x824018;
    data[41] = 0x824008;
    data[49] = 0x823ff8;

    {
        String name((const char*)0x823ec0);
        setValue(name);
    }

    if (*(S**)0x9706d0)
    {
        throwException(
            &Exception(format((const char*)0x80c7c4,
                              (const char*)0x823ec0)),
            (void*)0x8d1bc8);
    }

    *(S**)0x9706d0 = this;
}
