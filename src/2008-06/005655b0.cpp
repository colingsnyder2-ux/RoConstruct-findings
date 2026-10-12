// from server: 96% by king_originala
struct String {
    char storage[28];
};

extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct ScopedString : String {
    ScopedString(const char* text) { stringConstruct(this, text); }
    ~ScopedString() { stringDestroy(this); }
};

struct Base {
    unsigned int words[75];
    Base();
    ~Base();
    void setValue(const String&);
};

struct Error {
    char storage[40];
    Error(const String&);
    ~Error();
};

extern ScopedString __cdecl formatString(const char*, ...);
extern "C" __declspec(noreturn) void __stdcall
throwException(void*, void*);

extern unsigned int table0[];
extern unsigned int table10[];
extern unsigned int table14[];
extern unsigned int table20[];
extern unsigned int table24[];
extern unsigned int table44[];
extern unsigned int table64[];
extern unsigned int table84[];
extern unsigned int tableA4[];
extern unsigned int tableC4[];
extern char errorType;

struct S : Base {
    S();
};

extern S* singleton;

S::S()
{
    words[0] = reinterpret_cast<unsigned int>(table0);
    words[4] = reinterpret_cast<unsigned int>(table10);
    words[5] = reinterpret_cast<unsigned int>(table14);
    words[8] = reinterpret_cast<unsigned int>(table20);
    words[9] = reinterpret_cast<unsigned int>(table24);
    words[17] = reinterpret_cast<unsigned int>(table44);
    words[25] = reinterpret_cast<unsigned int>(table64);
    words[33] = reinterpret_cast<unsigned int>(table84);
    words[41] = reinterpret_cast<unsigned int>(tableA4);
    words[49] = reinterpret_cast<unsigned int>(tableC4);

    {
        ScopedString name("DebugSettings");
        setValue(name);
    }

    if (singleton) {
        throwException(
            &Error(formatString("singleton %s already exists",
                                "DebugSettings")),
            &errorType);
    }

    singleton = this;
}
