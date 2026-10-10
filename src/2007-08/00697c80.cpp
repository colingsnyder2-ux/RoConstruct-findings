// from server: 82% by colin
struct CXTPPropertyGridItem
{
    char pad[0xa4];
    int field_a4;
    void sub_00697c80();
};

extern "C" void __stdcall G_func_0077dd74(int*, int*);

void CXTPPropertyGridItem::sub_00697c80()
{
    int* p = &field_a4;
    G_func_0077dd74((int*)&p, p);
    (*(void (__thiscall **)(CXTPPropertyGridItem*))(*(int*)this + 0x64))(this);
}
