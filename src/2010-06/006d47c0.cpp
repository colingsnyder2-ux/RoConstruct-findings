// roc 2010-06 006d47c0  unit: RBX::SkateboardPlatform  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d47c0
//
// 006d47c0  8bc1                 mov eax, ecx
// 006d47c2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006d47c6  8b11                 mov edx, dword ptr [ecx]
// 006d47c8  8910                 mov dword ptr [eax], edx
// 006d47ca  8b5104               mov edx, dword ptr [ecx + 4]
// 006d47cd  895004               mov dword ptr [eax + 4], edx
// 006d47d0  8b5108               mov edx, dword ptr [ecx + 8]
// 006d47d3  895008               mov dword ptr [eax + 8], edx
// 006d47d6  85d2                 test edx, edx
// 006d47d8  740e                 je 0x6d47e8
// 006d47da  56                   push esi
// 006d47db  83c204               add edx, 4
// 006d47de  be01000000           mov esi, 1
// 006d47e3  f00fc132             lock xadd dword ptr [edx], esi
// 006d47e7  5e                   pop esi
// 006d47e8  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006d47eb  89500c               mov dword ptr [eax + 0xc], edx
// 006d47ee  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006d47f1  894810               mov dword ptr [eax + 0x10], ecx
// 006d47f4  85c9                 test ecx, ecx
// 006d47f6  740c                 je 0x6d4804
// 006d47f8  83c104               add ecx, 4
// 006d47fb  ba01000000           mov edx, 1
// 006d4800  f00fc111             lock xadd dword ptr [ecx], edx
// 006d4804  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEPAU1@PBU1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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