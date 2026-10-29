// roc 2011-06 006ebdd0  unit: VWiniInetRequest_source::?$stream_buffer  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ebdd0
//
// 006ebdd0  8bc1                 mov eax, ecx
// 006ebdd2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006ebdd6  8b11                 mov edx, dword ptr [ecx]
// 006ebdd8  8910                 mov dword ptr [eax], edx
// 006ebdda  8b5104               mov edx, dword ptr [ecx + 4]
// 006ebddd  895004               mov dword ptr [eax + 4], edx
// 006ebde0  8b5108               mov edx, dword ptr [ecx + 8]
// 006ebde3  895008               mov dword ptr [eax + 8], edx
// 006ebde6  85d2                 test edx, edx
// 006ebde8  740e                 je 0x6ebdf8
// 006ebdea  56                   push esi
// 006ebdeb  83c204               add edx, 4
// 006ebdee  be01000000           mov esi, 1
// 006ebdf3  f00fc132             lock xadd dword ptr [edx], esi
// 006ebdf7  5e                   pop esi
// 006ebdf8  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006ebdfb  89500c               mov dword ptr [eax + 0xc], edx
// 006ebdfe  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006ebe01  894810               mov dword ptr [eax + 0x10], ecx
// 006ebe04  85c9                 test ecx, ecx
// 006ebe06  740c                 je 0x6ebe14
// 006ebe08  83c104               add ecx, 4
// 006ebe0b  ba01000000           mov edx, 1
// 006ebe10  f00fc111             lock xadd dword ptr [ecx], edx
// 006ebe14  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000005@@QAEPAU12@PBU12@@Z)

namespace ns_ROCX000005 {
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct Control {
    long reserved;
    volatile long references;
};

struct S {
    long a;
    long b;
    Control* c;
    long d;
    Control* e;

    S* f(const S* source);
};

S* S::f(const S* source)
{
    a = source->a;
    b = source->b;
    c = source->c;
    if (c) {
        volatile long* count = &c->references;
        _ReadWriteBarrier();
        _InterlockedExchangeAdd(count, 1);
    }
    d = source->d;
    e = source->e;
    if (e) {
        volatile long* count = &e->references;
        _ReadWriteBarrier();
        _InterlockedExchangeAdd(count, 1);
    }
    return this;
}
}
