// from server: 43% by colin
struct CSelectionPropGrid {
    char pad_0x00[0xf0];
    int field_0xf0;
    char pad_0xf4[0x20];
    int field_0x114;
    char pad_0x118[0x14];
    int field_0x12c;
    void sub_43b5d0(int, int);
    void sub_69e340(int, int, int);
    void sub_698cc0(unsigned char);
    CSelectionPropGrid* construct(int, int);
};

extern "C" {
    int __stdcall sub_77e6a8(int);
}

CSelectionPropGrid* CSelectionPropGrid::construct(int a, int b) {
    int* p = (int*)a;
    int v = sub_77e6a8(p[1] + 4);
    sub_69e340(v, 0, 0);
    sub_43b5d0(b, a);
    field_0xf0 = 1;
    field_0x12c = a;
    unsigned char r = ((unsigned char (__thiscall*)(int))((*(int**)a)[1]))(a);
    sub_698cc0(r);
    return this;
}
