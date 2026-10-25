// from server: 100% by king_originala
// roc 2008-06 0055d530  unit: RBX::MD5HasherImpl  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055d530
//
// 0055d530  6aff                 push -1
// 0055d532  6818627c00           push 0x7c6218
// 0055d537  64a100000000         mov eax, dword ptr fs:[0]
// 0055d53d  50                   push eax
// 0055d53e  64892500000000       mov dword ptr fs:[0], esp
// 0055d545  51                   push ecx
// 0055d546  56                   push esi
// 0055d547  57                   push edi
// 0055d548  8bf9                 mov edi, ecx
// 0055d54a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0055d54e  83ec08               sub esp, 8
// 0055d551  8bc4                 mov eax, esp
// 0055d553  8908                 mov dword ptr [eax], ecx
// 0055d555  8b542430             mov edx, dword ptr [esp + 0x30]
// 0055d559  895004               mov dword ptr [eax + 4], edx
// 0055d55c  8b442430             mov eax, dword ptr [esp + 0x30]
// 0055d560  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0055d568  89642410             mov dword ptr [esp + 0x10], esp
// 0055d56c  85c0                 test eax, eax
// 0055d56e  740c                 je 0x55d57c
// 0055d570  83c004               add eax, 4
// 0055d573  b901000000           mov ecx, 1
// 0055d578  f00fc108             lock xadd dword ptr [eax], ecx
// 0055d57c  8b542428             mov edx, dword ptr [esp + 0x28]
// 0055d580  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055d584  52                   push edx
// 0055d585  50                   push eax
// 0055d586  8bcf                 mov ecx, edi
// 0055d588  e8a3f9ffff           call 0x55cf30
// 0055d58d  8b742428             mov esi, dword ptr [esp + 0x28]
// 0055d591  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0055d599  85f6                 test esi, esi
// 0055d59b  742a                 je 0x55d5c7
// 0055d59d  8d4e04               lea ecx, [esi + 4]
// 0055d5a0  83caff               or edx, 0xffffffff
// 0055d5a3  f00fc111             lock xadd dword ptr [ecx], edx
// 0055d5a7  751e                 jne 0x55d5c7
// 0055d5a9  8b06                 mov eax, dword ptr [esi]
// 0055d5ab  8b5004               mov edx, dword ptr [eax + 4]
// 0055d5ae  8bce                 mov ecx, esi
// 0055d5b0  ffd2                 call edx
// 0055d5b2  8d4608               lea eax, [esi + 8]
// 0055d5b5  83c9ff               or ecx, 0xffffffff
// 0055d5b8  f00fc108             lock xadd dword ptr [eax], ecx
// 0055d5bc  7509                 jne 0x55d5c7
// 0055d5be  8b16                 mov edx, dword ptr [esi]
// 0055d5c0  8b4208               mov eax, dword ptr [edx + 8]
// 0055d5c3  8bce                 mov ecx, esi
// 0055d5c5  ffd0                 call eax
// 0055d5c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055d5cb  8bc7                 mov eax, edi
// 0055d5cd  5f                   pop edi
// 0055d5ce  64890d00000000       mov dword ptr fs:[0], ecx
// 0055d5d5  5e                   pop esi
// 0055d5d6  83c410               add esp, 0x10
// 0055d5d9  c21000               ret 0x10

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Base {
    Base(int, int, Shared);
};

struct S : Base {
    S(int, int, Shared);
};

S::S(int a, int b, Shared value)
    : Base(a, b, value)
{
}
