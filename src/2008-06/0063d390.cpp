// from server: 71% by king_originala
struct String {
    char data[28];
    String(const char*);
    ~String();
};

struct Base {
    char data[0x3ec];
    Base(int);
    ~Base();
};

struct Seat : Base {
    char tail[0x54];
    Seat(int);
    void setName(const String&);
};

Seat::Seat(int complete)
    : Base((complete
        ? (*(unsigned long*)((char*)this + 0x134) = 0x849fdc,
           *(unsigned long*)((char*)this + 0x438) = 0x846144, 0)
        : 0))
{
    char* p = (char*)this;
    unsigned long* table = *(unsigned long**)(p + 0x134);

    *(unsigned long*)(p + 0x000) = 0x849f74;
    *(unsigned long*)(p + 0x010) = 0x849f64;
    *(unsigned long*)(p + 0x014) = 0x849f5c;
    *(unsigned long*)(p + 0x020) = 0x849f54;
    *(unsigned long*)(p + 0x024) = 0x849f44;
    *(unsigned long*)(p + 0x044) = 0x849f34;
    *(unsigned long*)(p + 0x064) = 0x849f24;
    *(unsigned long*)(p + 0x084) = 0x849f14;
    *(unsigned long*)(p + 0x0a4) = 0x849f04;
    *(unsigned long*)(p + 0x0c4) = 0x849ef4;
    *(unsigned long*)(p + 0x130) = 0x849ee8;
    *(unsigned long*)(p + 0x1a0) = 0x849ed8;
    *(unsigned long*)(p + 0x1c0) = 0x849ecc;
    *(unsigned long*)(p + 0x1cc) = 0x849eb4;

    *(unsigned long*)(p + 0x134 + table[1]) = 0x849ea8;
    table = *(unsigned long**)(p + 0x134);
    *(unsigned long*)(p + 0x134 + table[2]) = 0x849ea0;
    table = *(unsigned long**)(p + 0x134);
    *(unsigned long*)(p + 0x134 + table[3]) = 0x849e84;

    table = *(unsigned long**)(p + 0x134);
    unsigned long offset = table[1];
    *(unsigned long*)(p + 0x130 + offset) = offset - 0x2f0;
    table = *(unsigned long**)(p + 0x134);
    offset = table[2];
    *(unsigned long*)(p + 0x130 + offset) = offset - 0x2f8;
    table = *(unsigned long**)(p + 0x134);
    offset = table[3];
    *(unsigned long*)(p + 0x130 + offset) = offset - 0x300;

    *(unsigned long*)(p + 0x3ec) = 0;
    *(unsigned long*)(p + 0x3f0) = 0;
    p[0x3f4] = 0;
    p[0x3f8] = 0;
    *(unsigned long*)(p + 0x400) = 0;
    *(unsigned long*)(p + 0x404) = 0;
    p[0x408] = 0;
    p[0x40c] = 0;
    *(double*)(p + 0x410) = 0.0;
    *(unsigned long*)(p + 0x418) = 0;
    *(unsigned long*)(p + 0x41c) = 0;

    String name("Seat");
    setName(name);
}
