// from server: 74% by king_originala
void __cdecl callback();
bool __cdecl func_0060a2f0();

struct Pair
{
    void (__cdecl *first)();
    unsigned second;
};

struct S
{
    unsigned data[90];

    void initialize();
    S *construct(unsigned value);
};

S *S::construct(unsigned value)
{
    initialize();

    data[0x00 / 4] = 0x0081a154;
    data[0x10 / 4] = 0x0081a144;
    data[0x14 / 4] = 0x0081a13c;
    data[0x20 / 4] = 0x0081a134;
    data[0x24 / 4] = 0x0081a124;
    data[0x44 / 4] = 0x0081a114;
    data[0x64 / 4] = 0x0081a104;
    data[0x84 / 4] = 0x0081a0f4;
    data[0xa4 / 4] = 0x0081a0e4;
    data[0xc4 / 4] = 0x0081a0d4;

    Pair p;
    p.first = callback;
    p.second = value;
    data[0x158 / 4] = 0;

    if (!reinterpret_cast<bool (__cdecl *)(Pair *)>(
            func_0060a2f0)(&p))
    {
        Pair *destination = reinterpret_cast<Pair *>(&data[0x160 / 4]);
        if (destination)
            *destination = p;
        data[0x158 / 4] = 0x00819ce4;
        return this;
    }

    data[0x158 / 4] = 0;
    return this;
}
