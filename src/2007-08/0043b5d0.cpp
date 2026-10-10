// from server: 28% by colin
struct CSelectionPropGrid {
    void* vtable;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    void init(int);
    CSelectionPropGrid(int, int);
};

void CSelectionPropGrid::init(int)
{
}

CSelectionPropGrid::CSelectionPropGrid(int a, int b)
{
    vtable = (void*)0x78d574;
    field_8 = 0;
    field_c = 0;
    field_10 = 0;
    field_14 = b;
    init(*(int*)(a + 0xc));
}
