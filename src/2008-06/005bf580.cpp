// from server: 94% by king_originala
struct String;

typedef void (__thiscall *StringConstructor)(String *, const char *);
typedef void (__thiscall *StringDestructor)(String *);

extern StringConstructor stringConstructor;
extern StringDestructor stringDestructor;

struct String {
    unsigned char storage[28];
    String(const char *);
    ~String();
};

inline String::String(const char *text) {
    stringConstructor(this, text);
}

inline String::~String() {
    stringDestructor(this);
}

extern String __cdecl format(const char *, ...);

struct Exception {
    unsigned char storage[40];
    Exception(const String &);
};

extern unsigned char exceptionType;
extern "C" __declspec(noreturn) void __stdcall throwException(void *, void *);

struct Base {
    unsigned char storage[200];
    Base();
    ~Base();
    void setName(const String &);
};

struct Settings : Base {
    Settings();
};

extern Settings *singleton;

Settings::Settings() : Base() {
    *reinterpret_cast<unsigned long *>(storage) = 0x8385f4;
    *reinterpret_cast<unsigned long *>(storage + 0x10) = 0x8385e8;
    *reinterpret_cast<unsigned long *>(storage + 0x14) = 0x8385e0;
    *reinterpret_cast<unsigned long *>(storage + 0x20) = 0x8385d8;
    *reinterpret_cast<unsigned long *>(storage + 0x24) = 0x8385c8;
    *reinterpret_cast<unsigned long *>(storage + 0x44) = 0x8385b8;
    *reinterpret_cast<unsigned long *>(storage + 0x64) = 0x8385a8;
    *reinterpret_cast<unsigned long *>(storage + 0x84) = 0x838598;
    *reinterpret_cast<unsigned long *>(storage + 0xa4) = 0x838588;
    *reinterpret_cast<unsigned long *>(storage + 0xc4) = 0x838578;

    {
        String name("GameSettings");
        setName(name);
    }

    if (singleton) {
        String message = format("singleton %s already exists", "GameSettings");
        Exception error(message);
        throwException(&error, &exceptionType);
    }

    singleton = this;
}
