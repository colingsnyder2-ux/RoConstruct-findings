// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)


extern "C" void __stdcall func_00802468(void*);
extern "C" void __stdcall func_0080245c(void*, void*);

extern "C" void* __cdecl func_006a0920(unsigned int size);
extern "C" void __cdecl func_0047d410(void* a, void* b, void* c);
extern "C" void __cdecl func_004025b0(void* a, void* b);
extern "C" void __cdecl func_005b9d10(void* self, void* a, void* b);
extern "C" void* __cdecl func_005b6f70(void* self, void* a);
extern "C" void __cdecl func_005bb060(void* self, void* a);
extern "C" void* __cdecl func_005bab80(void* self, void* a);

struct SoundService
{
    char pad_0000[0x18];
    void* field_18;
    char pad_001c[0x164];
    char field_180[0x20];
    char field_1a0[0x20];

    void* func_005bb5f0(char flag, void* a, void* b, void* c, void* d, void* e, void* f, void* g, void* h, void* i);
    void func_00802890();
};

void* SoundService::func_005bb5f0(char flag, void* a, void* b, void* c, void* d, void* e, void* f, void* g, void* h, void* i)
{
    char* base;
    if (flag != 0)
        base = (char*)this + 0x1a0;
    else
        base = (char*)this + 0x180;

    void* local1c = 0;
    void* local34 = 0;
    void* local30 = 0;

    func_005b9d10(base, &local1c, &local34);

    void* esi = local1c;
    void* ebx = *(void**)(base + 0x18);
    void* eax = *(void**)base;

    if (esi != 0 && esi != eax)
    {
        func_00802890();
    }

    void* ebp = local34;
    if (ebp != ebx)
    {
        if (esi != 0)
        {
            esi = *(void**)esi;
        }
        else
        {
            func_00802890();
        }

        if (ebp == *(void**)((char*)esi + 0x18))
        {
            func_00802890();
        }

        void* edx = *(void**)((char*)ebp + 0x2c);
        void* out = local30;
        *(void**)out = edx;
        void* eax2 = *(void**)((char*)ebp + 0x30);
        *(void**)((char*)out + 4) = eax2;
        if (eax2 != 0)
        {
            _InterlockedExchangeAdd((volatile long*)((char*)eax2 + 4), 1);
        }

        func_00802468(&local34);
        return out;
    }

    void* mem = func_006a0920(0x30);
    void* newobj = mem;
    if (newobj != 0)
    {
        char* tmp = (char*)&local34;
        func_0080245c(tmp, &local34);
        *(void**)((char*)tmp + 0x1c) = *(void**)((char*)&local34 + 0x1c);
        void* edx2 = local30;
        void* eax3 = *(void**)((char*)edx2 + 0x134);
        void* result = func_005b6f70(newobj, eax3);
        esi = result;
    }
    else
    {
        esi = 0;
    }

    func_005bb060(&local1c, esi);
    func_0047d410(&local1c, esi, esi);

    void* added = func_005bab80(base, &local34);
    *(void**)added = esi;
    func_004025b0((char*)added + 4, &local1c);

    void* out = local30;
    *(void**)out = esi;
    void* esi2 = local1c;
    *(void**)((char*)out + 4) = esi2;
    if (esi2 != 0)
    {
        _InterlockedExchangeAdd((volatile long*)((char*)esi2 + 4), 1);
    }

    if (esi2 != 0)
    {
        if (_InterlockedExchangeAdd((volatile long*)((char*)esi2 + 4), -1) == 1)
        {
            void* vptr = *(void**)esi2;
            void (*dtor)(void*) = *(void (**)(void*))((char*)vptr + 4);
            dtor(esi2);
            if (_InterlockedExchangeAdd((volatile long*)((char*)esi2 + 8), -1) == 1)
            {
                void* vptr2 = *(void**)esi2;
                void (*dtor2)(void*) = *(void (**)(void*))((char*)vptr2 + 8);
                dtor2(esi2);
            }
        }
    }

    func_00802468(&local34);
    return out;
}
