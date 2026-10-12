// from server: 95% by king_originala
struct Name;
extern const Name& __cdecl getLocalScope();
extern void (__thiscall *stringConstruct)(void*);

extern char table0[], table10[], table14[], table20[], table24[];
extern char table44[], table64[], table84[], tablea4[], tablec4[];

struct String {
    char storage[28];
    String();
    ~String();
};

inline String::String()
{
    stringConstruct(this);
}

struct Guid {
    String text;
    const Name* scope;
    Guid();
};

inline Guid::Guid() : scope(&getLocalScope())
{
}

struct Base {
    char storage[0x130];
    Base();
    ~Base();
};

struct Tool : Base {
    volatile unsigned int field130;
    volatile unsigned int field134;
    volatile unsigned short field138;
    volatile unsigned short field13a;
    volatile unsigned short field13c;
    volatile unsigned short field13e;
    volatile unsigned short field140;
    volatile unsigned short field142;
    Guid guid;
    unsigned int field164;

    void initializeTables();
    Tool();
};

inline void Tool::initializeTables()
{
    *reinterpret_cast<volatile unsigned int*>(reinterpret_cast<char*>(this) + 0x00) = reinterpret_cast<unsigned int>(table0);
    *reinterpret_cast<volatile unsigned int*>(reinterpret_cast<char*>(this) + 0x10) = reinterpret_cast<unsigned int>(table10);
    *reinterpret_cast<volatile unsigned int*>(reinterpret_cast<char*>(this) + 0x14) = reinterpret_cast<unsigned int>(table14);
    *reinterpret_cast<volatile unsigned int*>(reinterpret_cast<char*>(this) + 0x20) = reinterpret_cast<unsigned int>(table20);
    *reinterpret_cast<volatile unsigned int*>(reinterpret_cast<char*>(this) + 0x24) = reinterpret_cast<unsigned int>(table24);
    *reinterpret_cast<volatile unsigned int*>(reinterpret_cast<char*>(this) + 0x44) = reinterpret_cast<unsigned int>(table44);
    *reinterpret_cast<volatile unsigned int*>(reinterpret_cast<char*>(this) + 0x64) = reinterpret_cast<unsigned int>(table64);
    *reinterpret_cast<volatile unsigned int*>(reinterpret_cast<char*>(this) + 0x84) = reinterpret_cast<unsigned int>(table84);
    *reinterpret_cast<volatile unsigned int*>(reinterpret_cast<char*>(this) + 0xa4) = reinterpret_cast<unsigned int>(tablea4);
    *reinterpret_cast<volatile unsigned int*>(reinterpret_cast<char*>(this) + 0xc4) = reinterpret_cast<unsigned int>(tablec4);
}

Tool::Tool()
    : field130((initializeTables(), 0)),
      field134(0),
      field138((field13a = 0, 0)),
      field13c(0),
      field13e(0),
      field140(0),
      field142(0),
      field164(0)
{
}
