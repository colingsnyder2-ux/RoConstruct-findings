// from server: 100% by colin
// roc 2008-06 004212f0  unit: RBX::VInstance::?$MarshaledListener  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004212f0
//
// 004212f0  6aff                 push -1
// 004212f2  68a6e87b00           push 0x7be8a6
// 004212f7  64a100000000         mov eax, dword ptr fs:[0]
// 004212fd  50                   push eax
// 004212fe  64892500000000       mov dword ptr fs:[0], esp
// 00421305  51                   push ecx
// 00421306  56                   push esi
// 00421307  8bf1                 mov esi, ecx
// 00421309  89742404             mov dword ptr [esp + 4], esi
// 0042130d  33c9                 xor ecx, ecx
// 0042130f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00421313  c7068cf88000         mov dword ptr [esi], 0x80f88c
// 00421319  894e04               mov dword ptr [esi + 4], ecx
// 0042131c  894e08               mov dword ptr [esi + 8], ecx
// 0042131f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00421323  8b542420             mov edx, dword ptr [esp + 0x20]
// 00421327  89460c               mov dword ptr [esi + 0xc], eax
// 0042132a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0042132e  895610               mov dword ptr [esi + 0x10], edx
// 00421331  894614               mov dword ptr [esi + 0x14], eax
// 00421334  3bc1                 cmp eax, ecx
// 00421336  740c                 je 0x421344
// 00421338  83c004               add eax, 4
// 0042133b  ba01000000           mov edx, 1
// 00421340  f00fc110             lock xadd dword ptr [eax], edx
// 00421344  8b442428             mov eax, dword ptr [esp + 0x28]
// 00421348  894618               mov dword ptr [esi + 0x18], eax
// 0042134b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0042134f  89461c               mov dword ptr [esi + 0x1c], eax
// 00421352  3bc1                 cmp eax, ecx
// 00421354  740c                 je 0x421362
// 00421356  83c004               add eax, 4
// 00421359  b901000000           mov ecx, 1
// 0042135e  f00fc108             lock xadd dword ptr [eax], ecx
// 00421362  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00421366  52                   push edx
// 00421367  8bce                 mov ecx, esi
// 00421369  c644241403           mov byte ptr [esp + 0x14], 3
// 0042136e  e85d5e0300           call 0x4571d0
// 00421373  8d4c2420             lea ecx, [esp + 0x20]
// 00421377  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0042137f  e8dc180000           call 0x422c60
// 00421384  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00421388  8bc6                 mov eax, esi
// 0042138a  5e                   pop esi
// 0042138b  64890d00000000       mov dword ptr fs:[0], ecx
// 00421392  83c410               add esp, 0x10
// 00421395  c21800               ret 0x18

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

__forceinline void increment(volatile long* p)
{
    _InterlockedExchangeAdd(p, 1);
}

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* pointer;
    Control* control;

    __forceinline Shared(const Shared&);
    ~Shared();
};

struct Pair
{
    Shared first;
    Shared second;

    ~Pair();
};

struct Weak
{
    void* pointer;
    Control* control;

    __forceinline Weak();
    ~Weak();
};

struct Base
{
    virtual ~Base();
};

struct S : Base
{
    Weak weak;
    void* pointer;
    Pair arguments;

    S(void*, void*, Pair);
    virtual ~S();
    void set(void*);
};

__forceinline Weak::Weak()
    : pointer(0), control(0)
{
}

__forceinline Shared::Shared(const Shared& value)
    : pointer(value.pointer), control(value.control)
{
    if (control)
        increment(&control->strong);
}

S::S(void* p, void* q, Pair value)
    : weak(), pointer(p), arguments(value)
{
    set(q);
}
