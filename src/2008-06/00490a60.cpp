// from server: 100% by colin
// roc 2008-06 00490a60  unit: RBX::VHumanoid::?$FactoryProduct::Creator  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00490a60
//
// 00490a60  56                   push esi
// 00490a61  8d442408             lea eax, [esp + 8]
// 00490a65  8bf1                 mov esi, ecx
// 00490a67  50                   push eax
// 00490a68  c70600000000         mov dword ptr [esi], 0
// 00490a6e  e87d981700           call 0x60a2f0
// 00490a73  83c404               add esp, 4
// 00490a76  84c0                 test al, al
// 00490a78  755e                 jne 0x490ad8
// 00490a7a  8d4608               lea eax, [esi + 8]
// 00490a7d  85c0                 test eax, eax
// 00490a7f  7442                 je 0x490ac3
// 00490a81  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00490a85  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00490a89  8908                 mov dword ptr [eax], ecx
// 00490a8b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00490a8f  895004               mov dword ptr [eax + 4], edx
// 00490a92  894808               mov dword ptr [eax + 8], ecx
// 00490a95  85c9                 test ecx, ecx
// 00490a97  740c                 je 0x490aa5
// 00490a99  83c104               add ecx, 4
// 00490a9c  ba01000000           mov edx, 1
// 00490aa1  f00fc111             lock xadd dword ptr [ecx], edx
// 00490aa5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00490aa9  89480c               mov dword ptr [eax + 0xc], ecx
// 00490aac  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00490ab0  894810               mov dword ptr [eax + 0x10], ecx
// 00490ab3  85c9                 test ecx, ecx
// 00490ab5  740c                 je 0x490ac3
// 00490ab7  83c104               add ecx, 4
// 00490aba  ba01000000           mov edx, 1
// 00490abf  f00fc111             lock xadd dword ptr [ecx], edx
// 00490ac3  8d4c240c             lea ecx, [esp + 0xc]
// 00490ac7  c7065c178200         mov dword ptr [esi], 0x82175c
// 00490acd  e88e21f9ff           call 0x422c60
// 00490ad2  8bc6                 mov eax, esi
// 00490ad4  5e                   pop esi
// 00490ad5  c21800               ret 0x18
// 00490ad8  8d4c240c             lea ecx, [esp + 0xc]
// 00490adc  c70600000000         mov dword ptr [esi], 0
// 00490ae2  e87921f9ff           call 0x422c60
// 00490ae7  8bc6                 mov eax, esi
// 00490ae9  5e                   pop esi
// 00490aea  c21800               ret 0x18

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
