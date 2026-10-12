// from server: 95% by king_originala
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

struct Base {
    int data[250];
    Base(int);
    ~Base();
};

extern int table134[];
extern int table420[];
extern int table000[];
extern int table010[];
extern int table014[];
extern int table020[];
extern int table024[];
extern int table044[];
extern int table064[];
extern int table084[];
extern int table0a4[];
extern int table0c4[];
extern int table130[];
extern int table1a0[];
extern int table1c0[];
extern int table1cc[];
extern int virtualTable1[];
extern int virtualTable2[];
extern int virtualTable3[];
extern const char spawnName[];

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
    int prepare(int);
    int initializeTables();
    void setName(const String&);
};

__forceinline int S::prepare(int initialize) {
    volatile int constructionState = 0;
    if (initialize) {
        data[0x134 / 4] = reinterpret_cast<int>(table134);
        *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x420) =
            reinterpret_cast<int>(table420);
    }
    return 0;
}

__forceinline int S::initializeTables() {
    int* table = reinterpret_cast<int*>(data[0x134 / 4]);

    data[0x000 / 4] = reinterpret_cast<int>(table000);
    data[0x010 / 4] = reinterpret_cast<int>(table010);
    data[0x014 / 4] = reinterpret_cast<int>(table014);
    data[0x020 / 4] = reinterpret_cast<int>(table020);
    data[0x024 / 4] = reinterpret_cast<int>(table024);
    data[0x044 / 4] = reinterpret_cast<int>(table044);
    data[0x064 / 4] = reinterpret_cast<int>(table064);
    data[0x084 / 4] = reinterpret_cast<int>(table084);
    data[0x0a4 / 4] = reinterpret_cast<int>(table0a4);
    data[0x0c4 / 4] = reinterpret_cast<int>(table0c4);
    data[0x130 / 4] = reinterpret_cast<int>(table130);
    data[0x1a0 / 4] = reinterpret_cast<int>(table1a0);
    data[0x1c0 / 4] = reinterpret_cast<int>(table1c0);
    data[0x1cc / 4] = reinterpret_cast<int>(table1cc);

    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x134 + table[1]) =
        reinterpret_cast<int>(virtualTable1);
    table = reinterpret_cast<int*>(data[0x134 / 4]);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x134 + table[2]) =
        reinterpret_cast<int>(virtualTable2);
    table = reinterpret_cast<int*>(data[0x134 / 4]);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x134 + table[3]) =
        reinterpret_cast<int>(virtualTable3);

    table = reinterpret_cast<int*>(data[0x134 / 4]);
    int offset = table[1];
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x130 + offset) =
        offset - 0x2d8;
    table = reinterpret_cast<int*>(data[0x134 / 4]);
    offset = table[2];
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x130 + offset) =
        offset - 0x2e0;
    table = reinterpret_cast<int*>(data[0x134 / 4]);
    offset = table[3];
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x130 + offset) =
        offset - 0x2e8;

    return 194;
}

S::S(int initialize)
    : Base(prepare(initialize)),
      duration(initializeTables()),
      flag(),
      enabled(0),
      neutral(0),
      active(1),
      locked(0),
      delay(10)
{
    String name(spawnName);
    setName(name);
}
