// from server: 83% by colin
// from server: 81% by king_originala
// roc 2008-06 0055d460  unit: RBX::MD5HasherImpl  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055d460
//
// 0055d460  6aff                 push -1
// 0055d462  6870e87c00           push 0x7ce870
// 0055d467  64a100000000         mov eax, dword ptr fs:[0]
// 0055d46d  50                   push eax
// 0055d46e  64892500000000       mov dword ptr fs:[0], esp
// 0055d475  83ec2c               sub esp, 0x2c
// 0055d478  56                   push esi
// 0055d479  833900               cmp dword ptr [ecx], 0
// 0055d47c  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0055d484  7514                 jne 0x55d49a
// 0055d486  8d4c2408             lea ecx, [esp + 8]
// 0055d48a  e861caeaff           call 0x409ef0
// 0055d48f  50                   push eax
// 0055d490  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0055d495  e866d0eaff           call 0x40a500
// 0055d49a  8b542444             mov edx, dword ptr [esp + 0x44]
// 0055d49e  83ec08               sub esp, 8
// 0055d4a1  8bc4                 mov eax, esp
// 0055d4a3  8910                 mov dword ptr [eax], edx
// 0055d4a5  8b542450             mov edx, dword ptr [esp + 0x50]
// 0055d4a9  895004               mov dword ptr [eax + 4], edx
// 0055d4ac  8b442450             mov eax, dword ptr [esp + 0x50]
// 0055d4b0  8964240c             mov dword ptr [esp + 0xc], esp
// 0055d4b4  85c0                 test eax, eax
// 0055d4b6  740c                 je 0x55d4c4
// 0055d4b8  83c004               add eax, 4
// 0055d4bb  ba01000000           mov edx, 1
// 0055d4c0  f00fc110             lock xadd dword ptr [eax], edx
// 0055d4c4  8b01                 mov eax, dword ptr [ecx]
// 0055d4c6  8b542448             mov edx, dword ptr [esp + 0x48]
// 0055d4ca  8b4004               mov eax, dword ptr [eax + 4]
// 0055d4cd  52                   push edx
// 0055d4ce  83c108               add ecx, 8
// 0055d4d1  51                   push ecx
// 0055d4d2  ffd0                 call eax
// 0055d4d4  8b742458             mov esi, dword ptr [esp + 0x58]
// 0055d4d8  83c410               add esp, 0x10
// 0055d4db  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0055d4e3  85f6                 test esi, esi
// 0055d4e5  742a                 je 0x55d511
// 0055d4e7  8d4e04               lea ecx, [esi + 4]
// 0055d4ea  83caff               or edx, 0xffffffff
// 0055d4ed  f00fc111             lock xadd dword ptr [ecx], edx
// 0055d4f1  751e                 jne 0x55d511
// 0055d4f3  8b06                 mov eax, dword ptr [esi]
// 0055d4f5  8b5004               mov edx, dword ptr [eax + 4]
// 0055d4f8  8bce                 mov ecx, esi
// 0055d4fa  ffd2                 call edx
// 0055d4fc  8d4608               lea eax, [esi + 8]
// 0055d4ff  83c9ff               or ecx, 0xffffffff
// 0055d502  f00fc108             lock xadd dword ptr [eax], ecx
// 0055d506  7509                 jne 0x55d511
// 0055d508  8b16                 mov edx, dword ptr [esi]
// 0055d50a  8b4208               mov eax, dword ptr [edx + 8]
// 0055d50d  8bce                 mov ecx, esi
// 0055d50f  ffd0                 call eax
// 0055d511  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055d515  64890d00000000       mov dword ptr fs:[0], ecx
// 0055d51c  5e                   pop esi
// 0055d51d  83c438               add esp, 0x38
// 0055d520  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCount {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    RefCount* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Shared::~Shared()
{
    RefCount* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Error {
    char storage[40];

    Error();
    ~Error();
};

extern "C" void __cdecl raise_error(const Error&);

struct Dispatch {
    void (__cdecl *reserved)();
    void (__cdecl *invoke)(void*, int, Shared);
};

struct S {
    Dispatch* dispatch;
    unsigned long padding;
    char storage[1];

    void f(int, Shared);
};

void S::f(int value, Shared argument)
{
    if (!dispatch)
        raise_error(Error());

    dispatch->invoke(storage, value, argument);
}
