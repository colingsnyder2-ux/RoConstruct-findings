// from server: 100% by king_originala
// roc 2008-06 00417360  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417360
//
// 00417360  8bc1                 mov eax, ecx
// 00417362  c700c8eb8000         mov dword ptr [eax], 0x80ebc8
// 00417368  8b0d6c5c9700         mov ecx, dword ptr [0x975c6c]
// 0041736e  894804               mov dword ptr [eax + 4], ecx
// 00417371  8b15705c9700         mov edx, dword ptr [0x975c70]
// 00417377  8bca                 mov ecx, edx
// 00417379  895008               mov dword ptr [eax + 8], edx
// 0041737c  33d2                 xor edx, edx
// 0041737e  3bca                 cmp ecx, edx
// 00417380  740e                 je 0x417390
// 00417382  56                   push esi
// 00417383  83c104               add ecx, 4
// 00417386  be01000000           mov esi, 1
// 0041738b  f00fc131             lock xadd dword ptr [ecx], esi
// 0041738f  5e                   pop esi
// 00417390  89500c               mov dword ptr [eax + 0xc], edx
// 00417393  895010               mov dword ptr [eax + 0x10], edx
// 00417396  895014               mov dword ptr [eax + 0x14], edx
// 00417399  895018               mov dword ptr [eax + 0x18], edx
// 0041739c  89501c               mov dword ptr [eax + 0x1c], edx
// 0041739f  c700d0eb8000         mov dword ptr [eax], 0x80ebd0
// 004173a5  895020               mov dword ptr [eax + 0x20], edx
// 004173a8  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct Counter {
    volatile long value;
    __forceinline void retain();
};

__forceinline void Counter::retain()
{
    volatile long* p = &value;
    _ReadWriteBarrier();
    _InterlockedExchangeAdd(p, 1);
}

struct Ref {
    long reserved;
    Counter count;
    __forceinline void retain();
};

__forceinline void Ref::retain()
{
    count.retain();
}

extern unsigned char initialTable[];
extern unsigned char finalTable[];
extern void* globalObject;
extern Ref* globalReference;

struct S {
    unsigned long tag;
    void* object;
    Ref* reference;
    unsigned long a, b, c, d, e, f;

    S();
};

S::S()
{
    tag = reinterpret_cast<unsigned long>(initialTable);
    object = globalObject;
    reference = globalReference;
    if (reference)
        reference->retain();
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    tag = reinterpret_cast<unsigned long>(finalTable);
    f = 0;
}
