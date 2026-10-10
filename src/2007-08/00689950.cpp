// from server: 26% by colin
struct CXTPControlTabWorkspace
{
    char pad[0x168];
    int field_168;
    void sub_00689630();
    void sub_006ca4d0();
    void func_00689950();
};

void CXTPControlTabWorkspace::func_00689950()
{
    *(int*)this = 0x7cfb24;
    *(int*)((char*)this + 0x20) = 0x7cfac4;
    field_168 = 0x7cfa34;
    sub_00689630();
    sub_006ca4d0();
}
