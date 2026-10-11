// from server: 40% by colin
struct WeldSelectionVerb {
    char pad0[4];
    int field4;
    char pad8[4];
    int fieldC;
    char pad10[4];
    char field14[0x0C];
    int field20;
    void method();
};

extern "C" int __stdcall sub_4153B0(int);
extern "C" int __stdcall sub_4531E0(int);
extern "C" int __stdcall sub_57D250(int);
extern "C" int __stdcall sub_57E4D0(int, int, int, int, int, int, int);
extern "C" int __stdcall sub_581CC0(int, int);
extern "C" int __stdcall sub_58C5C0(int, int);
extern "C" int __stdcall sub_5BD820(int, int);
extern "C" int __stdcall sub_802890();

void WeldSelectionVerb::method()
{
    int saved;
    int* p;
    int a, b, c, d, e, f, g;

    sub_57D250(this->field20);
    if (this->field20 != 0)
        sub_4153B0(this->field20);

    sub_581CC0((int)(this + 0x14), 1);
    p = *(int**)(*(int*)((char*)this + 0x14 + 0x154));
    a = p[4];
    if (p[3] > a)
        sub_802890();
    b = *p;

    sub_581CC0((int)(this + 0x14), 1);
    p = *(int**)(*(int*)((char*)this + 0x14 + 0x154));
    c = p[3];
    if (c > p[4])
        sub_802890();
    d = *p;

    sub_57E4D0((int)&saved, d, c, b, a, 0x57EB80, 0x57EB80);

    if (this->field20 != 0)
        e = sub_4531E0(this->field20);
    else
        e = 0;
    sub_5BD820(e, 8);

    f = this->fieldC;
    g = this->field4 + 4;
    if (*(int*)(g + 0x18) >= 0x10)
        g = *(int*)(g + 4);
    else
        g = g + 4;
    sub_58C5C0(g, f);

    saved = 1;
    (*(void(**)(int))saved)(saved);
}
