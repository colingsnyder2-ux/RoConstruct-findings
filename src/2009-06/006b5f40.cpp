// roc 2009-06 006b5f40  unit: RBX::Unlocked  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b5f40
//
// 006b5f40  6aff                 push -1
// 006b5f42  68bbea8600           push 0x86eabb
// 006b5f47  64a100000000         mov eax, dword ptr fs:[0]
// 006b5f4d  50                   push eax
// 006b5f4e  64892500000000       mov dword ptr fs:[0], esp
// 006b5f55  51                   push ecx
// 006b5f56  56                   push esi
// 006b5f57  57                   push edi
// 006b5f58  8bf9                 mov edi, ecx
// 006b5f5a  897c2408             mov dword ptr [esp + 8], edi
// 006b5f5e  8b7710               mov esi, dword ptr [edi + 0x10]
// 006b5f61  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006b5f69  85f6                 test esi, esi
// 006b5f6b  742a                 je 0x6b5f97
// 006b5f6d  8d4604               lea eax, [esi + 4]
// 006b5f70  83c9ff               or ecx, 0xffffffff
// 006b5f73  f00fc108             lock xadd dword ptr [eax], ecx
// 006b5f77  751e                 jne 0x6b5f97
// 006b5f79  8b16                 mov edx, dword ptr [esi]
// 006b5f7b  8b4204               mov eax, dword ptr [edx + 4]
// 006b5f7e  8bce                 mov ecx, esi
// 006b5f80  ffd0                 call eax
// 006b5f82  8d4e08               lea ecx, [esi + 8]
// 006b5f85  83caff               or edx, 0xffffffff
// 006b5f88  f00fc111             lock xadd dword ptr [ecx], edx
// 006b5f8c  7509                 jne 0x6b5f97
// 006b5f8e  8b06                 mov eax, dword ptr [esi]
// 006b5f90  8b5008               mov edx, dword ptr [eax + 8]
// 006b5f93  8bce                 mov ecx, esi
// 006b5f95  ffd2                 call edx
// 006b5f97  8b7708               mov esi, dword ptr [edi + 8]
// 006b5f9a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006b5fa2  85f6                 test esi, esi
// 006b5fa4  742a                 je 0x6b5fd0
// 006b5fa6  8d4604               lea eax, [esi + 4]
// 006b5fa9  83c9ff               or ecx, 0xffffffff
// 006b5fac  f00fc108             lock xadd dword ptr [eax], ecx
// 006b5fb0  751e                 jne 0x6b5fd0
// 006b5fb2  8b16                 mov edx, dword ptr [esi]
// 006b5fb4  8b4204               mov eax, dword ptr [edx + 4]
// 006b5fb7  8bce                 mov ecx, esi
// 006b5fb9  ffd0                 call eax
// 006b5fbb  8d4e08               lea ecx, [esi + 8]
// 006b5fbe  83caff               or edx, 0xffffffff
// 006b5fc1  f00fc111             lock xadd dword ptr [ecx], edx
// 006b5fc5  7509                 jne 0x6b5fd0
// 006b5fc7  8b06                 mov eax, dword ptr [esi]
// 006b5fc9  8b5008               mov edx, dword ptr [eax + 8]
// 006b5fcc  8bce                 mov ecx, esi
// 006b5fce  ffd2                 call edx
// 006b5fd0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b5fd4  5f                   pop edi
// 006b5fd5  5e                   pop esi
// 006b5fd6  64890d00000000       mov dword ptr fs:[0], ecx
// 006b5fdd  83c410               add esp, 0x10
// 006b5fe0  c3                   ret 
// copied from an identical function in another client (function ??1S@@QAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Count
{
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Count* count;

    ~Shared();
};

inline Shared::~Shared()
{
    Count* p = count;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct S
{
    unsigned long padding;
    Shared first;
    Shared second;

    ~S();
};

S::~S()
{
}