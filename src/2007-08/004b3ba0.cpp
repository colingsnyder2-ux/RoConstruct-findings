// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct SignalSource {
    char pad0[0x118];
    void* field118;
    RefCounted* field11c;
    char pad120[0x1e14 - 0x120];
    void* field1e14;
    void* field1e18;
    void* field1e1c;
    char pad1e20[0x1e1c + 4 - 0x1e20];
    void method(void* arg);
};

extern "C" void __stdcall sub_541630(void* p);
extern "C" void __stdcall sub_53e7a0();
extern "C" void __stdcall sub_4aa1d0();
extern "C" void __stdcall sub_49d670();
extern "C" void __stdcall sub_4b3980();
extern "C" void __stdcall sub_402a60();
extern "C" void __stdcall sub_4a5dc0();

extern "C" void* __stdcall sub_77e698();
extern "C" void __stdcall sub_77e6ac();

void SignalSource::method(void* arg)
{
    if (field118) {
        sub_541630(0);
        field118 = 0;
        RefCounted* p = field11c;
        field11c = 0;
        if (p) {
            if (_InterlockedExchangeAdd(&p->refcount, -1) == 1) {
                void** vt = (void**)p->vptr;
                ((void (__thiscall*)(RefCounted*))vt[1])(p);
                if (_InterlockedExchangeAdd(&p->weakrefcount, -1) == 1) {
                    void** vt2 = (void**)p->vptr;
                    ((void (__thiscall*)(RefCounted*))vt2[2])(p);
                }
            }
        }
    }

    if (arg) {
        sub_77e698();
        sub_53e7a0();
        sub_4aa1d0();
        sub_77e6ac();
        if (*(void**)((char*)this + 0x1e14)) {
            void* a = *(void**)((char*)this + 0x1e1c);
            void* b = *(void**)((char*)this + 0x1e18);
            void** vt = (void**)(*(void**)((char*)this + 0x1e14));
            void* r = ((void* (__thiscall*)(void*, void*, void*))vt[0x108/4])(*(void**)((char*)this + 0x1e14), b, a);
            sub_49d670();
            sub_4b3980();
            field118 = *(void**)r;
            sub_402a60();
        }
    }
}
