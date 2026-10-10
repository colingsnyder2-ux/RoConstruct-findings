// from server: 44% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall invalid_parameter_noinfo();
extern "C" void __cdecl unknown_4a9000(void*);
extern "C" void __cdecl unknown_4a5cb0();
extern "C" void __cdecl unknown_725520(void*, void*, void*);
extern "C" void __cdecl unknown_402a60(void*, void*);
extern "C" void __cdecl unknown_541630(void*, void*);
extern "C" void __cdecl unknown_4afc80();

struct RefCounted {
    void* vptr;
    volatile long ref1;
    volatile long ref2;
};

struct VReplicator {
    char pad[0x134];
    void* begin;
    void* end;

    int func();
};

int VReplicator::func()
{
    void* local10 = 0;
    void* local14 = 0;
    int result = 0;

    if (unknown_4afc80(), 0) {
        return result;
    }

    unknown_4a9000(&local10);
    void* ebx = local10;

    unknown_725520((void*)0x8be980, (void*)0x4a74e0, (void*)0);
    unknown_4a5cb0();
    int edi = (int)local10;

    void* ecx = *(void**)((char*)this + 0x134);
    if (ecx == 0) {
        invalid_parameter_noinfo();
    } else {
        int eax = (int)(*(char**)((char*)this + 0x138) - (char*)ecx);
        eax >>= 3;
        if ((unsigned)edi >= (unsigned)eax) {
            invalid_parameter_noinfo();
        }
    }

    void* ecx2 = *(void**)((char*)this + 0x134);
    int edx = (int)local10;
    void* eax2 = (char*)ecx2 + edi * 8;
    *(int*)eax2 = edx;
    unknown_402a60((char*)eax2 + 4, &local14);

    unknown_541630(ebx, this);

    RefCounted* esi = (RefCounted*)local14;
    if (esi != 0) {
        if (_InterlockedExchangeAdd(&esi->ref1, -1) == 1) {
            void** vt = (void**)esi->vptr;
            void (*fn)(void*) = (void (*)(void*))vt[1];
            fn(esi);
            if (_InterlockedExchangeAdd(&esi->ref2, -1) == 1) {
                void** vt2 = (void**)esi->vptr;
                void (*fn2)(void*) = (void (*)(void*))vt2[2];
                fn2(esi);
            }
        }
    }

    return (int)ebx;
}
