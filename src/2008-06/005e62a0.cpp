// from server: 67% by colin
struct Clump {
    char pad0[0x14];
    unsigned char f14;
    char pad15[0x3f];
    unsigned char f54;
    char pad55[0x14];
    unsigned char f69;
    char pad6a[0x16];
    Clump* f80;
    void mark();
};

void Clump::mark() {
    unsigned char one = 1;
    f14 = one;
    f54 = one;
    f69 = one;
    Clump** pp = &f80;
    while (*pp != 0) {
        Clump* p = *pp;
        p->f14 = one;
        p->f54 = one;
        p->f69 = one;
        pp = &p->f80;
    }
}
