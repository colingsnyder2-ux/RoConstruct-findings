// from server: 74% by king_originala
struct StringStorage {
    unsigned char data[28];
    StringStorage(const char *);
    ~StringStorage();
};

extern void (__thiscall *stringConstruct)(StringStorage *, const char *);
extern void (__thiscall *stringDestroy)(StringStorage *);

inline StringStorage::StringStorage(const char *text) {
    stringConstruct(this, text);
}

inline StringStorage::~StringStorage() {
    stringDestroy(this);
}

struct S {
    unsigned char data[0x41c];
    void baseConstruct(int);
    void setName(const StringStorage &);
    S *construct(int);
};

S *S::construct(int mostDerived) {
    if (mostDerived) {
        *reinterpret_cast<unsigned long *>(data + 0x134) = 0x8465e4;
        *reinterpret_cast<unsigned long *>(data + 0x418) = 0x846144;
    }

    baseConstruct(0);

    unsigned long *table =
        *reinterpret_cast<unsigned long **>(data + 0x134);

    *reinterpret_cast<unsigned long *>(data + 0x000) = 0x84657c;
    *reinterpret_cast<unsigned long *>(data + 0x010) = 0x846570;
    *reinterpret_cast<unsigned long *>(data + 0x014) = 0x846568;
    *reinterpret_cast<unsigned long *>(data + 0x020) = 0x846560;
    *reinterpret_cast<unsigned long *>(data + 0x024) = 0x846550;
    *reinterpret_cast<unsigned long *>(data + 0x044) = 0x846540;
    *reinterpret_cast<unsigned long *>(data + 0x064) = 0x846530;
    *reinterpret_cast<unsigned long *>(data + 0x084) = 0x846520;
    *reinterpret_cast<unsigned long *>(data + 0x0a4) = 0x846510;
    *reinterpret_cast<unsigned long *>(data + 0x0c4) = 0x846500;
    *reinterpret_cast<unsigned long *>(data + 0x130) = 0x8464f4;
    *reinterpret_cast<unsigned long *>(data + 0x1a0) = 0x8464e4;
    *reinterpret_cast<unsigned long *>(data + 0x1c0) = 0x8464d8;
    *reinterpret_cast<unsigned long *>(data + 0x1cc) = 0x8464c0;

    *reinterpret_cast<unsigned long *>(data + 0x134 + table[1]) = 0x8464b4;
    table = *reinterpret_cast<unsigned long **>(data + 0x134);
    *reinterpret_cast<unsigned long *>(data + 0x134 + table[2]) = 0x8464ac;
    table = *reinterpret_cast<unsigned long **>(data + 0x134);
    *reinterpret_cast<unsigned long *>(data + 0x134 + table[3]) = 0x846490;

    table = *reinterpret_cast<unsigned long **>(data + 0x134);
    unsigned long offset = table[1];
    *reinterpret_cast<unsigned long *>(data + 0x130 + offset) = offset - 0x2d0;
    table = *reinterpret_cast<unsigned long **>(data + 0x134);
    offset = table[2];
    *reinterpret_cast<unsigned long *>(data + 0x130 + offset) = offset - 0x2d8;
    table = *reinterpret_cast<unsigned long **>(data + 0x134);
    offset = table[3];
    *reinterpret_cast<unsigned long *>(data + 0x130 + offset) = offset - 0x2e0;

    *reinterpret_cast<unsigned long *>(data + 0x3ec) = 0;
    *reinterpret_cast<unsigned long *>(data + 0x3f0) = 0;
    data[0x3f4] = 0;
    data[0x3f8] = 0;
    *reinterpret_cast<unsigned long *>(data + 0x3fc) = 0xc2;

    {
        StringStorage name(reinterpret_cast<const char *>(0x95be6c));
        setName(name);
    }

    return this;
}
