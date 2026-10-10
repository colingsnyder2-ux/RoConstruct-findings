// from server: 81% by colin
struct CXTPTabPaintManager_CAppearanceSetFlat
{
    char pad[0xc0];
    int field_c0;
    int field_c4;
    int field_c8;
    int field_cc;
    char pad2[0x2c];
    int field_fc;
};

extern "C" int __cdecl sub_6ad7f0(int, int*);

int __cdecl sub_6ad8a0(int arg)
{
    int local[4];
    CXTPTabPaintManager_CAppearanceSetFlat* p = (CXTPTabPaintManager_CAppearanceSetFlat*)arg;
    local[0] = p->field_c0;
    local[1] = p->field_c4;
    local[2] = p->field_c8;
    local[3] = p->field_cc;
    int r = sub_6ad7f0(p->field_fc, local);
    return (r != 0) ? 1 : 0;
}
