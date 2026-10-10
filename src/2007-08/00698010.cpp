// from server: 74% by colin
struct CPropertyGridItemBrickColor {
    char pad_0[0x20];
    char pad_20[0x54];
    int field_74;
    int sub_6713d0(int*);
    int sub_697d30();
    int f(int, int, int, int, int);
};

int CPropertyGridItemBrickColor::f(int a1, int a2, int a3, int a4, int a5) {
    int local;
    if (sub_6713d0(&local))
        return 0x80070057;

    int* p = (int*)a5;
    CPropertyGridItemBrickColor* self = (CPropertyGridItemBrickColor*)((char*)this - 0x20);

    *(unsigned short*)p = 3;

    int r = self->sub_697d30();
    unsigned int v = (r != 0) ? 4u : 0u;
    v |= 0x300000;
    p[2] = v;

    if (self->field_74 == 0) {
        v |= 0x8000;
        p[2] = v;
    }

    int (*fn)(void*) = *(int (**)(void*))(*(int*)self + 0x58);
    if (fn(self))
        p[2] |= 0x40;

    return 0;
}
