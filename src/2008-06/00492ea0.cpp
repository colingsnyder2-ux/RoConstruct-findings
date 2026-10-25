// from server: 100% by colin
// roc 2008-06 00492ea0  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00492ea0
//
// 00492ea0  56                   push esi
// 00492ea1  8d442408             lea eax, [esp + 8]
// 00492ea5  8bf1                 mov esi, ecx
// 00492ea7  50                   push eax
// 00492ea8  c70600000000         mov dword ptr [esi], 0
// 00492eae  e83d741700           call 0x60a2f0
// 00492eb3  83c404               add esp, 4
// 00492eb6  84c0                 test al, al
// 00492eb8  755e                 jne 0x492f18
// 00492eba  8d4608               lea eax, [esi + 8]
// 00492ebd  85c0                 test eax, eax
// 00492ebf  7442                 je 0x492f03
// 00492ec1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00492ec5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00492ec9  8908                 mov dword ptr [eax], ecx
// 00492ecb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00492ecf  895004               mov dword ptr [eax + 4], edx
// 00492ed2  894808               mov dword ptr [eax + 8], ecx
// 00492ed5  85c9                 test ecx, ecx
// 00492ed7  740c                 je 0x492ee5
// 00492ed9  83c104               add ecx, 4
// 00492edc  ba01000000           mov edx, 1
// 00492ee1  f00fc111             lock xadd dword ptr [ecx], edx
// 00492ee5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00492ee9  89480c               mov dword ptr [eax + 0xc], ecx
// 00492eec  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00492ef0  894810               mov dword ptr [eax + 0x10], ecx
// 00492ef3  85c9                 test ecx, ecx
// 00492ef5  740c                 je 0x492f03
// 00492ef7  83c104               add ecx, 4
// 00492efa  ba01000000           mov edx, 1
// 00492eff  f00fc111             lock xadd dword ptr [ecx], edx
// 00492f03  8d4c240c             lea ecx, [esp + 0xc]
// 00492f07  c706a01c8200         mov dword ptr [esi], 0x821ca0
// 00492f0d  e84efdf8ff           call 0x422c60
// 00492f12  8bc6                 mov eax, esi
// 00492f14  5e                   pop esi
// 00492f15  c21800               ret 0x18
// 00492f18  8d4c240c             lea ecx, [esp + 0xc]
// 00492f1c  c70600000000         mov dword ptr [esi], 0
// 00492f22  e839fdf8ff           call 0x422c60
// 00492f27  8bc6                 mov eax, esi
// 00492f29  5e                   pop esi
// 00492f2a  c21800               ret 0x18

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount {
    long unused;
    volatile long count;
};

struct Argument {
    unsigned long value1;
    RefCount* ref1;
    unsigned long value2;
    RefCount* ref2;
    unsigned long unused;

    void destroy();
};

extern bool __cdecl func_0060a2f0(void*);

inline void* __cdecl operator new(unsigned int, void* p) {
    return p;
}

struct Payload {
    unsigned long first;
    unsigned long value1;
    RefCount* ref1;
    unsigned long value2;
    RefCount* ref2;

    __forceinline Payload(unsigned long, const Argument&);
};

__forceinline Payload::Payload(unsigned long value, const Argument& arg) {
    first = value;
    value1 = arg.value1;
    ref1 = arg.ref1;
    if (ref1)
        _InterlockedIncrement(&ref1->count);
    value2 = arg.value2;
    ref2 = arg.ref2;
    if (ref2)
        _InterlockedIncrement(&ref2->count);
}

struct S {
    unsigned long tag;
    unsigned long unused;
    Payload payload;

    S* f(unsigned long, Argument);
};

S* S::f(unsigned long first, Argument arg) {
    tag = 0;
    if (!func_0060a2f0(&first)) {
        new (&payload) Payload(first, arg);
        tag = 0x00821ca0;
        arg.destroy();
        return this;
    }
    tag = 0;
    arg.destroy();
    return this;
}
