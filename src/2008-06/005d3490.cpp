// from server: 74% by king_originala
struct String {
    char storage[28];
    String(const char*);
    ~String();
};

extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

__forceinline String::String(const char* text) {
    stringConstruct(this, text);
}

__forceinline String::~String() {
    stringDestroy(this);
}

struct Flag {
    volatile int first;
    volatile int second;
    Flag();
    ~Flag();
};

__forceinline Flag::Flag() : first(0), second(0) {}
__forceinline Flag::~Flag() {}

struct Base {
    int data[250];
    Base(int);
    ~Base();
};

struct S : Base {
    int duration;
    int unused;
    Flag flag;
    char enabled;
    char padding1[3];
    char neutral;
    char padding2[3];
    char active;
    char locked;
    char padding3[2];
    int delay;
    char tail[28];

    S(int);
    int initializeTables();
    void setName(const String&);
};

__forceinline int S::initializeTables() {
    int* table = reinterpret_cast<int*>(data[0x134 / 4]);

    data[0x000 / 4] = 0x83c0d4;
    data[0x010 / 4] = 0x83c0c8;
    data[0x014 / 4] = 0x83c0c0;
    data[0x020 / 4] = 0x83c0b8;
    data[0x024 / 4] = 0x83c0a8;
    data[0x044 / 4] = 0x83c098;
    data[0x064 / 4] = 0x83c088;
    data[0x084 / 4] = 0x83c078;
    data[0x0a4 / 4] = 0x83c068;
    data[0x0c4 / 4] = 0x83c058;
    data[0x130 / 4] = 0x83c04c;
    data[0x1a0 / 4] = 0x83c03c;
    data[0x1c0 / 4] = 0x83c030;
    data[0x1cc / 4] = 0x83c018;

    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x134 + table[1]) = 0x83c00c;
    table = reinterpret_cast<int*>(data[0x134 / 4]);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x134 + table[2]) = 0x83c004;
    table = reinterpret_cast<int*>(data[0x134 / 4]);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x134 + table[3]) = 0x83bfe8;

    table = reinterpret_cast<int*>(data[0x134 / 4]);
    int offset = table[1];
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x130 + offset) = offset - 0x2d8;

    table = reinterpret_cast<int*>(data[0x134 / 4]);
    offset = table[2];
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x130 + offset) = offset - 0x2e0;

    table = reinterpret_cast<int*>(data[0x134 / 4]);
    offset = table[3];
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x130 + offset) = offset - 0x2e8;

    return 194;
}

S::S(int initialize)
    : Base(initialize
               ? (data[0x134 / 4] = 0x83c13c,
                  *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x420) = 0x846144,
                  0)
               : 0),
      duration(initializeTables()),
      flag(),
      enabled(0),
      neutral(0),
      active(1),
      locked(0),
      delay(10)
{
    String name(reinterpret_cast<const char*>(0x9525cc));
    setName(name);
}
