// from server: 100% by king_originala
// roc 2008-06 0048cd10  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048cd10
//
// 0048cd10  8bc1                 mov eax, ecx
// 0048cd12  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048cd16  8b11                 mov edx, dword ptr [ecx]
// 0048cd18  8910                 mov dword ptr [eax], edx
// 0048cd1a  8b5104               mov edx, dword ptr [ecx + 4]
// 0048cd1d  895004               mov dword ptr [eax + 4], edx
// 0048cd20  8b5108               mov edx, dword ptr [ecx + 8]
// 0048cd23  895008               mov dword ptr [eax + 8], edx
// 0048cd26  85d2                 test edx, edx
// 0048cd28  740e                 je 0x48cd38
// 0048cd2a  56                   push esi
// 0048cd2b  83c204               add edx, 4
// 0048cd2e  be01000000           mov esi, 1
// 0048cd33  f00fc132             lock xadd dword ptr [edx], esi
// 0048cd37  5e                   pop esi
// 0048cd38  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0048cd3b  89500c               mov dword ptr [eax + 0xc], edx
// 0048cd3e  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0048cd41  894810               mov dword ptr [eax + 0x10], ecx
// 0048cd44  85c9                 test ecx, ecx
// 0048cd46  740c                 je 0x48cd54
// 0048cd48  83c104               add ecx, 4
// 0048cd4b  ba01000000           mov edx, 1
// 0048cd50  f00fc111             lock xadd dword ptr [ecx], edx
// 0048cd54  c20400               ret 4

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
