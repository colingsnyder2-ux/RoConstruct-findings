// from server: 69% by colin
// from server: 68% by king_originala
// roc 2008-06 00572e40  unit: RBX::ServiceProvider  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00572e40
//
// 00572e40  6aff                 push -1
// 00572e42  68b1037d00           push 0x7d03b1
// 00572e47  64a100000000         mov eax, dword ptr fs:[0]
// 00572e4d  50                   push eax
// 00572e4e  64892500000000       mov dword ptr fs:[0], esp
// 00572e55  83ec0c               sub esp, 0xc
// 00572e58  55                   push ebp
// 00572e59  56                   push esi
// 00572e5a  8b742428             mov esi, dword ptr [esp + 0x28]
// 00572e5e  56                   push esi
// 00572e5f  8d442410             lea eax, [esp + 0x10]
// 00572e63  50                   push eax
// 00572e64  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00572e6c  e81ffcffff           call 0x572a90
// 00572e71  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00572e75  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00572e79  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00572e81  85c0                 test eax, eax
// 00572e83  741c                 je 0x572ea1
// 00572e85  8b742410             mov esi, dword ptr [esp + 0x10]
// 00572e89  894500               mov dword ptr [ebp], eax
// 00572e8c  897504               mov dword ptr [ebp + 4], esi
// 00572e8f  85f6                 test esi, esi
// 00572e91  740c                 je 0x572e9f
// 00572e93  8d4e04               lea ecx, [esi + 4]
// 00572e96  ba01000000           mov edx, 1
// 00572e9b  f00fc111             lock xadd dword ptr [ecx], edx
// 00572e9f  eb0e                 jmp 0x572eaf
// 00572ea1  56                   push esi
// 00572ea2  55                   push ebp
// 00572ea3  e8e8d2eaff           call 0x420190
// 00572ea8  8b742418             mov esi, dword ptr [esp + 0x18]
// 00572eac  83c408               add esp, 8
// 00572eaf  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00572eb4  c744240801000000     mov dword ptr [esp + 8], 1
// 00572ebc  85f6                 test esi, esi
// 00572ebe  742a                 je 0x572eea
// 00572ec0  83c9ff               or ecx, 0xffffffff
// 00572ec3  8d4604               lea eax, [esi + 4]
// 00572ec6  f00fc108             lock xadd dword ptr [eax], ecx
// 00572eca  751e                 jne 0x572eea
// 00572ecc  8b16                 mov edx, dword ptr [esi]
// 00572ece  8b4204               mov eax, dword ptr [edx + 4]
// 00572ed1  8bce                 mov ecx, esi
// 00572ed3  ffd0                 call eax
// 00572ed5  83caff               or edx, 0xffffffff
// 00572ed8  8d4e08               lea ecx, [esi + 8]
// 00572edb  f00fc111             lock xadd dword ptr [ecx], edx
// 00572edf  7509                 jne 0x572eea
// 00572ee1  8b06                 mov eax, dword ptr [esi]
// 00572ee3  8b5008               mov edx, dword ptr [eax + 8]
// 00572ee6  8bce                 mov ecx, esi
// 00572ee8  ffd2                 call edx
// 00572eea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00572eee  5e                   pop esi
// 00572eef  8bc5                 mov eax, ebp
// 00572ef1  5d                   pop ebp
// 00572ef2  64890d00000000       mov dword ptr fs:[0], ecx
// 00572ef9  83c418               add esp, 0x18
// 00572efc  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct __declspec(dllimport) Shared {
    void* object;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

__forceinline Shared::~Shared() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

extern Shared __cdecl fallback(void* argument);

struct S {
    Shared lookup(void* argument);
    Shared f(void* argument);
};

Shared S::f(void* argument) {
    Shared temporary = lookup(argument);
    if (temporary.object)
        return temporary;
    return fallback(argument);
}
