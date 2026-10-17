// from server: 82% by colin
extern unsigned char table0[], table10[], table14[], table20[];
extern unsigned char table24[], table44[], table64[], table84[];
extern unsigned char tableA4[], tableC4[], table130[], table138[];
extern const float value160, value168, value16C, value170;
extern const float value174, value178, value17C, value180, value18C;

struct S {
    void* t0;
    unsigned char pad04[12];
    void* t10;
    void* t14;
    unsigned char pad18[8];
    void* t20;
    void* t24;
    unsigned char pad28[28];
    void* t44;
    unsigned char pad48[28];
    void* t64;
    unsigned char pad68[28];
    void* t84;
    unsigned char pad88[28];
    void* tA4;
    unsigned char padA8[28];
    void* tC4;
    unsigned char padC8[104];
    void* t130;
    unsigned char pad134[4];
    void* t138;
    unsigned char pad13C[12];
    unsigned char flag148;
    unsigned char pad149[3];
    unsigned int field14C;
    unsigned int field150;
    float field154, field158, field15C, field160;
    unsigned char flag164;
    unsigned char pad165[3];
    float field168, field16C, field170, field174;
    float field178, field17C, field180, field184, field188, field18C;

    unsigned int base(const char*);
    S* init();
};

S* S::init()
{
    base((const char*)0x95c740);
    t0 = table0;
    t10 = table10;
    t14 = table14;
    t20 = table20;
    t24 = table24;
    t44 = table44;
    t64 = table64;
    t84 = table84;
    tA4 = tableA4;
    tC4 = tableC4;
    t130 = table130;
    t138 = table138;
    flag148 = 0;
    field14C = 0;
    field150 = 0;
    field154 = 0.0f;
    field158 = 0.0f;
    field15C = 0.0f;
    flag164 = 0;
    field160 = value160;
    field168 = value168;
    field16C = value16C;
    field170 = value170;
    field174 = value174;
    field178 = value178;
    field17C = value17C;
    field180 = value180;
    field184 = field180;
    field188 = 0.0f;
    field18C = value18C;
    return this;
}
