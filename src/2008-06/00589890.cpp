// from server: 88% by colin
// from server: 86% by king_originala
// roc 2008-06 00589890  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00589890
//
// 00589890  6aff                 push -1
// 00589892  682e157d00           push 0x7d152e
// 00589897  64a100000000         mov eax, dword ptr fs:[0]
// 0058989d  50                   push eax
// 0058989e  64892500000000       mov dword ptr fs:[0], esp
// 005898a5  51                   push ecx
// 005898a6  53                   push ebx
// 005898a7  56                   push esi
// 005898a8  8bf1                 mov esi, ecx
// 005898aa  57                   push edi
// 005898ab  8974240c             mov dword ptr [esp + 0xc], esi
// 005898af  8b442420             mov eax, dword ptr [esp + 0x20]
// 005898b3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005898b7  8906                 mov dword ptr [esi], eax
// 005898b9  8b442428             mov eax, dword ptr [esp + 0x28]
// 005898bd  33db                 xor ebx, ebx
// 005898bf  894e04               mov dword ptr [esi + 4], ecx
// 005898c2  895c2418             mov dword ptr [esp + 0x18], ebx
// 005898c6  894608               mov dword ptr [esi + 8], eax
// 005898c9  3bc3                 cmp eax, ebx
// 005898cb  740c                 je 0x5898d9
// 005898cd  83c004               add eax, 4
// 005898d0  ba01000000           mov edx, 1
// 005898d5  f00fc110             lock xadd dword ptr [eax], edx
// 005898d9  895e0c               mov dword ptr [esi + 0xc], ebx
// 005898dc  895e10               mov dword ptr [esi + 0x10], ebx
// 005898df  895e14               mov dword ptr [esi + 0x14], ebx
// 005898e2  8d442420             lea eax, [esp + 0x20]
// 005898e6  50                   push eax
// 005898e7  8d542424             lea edx, [esp + 0x24]
// 005898eb  8d4e18               lea ecx, [esi + 0x18]
// 005898ee  52                   push edx
// 005898ef  c644242002           mov byte ptr [esp + 0x20], 2
// 005898f4  e897f8ffff           call 0x589190
// 005898f9  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005898fd  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00589905  3bfb                 cmp edi, ebx
// 00589907  742a                 je 0x589933
// 00589909  8d4704               lea eax, [edi + 4]
// 0058990c  83c9ff               or ecx, 0xffffffff
// 0058990f  f00fc108             lock xadd dword ptr [eax], ecx
// 00589913  751e                 jne 0x589933
// 00589915  8b17                 mov edx, dword ptr [edi]
// 00589917  8b4204               mov eax, dword ptr [edx + 4]
// 0058991a  8bcf                 mov ecx, edi
// 0058991c  ffd0                 call eax
// 0058991e  8d4f08               lea ecx, [edi + 8]
// 00589921  83caff               or edx, 0xffffffff
// 00589924  f00fc111             lock xadd dword ptr [ecx], edx
// 00589928  7509                 jne 0x589933
// 0058992a  8b07                 mov eax, dword ptr [edi]
// 0058992c  8b5008               mov edx, dword ptr [eax + 8]
// 0058992f  8bcf                 mov ecx, edi
// 00589931  ffd2                 call edx
// 00589933  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00589937  5f                   pop edi
// 00589938  8bc6                 mov eax, esi
// 0058993a  5e                   pop esi
// 0058993b  5b                   pop ebx
// 0058993c  64890d00000000       mov dword ptr fs:[0], ecx
// 00589943  83c410               add esp, 0x10
// 00589946  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void reserved() = 0;
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

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedIncrement(&control->strong);
}

__forceinline Shared::~Shared() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Vector {
    void* first;
    void* last;
    void* end;

    Vector();
    ~Vector();
};

__forceinline Vector::Vector() : first(0), last(0), end(0) {}

struct AllocatorA {};
struct AllocatorB {};

struct Helper {
    unsigned long data;
    Helper(const AllocatorA&, const AllocatorB&);
};

struct S {
    int value;
    Shared shared;
    Vector vector;
    Helper helper;

    S(int, Shared);
};

S::S(int n, Shared p)
    : value(n), shared(p), vector(),
      helper(reinterpret_cast<const AllocatorA&>(n),
             reinterpret_cast<const AllocatorB&>(n)) {
}
