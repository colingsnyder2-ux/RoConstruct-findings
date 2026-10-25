// from server: 100% by king_originala
// roc 2008-06 004c7a10  unit: RBX::VInstance::?$Association::Item  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c7a10
//
// 004c7a10  6aff                 push -1
// 004c7a12  6838077d00           push 0x7d0738
// 004c7a17  64a100000000         mov eax, dword ptr fs:[0]
// 004c7a1d  50                   push eax
// 004c7a1e  64892500000000       mov dword ptr fs:[0], esp
// 004c7a25  51                   push ecx
// 004c7a26  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c7a2a  56                   push esi
// 004c7a2b  8bf1                 mov esi, ecx
// 004c7a2d  8b08                 mov ecx, dword ptr [eax]
// 004c7a2f  890e                 mov dword ptr [esi], ecx
// 004c7a31  8b4004               mov eax, dword ptr [eax + 4]
// 004c7a34  33c9                 xor ecx, ecx
// 004c7a36  89742404             mov dword ptr [esp + 4], esi
// 004c7a3a  894604               mov dword ptr [esi + 4], eax
// 004c7a3d  3bc1                 cmp eax, ecx
// 004c7a3f  740c                 je 0x4c7a4d
// 004c7a41  83c004               add eax, 4
// 004c7a44  ba01000000           mov edx, 1
// 004c7a49  f00fc110             lock xadd dword ptr [eax], edx
// 004c7a4d  d9ee                 fldz 
// 004c7a4f  6810e94a00           push 0x4ae910
// 004c7a54  dd5e10               fstp qword ptr [esi + 0x10]
// 004c7a57  68a0764c00           push 0x4c76a0
// 004c7a5c  6a08                 push 8
// 004c7a5e  6a4c                 push 0x4c
// 004c7a60  8d4620               lea eax, [esi + 0x20]
// 004c7a63  50                   push eax
// 004c7a64  894c2424             mov dword ptr [esp + 0x24], ecx
// 004c7a68  894e18               mov dword ptr [esi + 0x18], ecx
// 004c7a6b  894e1c               mov dword ptr [esi + 0x1c], ecx
// 004c7a6e  e8259b1d00           call 0x6a1598
// 004c7a73  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c7a77  8bc6                 mov eax, esi
// 004c7a79  5e                   pop esi
// 004c7a7a  64890d00000000       mov dword ptr fs:[0], ecx
// 004c7a81  83c410               add esp, 0x10
// 004c7a84  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

__forceinline void increment(volatile long* counter)
{
    _InterlockedExchangeAdd(counter, 1);
}

struct Control {
    long reserved;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        increment(&control->references);
}

struct Element {
    char storage[0x4c];

    Element();
    ~Element();
};

struct S {
    Shared owner;
    char reserved[8];
    double value;
    unsigned first;
    unsigned second;
    Element elements[8];

    S(const Shared&);
};

S::S(const Shared& source)
    : owner(source), value(0.0), first(0), second(0)
{
}
