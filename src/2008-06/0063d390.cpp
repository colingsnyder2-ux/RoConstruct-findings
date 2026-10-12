// from server: 74% by king_originala
struct String {
    char storage[28];
    String(const char*);
    ~String();
};

extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

inline String::String(const char* text)
{
    stringConstruct(this, text);
}

inline String::~String()
{
    stringDestroy(this);
}

struct Pair {
    unsigned int first;
    unsigned int second;
    ~Pair();
};

struct S {
    char prefix[0x3ec];
    Pair a;
    unsigned char flag1;
    char pad1[3];
    unsigned char flag2;
    char pad2[7];
    Pair b;
    unsigned char flag3;
    char pad3[3];
    unsigned char flag4;
    char pad4[3];
    double number;
    Pair c;
    char tail[0x20];

    void __thiscall initialize(int);
    void __thiscall setName(const String&);
    S(int);
};

S::S(int complete)
{
    char* p = (char*)this;

    if (complete) {
        *(unsigned int*)(p + 0x134) = 0x849fdc;
        *(unsigned int*)(p + 0x438) = 0x846144;
    }

    initialize(0);

    int* table = *(int**)(p + 0x134);
    *(unsigned int*)(p + 0x000) = 0x849f74;
    *(unsigned int*)(p + 0x010) = 0x849f64;
    *(unsigned int*)(p + 0x014) = 0x849f5c;
    *(unsigned int*)(p + 0x020) = 0x849f54;
    *(unsigned int*)(p + 0x024) = 0x849f44;
    *(unsigned int*)(p + 0x044) = 0x849f34;
    *(unsigned int*)(p + 0x064) = 0x849f24;
    *(unsigned int*)(p + 0x084) = 0x849f14;
    *(unsigned int*)(p + 0x0a4) = 0x849f04;
    *(unsigned int*)(p + 0x0c4) = 0x849ef4;
    *(unsigned int*)(p + 0x130) = 0x849ee8;
    *(unsigned int*)(p + 0x1a0) = 0x849ed8;
    *(unsigned int*)(p + 0x1c0) = 0x849ecc;
    *(unsigned int*)(p + 0x1cc) = 0x849eb4;

    *(unsigned int*)(p + 0x134 + table[1]) = 0x849ea8;
    table = *(int**)(p + 0x134);
    *(unsigned int*)(p + 0x134 + table[2]) = 0x849ea0;
    table = *(int**)(p + 0x134);
    *(unsigned int*)(p + 0x134 + table[3]) = 0x849e84;

    table = *(int**)(p + 0x134);
    int offset = table[1];
    *(int*)(p + 0x130 + offset) = offset - 0x2f0;
    table = *(int**)(p + 0x134);
    offset = table[2];
    *(int*)(p + 0x130 + offset) = offset - 0x2f8;
    table = *(int**)(p + 0x134);
    offset = table[3];
    *(int*)(p + 0x130 + offset) = offset - 0x300;

    a.first = 0;
    a.second = 0;
    flag1 = 0;
    flag2 = 0;
    b.first = 0;
    b.second = 0;
    flag3 = 0;
    flag4 = 0;
    *(volatile double*)&number = 0.0;
    c.first = 0;
    c.second = 0;

    String name("Seat");
    setName(name);
}
