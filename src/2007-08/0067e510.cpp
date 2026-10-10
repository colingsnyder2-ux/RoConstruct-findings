// from server: 37% by colin
extern "C" void* __cdecl func_0062fef6(unsigned int size);
extern "C" void __cdecl func_006ca460(void* p);

struct CXTPControlOleItems
{
    void* construct();
};

void* CXTPControlOleItems::construct()
{
    void* p = func_0062fef6(0x168);
    if (p == 0)
    {
        func_006ca460(p);
        *(void**)p = (void*)0x7ce244;
        *(void**)((char*)p + 0x20) = (void*)0x7ce1e4;
    }
    return p;
}
