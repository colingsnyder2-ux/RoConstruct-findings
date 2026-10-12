// from server: 98% by king_originala
typedef void (__thiscall *StringConstruct)(void *, const char *);
typedef void (__thiscall *StringDestroy)(void *);

extern StringConstruct stringConstruct;
extern StringDestroy stringDestroy;

struct String {
    unsigned char storage[32];

    String(const char *text) { stringConstruct(this, text); }
    ~String() { stringDestroy(this); }
};

struct Base {
    unsigned int slots[78];

    Base();
    ~Base();
    void setName(const String &);
};

struct PointerRange {
    void *first;
    void *last;
    void *limit;

    PointerRange() {
        last = 0;
        limit = 0;
        first = 0;
    }

    ~PointerRange();
};

struct S : Base {
    PointerRange range1;
    PointerRange range2;
    unsigned int value;

    S();
};

S::S() : Base(), range1(), range2() {
    slots[0] = 0x824acc;
    slots[4] = 0x824ac0;
    slots[5] = 0x824ab8;
    slots[8] = 0x824ab0;
    slots[9] = 0x824aa0;
    slots[17] = 0x824a90;
    slots[25] = 0x824a80;
    slots[33] = 0x824a70;
    slots[41] = 0x824a60;
    slots[49] = 0x824a50;
    slots[76] = 0x824a44;
    slots[77] = 0x824a38;
    value = 0;
    String name(reinterpret_cast<const char *>(0x824b0c));
    setName(name);
}
