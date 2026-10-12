// from server: 94% by king_originala
struct RevoluteLink {
    char pad0[8];
    char flag8;
    char pad9[0x80 - 9];
    volatile float f80;
    float f84;
    float f88;
    float f8c;
    float f90;
    float f94;
    float f98;
    float f9c;
    float fa0;
    float fa4;
    float fa8;
    float fac;
    float fb0;
    void reset();
};

extern "C" void __stdcall sub_658d20();

void RevoluteLink::reset()
{
    if (flag8 != 0)
        sub_658d20();
    float v = f80;
    f84 = 0.0f;
    f8c = 0.0f;
    f88 = v;
    f90 = 0.0f;
    f94 = 0.0f;
    f98 = 0.0f;
    f9c = 0.0f;
    fa0 = 0.0f;
    fa4 = 0.0f;
    fa8 = 0.0f;
    fac = 0.0f;
    fb0 = 0.0f;
}
