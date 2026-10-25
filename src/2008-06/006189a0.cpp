// from server: 100% by king_originala
// roc 2008-06 006189a0  unit: RBX::Flag  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006189a0
//
// 006189a0  8bc1                 mov eax, ecx
// 006189a2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006189a6  8b11                 mov edx, dword ptr [ecx]
// 006189a8  8910                 mov dword ptr [eax], edx
// 006189aa  8b5104               mov edx, dword ptr [ecx + 4]
// 006189ad  895004               mov dword ptr [eax + 4], edx
// 006189b0  8b5108               mov edx, dword ptr [ecx + 8]
// 006189b3  895008               mov dword ptr [eax + 8], edx
// 006189b6  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006189b9  89500c               mov dword ptr [eax + 0xc], edx
// 006189bc  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006189bf  895010               mov dword ptr [eax + 0x10], edx
// 006189c2  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 006189c5  894814               mov dword ptr [eax + 0x14], ecx
// 006189c8  85c9                 test ecx, ecx
// 006189ca  740c                 je 0x6189d8
// 006189cc  83c104               add ecx, 4
// 006189cf  ba01000000           mov edx, 1
// 006189d4  f00fc111             lock xadd dword ptr [ecx], edx
// 006189d8  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct Control {
    long reserved;
    volatile long references;
};

struct S {
    unsigned long a;
    unsigned long b;
    unsigned long c;
    unsigned long d;
    unsigned long e;
    Control* control;

    S(const S& source);
};

S::S(const S& source) {
    a = source.a;
    b = source.b;
    c = source.c;
    d = source.d;
    e = source.e;
    control = source.control;
    if (control) {
        volatile long* references = &control->references;
        _ReadWriteBarrier();
        _InterlockedExchangeAdd(references, 1);
    }
}
