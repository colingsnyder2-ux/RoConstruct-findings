// from server: 51% by colin
struct CXTColorHex_PAUHEXCOLOR_CELL_CList
{
    void construct();
    char pad[0x54];
    int field_54;
    char pad2[0xc];
    unsigned char field_64;
    int field_68;
    int field_6c;
    int field_78;
    char pad3[0x4];
    int field_7c;
};

extern "C" void __stdcall sub_6305DA();
extern "C" void __stdcall sub_7383E2();
extern "C" void __stdcall sub_709C60(int);

void CXTColorHex_PAUHEXCOLOR_CELL_CList::construct()
{
    sub_6305DA();
    field_54 = 0;
    *(int*)this = 0x7dd5bc;
    sub_7383E2();
    sub_709C60(0xa);
    field_6c = 1;
    field_64 = 1;
    field_78 = -1;
    field_68 = 0;
}
