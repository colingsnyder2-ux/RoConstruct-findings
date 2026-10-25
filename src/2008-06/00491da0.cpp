// from server: 100% by king_originala
// roc 2008-06 00491da0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491da0
//
// 00491da0  6aff                 push -1
// 00491da2  6868667c00           push 0x7c6668
// 00491da7  64a100000000         mov eax, dword ptr fs:[0]
// 00491dad  50                   push eax
// 00491dae  64892500000000       mov dword ptr fs:[0], esp
// 00491db5  51                   push ecx
// 00491db6  56                   push esi
// 00491db7  8bf1                 mov esi, ecx
// 00491db9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00491dbd  6a00                 push 0
// 00491dbf  83ec14               sub esp, 0x14
// 00491dc2  8bc4                 mov eax, esp
// 00491dc4  8908                 mov dword ptr [eax], ecx
// 00491dc6  8b542434             mov edx, dword ptr [esp + 0x34]
// 00491dca  895004               mov dword ptr [eax + 4], edx
// 00491dcd  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00491dd1  894808               mov dword ptr [eax + 8], ecx
// 00491dd4  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00491dd8  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00491de0  8964241c             mov dword ptr [esp + 0x1c], esp
// 00491de4  85c9                 test ecx, ecx
// 00491de6  740c                 je 0x491df4
// 00491de8  83c104               add ecx, 4
// 00491deb  ba01000000           mov edx, 1
// 00491df0  f00fc111             lock xadd dword ptr [ecx], edx
// 00491df4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00491df8  89480c               mov dword ptr [eax + 0xc], ecx
// 00491dfb  8b542440             mov edx, dword ptr [esp + 0x40]
// 00491dff  895010               mov dword ptr [eax + 0x10], edx
// 00491e02  8b442440             mov eax, dword ptr [esp + 0x40]
// 00491e06  85c0                 test eax, eax
// 00491e08  740c                 je 0x491e16
// 00491e0a  83c004               add eax, 4
// 00491e0d  b901000000           mov ecx, 1
// 00491e12  f00fc108             lock xadd dword ptr [eax], ecx
// 00491e16  8bce                 mov ecx, esi
// 00491e18  e843ecffff           call 0x490a60
// 00491e1d  8d4c241c             lea ecx, [esp + 0x1c]
// 00491e21  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00491e29  e8320ef9ff           call 0x422c60
// 00491e2e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00491e32  8bc6                 mov eax, esi
// 00491e34  64890d00000000       mov dword ptr fs:[0], ecx
// 00491e3b  5e                   pop esi
// 00491e3c  83c410               add esp, 0x10
// 00491e3f  c21800               ret 0x18

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    long unused;
    volatile long count;
};

struct Shared {
    void* pointer;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control) {
        volatile long* count = &control->count;
        _InterlockedExchangeAdd(count, 1);
    }
}

struct Bundle {
    Shared first;
    Shared second;

    ~Bundle();
};

struct Argument {
    int value;
    Bundle bundle;
};

struct S {
    void helper(Argument argument, int flag);
    S& f(Argument argument, int flag);
};

S& S::f(Argument argument, int flag)
{
    helper(argument, 0);
    return *this;
}
