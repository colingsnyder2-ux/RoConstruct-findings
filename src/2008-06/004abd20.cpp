// from server: 100% by king_originala
// roc 2008-06 004abd20  unit: RBX::Network::Replicator  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004abd20
//
// 004abd20  6aff                 push -1
// 004abd22  6813837c00           push 0x7c8313
// 004abd27  64a100000000         mov eax, dword ptr fs:[0]
// 004abd2d  50                   push eax
// 004abd2e  64892500000000       mov dword ptr fs:[0], esp
// 004abd35  51                   push ecx
// 004abd36  56                   push esi
// 004abd37  57                   push edi
// 004abd38  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004abd3c  8b07                 mov eax, dword ptr [edi]
// 004abd3e  8bf1                 mov esi, ecx
// 004abd40  8906                 mov dword ptr [esi], eax
// 004abd42  8b4704               mov eax, dword ptr [edi + 4]
// 004abd45  89742408             mov dword ptr [esp + 8], esi
// 004abd49  894604               mov dword ptr [esi + 4], eax
// 004abd4c  85c0                 test eax, eax
// 004abd4e  740c                 je 0x4abd5c
// 004abd50  83c004               add eax, 4
// 004abd53  b901000000           mov ecx, 1
// 004abd58  f00fc108             lock xadd dword ptr [eax], ecx
// 004abd5c  8d5708               lea edx, [edi + 8]
// 004abd5f  52                   push edx
// 004abd60  8d4e08               lea ecx, [esi + 8]
// 004abd63  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004abd6b  e880930e00           call 0x5950f0
// 004abd70  8d4718               lea eax, [edi + 0x18]
// 004abd73  50                   push eax
// 004abd74  8d4e18               lea ecx, [esi + 0x18]
// 004abd77  c644241801           mov byte ptr [esp + 0x18], 1
// 004abd7c  e86f930e00           call 0x5950f0
// 004abd81  8a4f28               mov cl, byte ptr [edi + 0x28]
// 004abd84  884e28               mov byte ptr [esi + 0x28], cl
// 004abd87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004abd8b  5f                   pop edi
// 004abd8c  8bc6                 mov eax, esi
// 004abd8e  5e                   pop esi
// 004abd8f  64890d00000000       mov dword ptr fs:[0], ecx
// 004abd96  83c410               add esp, 0x10
// 004abd99  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

inline void add_reference(volatile long* count)
{
    _InterlockedExchangeAdd(count, 1);
}

struct Control {
    long reserved;
    volatile long references;
};

struct Shared {
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        add_reference(&control->references);
}

struct Ref {
    unsigned long data[4];

    Ref(const Ref&);
    ~Ref();
};

struct S {
    Shared shared;
    Ref first;
    Ref second;
    unsigned char flag;

    S(const S&);
};

S::S(const S& other)
    : shared(other.shared),
      first(other.first),
      second(other.second),
      flag(other.flag)
{
}
