// from server: 48% by atomic.potato
extern "C" void* __cdecl sub_7f3860(unsigned int);
extern "C" void* __cdecl sub_864d80();
extern "C" void __cdecl sub_86ac70(void*, void*, void*);
extern "C" void __stdcall sub_98de5c(void*, void*);

struct CXTPPropertyGridItemConstraints
{
    char pad0[0x20];
    void* field20;
    char pad24[0x14];
    void* field38;
    void* sub_8664e0(void* a, void* b, void* c);
};

void* CXTPPropertyGridItemConstraints::sub_8664e0(void* a, void* b, void* c)
{
    void* p = sub_7f3860(0x34);
    void* esi;
    if (p != 0)
    {
        esi = sub_864d80();
    }
    else
    {
        esi = 0;
    }
    sub_98de5c((char*)esi + 0x20, a);
    *(void**)((char*)esi + 0x24) = b;
    void* ebx = *(void**)((char*)this + 0x28);
    sub_86ac70((char*)this + 0x20, ebx, esi);
    *(void**)((char*)esi + 0x2c) = ebx;
    *(void**)((char*)esi + 0x30) = *(void**)((char*)this + 0x38);
    *(void**)((char*)esi + 0x28) = c;
    if (*(void**)((char*)this + 0x38) != 0)
    {
        void* ecx = *(void**)((char*)this + 0x38);
        void** edx = *(void***)ecx;
        void* eax = *(void**)((char*)edx + 0xe0);
        ((void (__thiscall*)(void*))eax)(ecx);
    }
    return esi;
}
