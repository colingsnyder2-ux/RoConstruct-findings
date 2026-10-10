// from server: 52% by colin
struct CXTPControlWorkspaceActions
{
    void* vtable;
    char pad[0x1c];
    void* vtable2;
    char pad2[0xb0];
    int field_d4;
    char pad3[0x20];
    int field_f8;
};

extern "C" void* __cdecl sub_62FEF6(unsigned int size);
extern "C" void __fastcall sub_63C810(CXTPControlWorkspaceActions* self);

CXTPControlWorkspaceActions* __cdecl sub_67EE70()
{
    CXTPControlWorkspaceActions* p = (CXTPControlWorkspaceActions*)sub_62FEF6(0x168);
    if (p == 0)
        return 0;
    sub_63C810(p);
    p->vtable = (void*)0x7cd9e4;
    p->vtable2 = (void*)0x7cd984;
    p->field_d4 = 0x1a;
    p->field_f8 = 8;
    return p;
}
