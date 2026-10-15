// from server: 100% by colin
// roc 2008-06 00466260  unit: CSelectionCaption  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00466260
//
// 00466260  6aff                 push -1
// 00466262  68a6e87b00           push 0x7be8a6
// 00466267  64a100000000         mov eax, dword ptr fs:[0]
// 0046626d  50                   push eax
// 0046626e  64892500000000       mov dword ptr fs:[0], esp
// 00466275  51                   push ecx
// 00466276  56                   push esi
// 00466277  8bf1                 mov esi, ecx
// 00466279  89742404             mov dword ptr [esp + 4], esi
// 0046627d  33c9                 xor ecx, ecx
// 0046627f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00466283  c7066cbb8100         mov dword ptr [esi], 0x81bb6c
// 00466289  894e04               mov dword ptr [esi + 4], ecx
// 0046628c  894e08               mov dword ptr [esi + 8], ecx
// 0046628f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00466293  8b542420             mov edx, dword ptr [esp + 0x20]
// 00466297  89460c               mov dword ptr [esi + 0xc], eax
// 0046629a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0046629e  895610               mov dword ptr [esi + 0x10], edx
// 004662a1  894614               mov dword ptr [esi + 0x14], eax
// 004662a4  3bc1                 cmp eax, ecx
// 004662a6  740c                 je 0x4662b4
// 004662a8  83c004               add eax, 4
// 004662ab  ba01000000           mov edx, 1
// 004662b0  f00fc110             lock xadd dword ptr [eax], edx
// 004662b4  8b442428             mov eax, dword ptr [esp + 0x28]
// 004662b8  894618               mov dword ptr [esi + 0x18], eax
// 004662bb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004662bf  89461c               mov dword ptr [esi + 0x1c], eax
// 004662c2  3bc1                 cmp eax, ecx
// 004662c4  740c                 je 0x4662d2
// 004662c6  83c004               add eax, 4
// 004662c9  b901000000           mov ecx, 1
// 004662ce  f00fc108             lock xadd dword ptr [eax], ecx
// 004662d2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004662d6  52                   push edx
// 004662d7  8bce                 mov ecx, esi
// 004662d9  c644241403           mov byte ptr [esp + 0x14], 3
// 004662de  e8ed0effff           call 0x4571d0
// 004662e3  8d4c2420             lea ecx, [esp + 0x20]
// 004662e7  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004662ef  e86cc9fbff           call 0x422c60
// 004662f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004662f8  8bc6                 mov eax, esi
// 004662fa  5e                   pop esi
// 004662fb  64890d00000000       mov dword ptr fs:[0], ecx
// 00466302  83c410               add esp, 0x10
// 00466305  c21800               ret 0x18

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
