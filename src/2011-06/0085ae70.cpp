// from server: 37% by colin
struct CXTPControlOleItems
{
    char pad[0x174];
};

extern "C" void* __cdecl sub_0080A05E(unsigned int size);
extern "C" void __cdecl sub_008A1530(void* p);

CXTPControlOleItems* __cdecl func_0085AE70()
{
    CXTPControlOleItems* p = (CXTPControlOleItems*)sub_0080A05E(0x174);
    if (p == 0)
    {
        sub_008A1530(p);
        *(void**)p = (void*)0x00AC9C74;
        *(void**)((char*)p + 0x20) = (void*)0x00AC9C14;
    }
    return p;
}
