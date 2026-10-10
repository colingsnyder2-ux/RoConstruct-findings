// from server: 75% by why2
struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* field_b8;
    void getter();
};

extern void func_0071fac0();

void CXTPCustomizeSheet::getter()
{
    void* p = *(void**)((char*)field_b8 + 0x58);
    if (p != 0)
        func_0071fac0();
}
