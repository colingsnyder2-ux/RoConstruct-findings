// from server: 87% by king_originala
extern char table00[], table10[], table14[], table20[], table24[];
extern char table44[], table64[], table84[], tablea4[], tablec4[];
extern char table130[];

struct B {
    void* volatile slots[0x164 / 4];
    unsigned short value164;
    volatile unsigned short value166;

    B();
    ~B();
    void g(int);
};

struct S : B {
    S(int);
};

S::S(int argument)
    : B()
{
    slots[0x00 / 4] = table00;
    slots[0x10 / 4] = table10;
    slots[0x14 / 4] = table14;
    slots[0x20 / 4] = table20;
    slots[0x24 / 4] = table24;
    slots[0x44 / 4] = table44;
    slots[0x64 / 4] = table64;
    slots[0x84 / 4] = table84;
    slots[0xa4 / 4] = tablea4;
    slots[0xc4 / 4] = tablec4;
    slots[0x130 / 4] = table130;
    value166 = 0;
    value164 = 0;
    g(argument);
}
