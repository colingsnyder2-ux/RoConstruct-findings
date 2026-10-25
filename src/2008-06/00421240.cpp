// from server: 100% by colin
// roc 2008-06 00421240  unit: RBX::VInstance::?$MarshaledListener  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00421240
//
// 00421240  6aff                 push -1
// 00421242  68a6e87b00           push 0x7be8a6
// 00421247  64a100000000         mov eax, dword ptr fs:[0]
// 0042124d  50                   push eax
// 0042124e  64892500000000       mov dword ptr fs:[0], esp
// 00421255  51                   push ecx
// 00421256  56                   push esi
// 00421257  8bf1                 mov esi, ecx
// 00421259  89742404             mov dword ptr [esp + 4], esi
// 0042125d  33c9                 xor ecx, ecx
// 0042125f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00421263  c70680f88000         mov dword ptr [esi], 0x80f880
// 00421269  894e04               mov dword ptr [esi + 4], ecx
// 0042126c  894e08               mov dword ptr [esi + 8], ecx
// 0042126f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00421273  8b542420             mov edx, dword ptr [esp + 0x20]
// 00421277  89460c               mov dword ptr [esi + 0xc], eax
// 0042127a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0042127e  895610               mov dword ptr [esi + 0x10], edx
// 00421281  894614               mov dword ptr [esi + 0x14], eax
// 00421284  3bc1                 cmp eax, ecx
// 00421286  740c                 je 0x421294
// 00421288  83c004               add eax, 4
// 0042128b  ba01000000           mov edx, 1
// 00421290  f00fc110             lock xadd dword ptr [eax], edx
// 00421294  8b442428             mov eax, dword ptr [esp + 0x28]
// 00421298  894618               mov dword ptr [esi + 0x18], eax
// 0042129b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0042129f  89461c               mov dword ptr [esi + 0x1c], eax
// 004212a2  3bc1                 cmp eax, ecx
// 004212a4  740c                 je 0x4212b2
// 004212a6  83c004               add eax, 4
// 004212a9  b901000000           mov ecx, 1
// 004212ae  f00fc108             lock xadd dword ptr [eax], ecx
// 004212b2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004212b6  52                   push edx
// 004212b7  8bce                 mov ecx, esi
// 004212b9  c644241403           mov byte ptr [esp + 0x14], 3
// 004212be  e80d5f0300           call 0x4571d0
// 004212c3  8d4c2420             lea ecx, [esp + 0x20]
// 004212c7  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004212cf  e88c190000           call 0x422c60
// 004212d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004212d8  8bc6                 mov eax, esi
// 004212da  5e                   pop esi
// 004212db  64890d00000000       mov dword ptr fs:[0], ecx
// 004212e2  83c410               add esp, 0x10
// 004212e5  c21800               ret 0x18

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
