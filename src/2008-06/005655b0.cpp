// from server: 82% by king_originala
struct String {
    unsigned char storage[28];
    String(const char*);
    String(const String&);
    ~String();
};

struct Base {
    unsigned long storage[57];
    Base();
    ~Base();
    void setName(const String&);
};

struct Exception {
    unsigned char storage[36];
    Exception(const String&);
    ~Exception();
};

struct Settings : Base {
    Settings();
};

extern Settings* singleton;
extern unsigned char exceptionType;
extern String __cdecl format(const char*, ...);
extern "C" __declspec(noreturn) void __stdcall throwException(void*, void*);

Settings::Settings() : Base()
{
    storage[0] = 0x82e2ac;
    storage[4] = 0x82e29c;
    storage[5] = 0x82e294;
    storage[8] = 0x82e28c;
    storage[9] = 0x82e27c;
    storage[17] = 0x82e26c;
    storage[25] = 0x82e25c;
    storage[33] = 0x82e24c;
    storage[41] = 0x82e23c;
    storage[49] = 0x82e22c;

    {
        String name("DebugSettings");
        setName(name);
    }

    if (singleton) {
        Exception error(format("singleton %s already exists", "DebugSettings"));
        throwException(&error, &exceptionType);
    }

    singleton = this;
}
