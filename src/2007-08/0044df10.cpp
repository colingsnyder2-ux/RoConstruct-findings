// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall SysFreeString(void*);
extern "C" void __stdcall sub_401000(unsigned int);
extern "C" void* __stdcall sub_401180(void*, int);
extern "C" void* __stdcall sub_403800(void*, void*);
extern "C" char __stdcall sub_4915A0(void*, int);
extern "C" char __stdcall sub_4915B0(void*, int);

struct CRobloxDoc {
    void* field_0;
    char pad[0x74];
    void* field_78;
    int sub_44DF10(void*);
};

int CRobloxDoc::sub_44DF10(void* arg) {
    void* local10 = 0;
    void* local14 = 0;
    int local28 = 0;
    char bl;

    sub_403800(field_78, &local10);
    void* esi = local10;

    char al;
    if (sub_4915A0(esi, 1)) {
        if (sub_4915B0(esi, 1)) {
            al = 1;
        } else {
            al = 0;
        }
    } else {
        al = 1;
    }

    bl = (al == 0);

    if (esi) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)esi + 4), -1) == 1) {
            void** vtbl = *(void***)esi;
            void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[1];
            fn(esi);
            if (_InterlockedExchangeAdd((volatile long*)((char*)esi + 8), -1) == 1) {
                void** vtbl2 = *(void***)esi;
                void (__stdcall *fn2)(void*) = (void (__stdcall *)(void*))vtbl2[2];
                fn2(esi);
            }
        }
    }

    if (bl) {
        return 0;
    }

    if (local28) {
        void* p = sub_401180((void*)local28, -1);
        esi = p;
        local28 = (int)esi;
        if (!esi) {
            sub_401000(0x8007000e);
        }
    } else {
        esi = 0;
        local28 = 0;
    }

    void* eax = field_78;
    void** vtbl = *(void***)eax;
    int (__stdcall *fn)(void*, void*) = (int (__stdcall *)(void*, void*))vtbl[7];
    int result = fn(eax, esi);
    bl = (result != 0);

    SysFreeString(esi);

    if (bl) {
        return 0;
    }

    void** vtbl2 = *(void***)this;
    void (__stdcall *fn2)(void*, int) = (void (__stdcall *)(void*, int))vtbl2[25];
    fn2(this, 0);

    return 1;
}
