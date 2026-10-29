// roc 2012-06 008644b0  unit: VWiniInetRequest_source::?$stream_buffer  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008644b0
//
// 008644b0  8bc1                 mov eax, ecx
// 008644b2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008644b6  8b11                 mov edx, dword ptr [ecx]
// 008644b8  8910                 mov dword ptr [eax], edx
// 008644ba  8b5104               mov edx, dword ptr [ecx + 4]
// 008644bd  895004               mov dword ptr [eax + 4], edx
// 008644c0  8b5108               mov edx, dword ptr [ecx + 8]
// 008644c3  895008               mov dword ptr [eax + 8], edx
// 008644c6  85d2                 test edx, edx
// 008644c8  740e                 je 0x8644d8
// 008644ca  56                   push esi
// 008644cb  83c204               add edx, 4
// 008644ce  be01000000           mov esi, 1
// 008644d3  f00fc132             lock xadd dword ptr [edx], esi
// 008644d7  5e                   pop esi
// 008644d8  8b510c               mov edx, dword ptr [ecx + 0xc]
// 008644db  89500c               mov dword ptr [eax + 0xc], edx
// 008644de  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 008644e1  894810               mov dword ptr [eax + 0x10], ecx
// 008644e4  85c9                 test ecx, ecx
// 008644e6  740c                 je 0x8644f4
// 008644e8  83c104               add ecx, 4
// 008644eb  ba01000000           mov edx, 1
// 008644f0  f00fc111             lock xadd dword ptr [ecx], edx
// 008644f4  c20400               ret 4
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