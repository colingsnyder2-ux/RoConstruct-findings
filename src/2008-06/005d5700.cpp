// from server: 63% by king_originala
struct String;
extern void (__thiscall *stringDefaultConstruct)(String*);
extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);
extern const void* __cdecl getLocalScope();

struct String {
    char storage[28];
    String();
    String(const char*);
    ~String();
};

inline String::String() {
    stringDefaultConstruct(this);
}

inline String::String(const char* text) {
    stringConstruct(this, text);
}

inline String::~String() {
    stringDestroy(this);
}

struct Guid {
    String value;
    const void* scope;
    Guid();
};

inline Guid::Guid() : scope(getLocalScope()) {
}

extern char table0[], table10[], table14[], table20[], table24[];
extern char table44[], table64[], table84[], tableA4[], tableC4[];
extern char table130[];

struct Base {
    char storage[0x134];
    Base();
    ~Base();
    void setValue(const String&);
};

struct Tables : Base {
    Tables();
};

inline Tables::Tables() {
    *reinterpret_cast<void**>(storage) = table0;
    *reinterpret_cast<void**>(storage + 0x10) = table10;
    *reinterpret_cast<void**>(storage + 0x14) = table14;
    *reinterpret_cast<void**>(storage + 0x20) = table20;
    *reinterpret_cast<void**>(storage + 0x24) = table24;
    *reinterpret_cast<void**>(storage + 0x44) = table44;
    *reinterpret_cast<void**>(storage + 0x64) = table64;
    *reinterpret_cast<void**>(storage + 0x84) = table84;
    *reinterpret_cast<void**>(storage + 0xA4) = tableA4;
    *reinterpret_cast<void**>(storage + 0xC4) = tableC4;
    *reinterpret_cast<void**>(storage + 0x130) = table130;
}

struct S : Tables {
    Guid first;
    Guid second;
    S();
};

S::S() {
    setValue(String("Shirt Graphic"));
}
