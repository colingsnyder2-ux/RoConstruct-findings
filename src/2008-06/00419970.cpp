// from server: 100% by king_originala
// roc 2008-06 00419970  unit: VCLuaFunction::?$CComObject  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00419970
//
// 00419970  8bc1                 mov eax, ecx
// 00419972  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00419976  8b11                 mov edx, dword ptr [ecx]
// 00419978  8910                 mov dword ptr [eax], edx
// 0041997a  8b5104               mov edx, dword ptr [ecx + 4]
// 0041997d  895004               mov dword ptr [eax + 4], edx
// 00419980  8b5108               mov edx, dword ptr [ecx + 8]
// 00419983  895008               mov dword ptr [eax + 8], edx
// 00419986  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00419989  89500c               mov dword ptr [eax + 0xc], edx
// 0041998c  85d2                 test edx, edx
// 0041998e  740e                 je 0x41999e
// 00419990  56                   push esi
// 00419991  83c204               add edx, 4
// 00419994  be01000000           mov esi, 1
// 00419999  f00fc132             lock xadd dword ptr [edx], esi
// 0041999d  5e                   pop esi
// 0041999e  8b5110               mov edx, dword ptr [ecx + 0x10]
// 004199a1  895010               mov dword ptr [eax + 0x10], edx
// 004199a4  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 004199a7  894814               mov dword ptr [eax + 0x14], ecx
// 004199aa  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct Ref
{
    unsigned int reserved;
    volatile long count;
};

struct S
{
    unsigned int a;
    unsigned int b;
    unsigned int c;
    Ref* ref;
    unsigned int d;
    unsigned int e;

    S(const S& other);
};

S::S(const S& other)
{
    a = other.a;
    b = other.b;
    c = other.c;
    ref = other.ref;
    if (ref != 0)
    {
        volatile long* count = &ref->count;
        _ReadWriteBarrier();
        _InterlockedExchangeAdd(count, 1);
    }
    d = other.d;
    e = other.e;
}
