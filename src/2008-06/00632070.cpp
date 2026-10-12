// from server: 81% by king_originala
extern const char name_95C708[];
extern const float value_847AE8;
extern const float value_847A98;
extern const float value_847A80;

extern const unsigned long table_847AA4[];
extern const unsigned long table_847A90[];
extern const unsigned long table_847A88[];
extern const unsigned long table_847A7C[];
extern const unsigned long table_847A6C[];
extern const unsigned long table_847A5C[];
extern const unsigned long table_847A4C[];
extern const unsigned long table_847A3C[];
extern const unsigned long table_847A2C[];
extern const unsigned long table_847A1C[];
extern const unsigned long table_847A00[];
extern const unsigned long table_8479F4[];

struct Base {
    const unsigned long *p00;
    char pad04[12];
    const unsigned long *p10;
    const unsigned long *p14;
    char pad18[8];
    const unsigned long *p20;
    const unsigned long *p24;
    char pad28[28];
    const unsigned long *p44;
    char pad48[28];
    const unsigned long *p64;
    char pad68[28];
    const unsigned long *p84;
    char pad88[28];
    const unsigned long *pA4;
    char padA8[28];
    const unsigned long *pC4;
    char padC8[104];
    const unsigned long *p130;
    char pad134[4];
    const unsigned long *p138;
    char pad13C[12];

    Base(const char *);
    ~Base();
};

struct NameItem {
    NameItem();
};

struct S : Base {
    float f148;
    float f14C;
    float f150;
    float f154;
    float f158;
    NameItem item;

    S();
};

S::S()
    : Base(name_95C708),
      f148(value_847AE8),
      f14C((p00 = table_847AA4,
            p10 = table_847A90,
            value_847A98)),
      f150((p14 = table_847A88,
            p20 = table_847A7C,
            p24 = table_847A6C,
            p44 = table_847A5C,
            p64 = table_847A4C,
            p84 = table_847A3C,
            pA4 = table_847A2C,
            pC4 = table_847A1C,
            p130 = table_847A00,
            p138 = table_8479F4,
            value_847A80)),
      f154(0.0f),
      f158(value_847A80),
      item()
{
}
