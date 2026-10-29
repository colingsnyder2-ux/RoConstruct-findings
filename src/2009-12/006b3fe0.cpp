// roc 2009-12 006b3fe0  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b3fe0
//
// 006b3fe0  6aff                 push -1
// 006b3fe2  6818859400           push 0x948518
// 006b3fe7  64a100000000         mov eax, dword ptr fs:[0]
// 006b3fed  50                   push eax
// 006b3fee  64892500000000       mov dword ptr fs:[0], esp
// 006b3ff5  51                   push ecx
// 006b3ff6  56                   push esi
// 006b3ff7  57                   push edi
// 006b3ff8  8bf9                 mov edi, ecx
// 006b3ffa  897c2408             mov dword ptr [esp + 8], edi
// 006b3ffe  8b7724               mov esi, dword ptr [edi + 0x24]
// 006b4001  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006b4009  85f6                 test esi, esi
// 006b400b  742a                 je 0x6b4037
// 006b400d  8d4604               lea eax, [esi + 4]
// 006b4010  83c9ff               or ecx, 0xffffffff
// 006b4013  f00fc108             lock xadd dword ptr [eax], ecx
// 006b4017  751e                 jne 0x6b4037
// 006b4019  8b16                 mov edx, dword ptr [esi]
// 006b401b  8b4204               mov eax, dword ptr [edx + 4]
// 006b401e  8bce                 mov ecx, esi
// 006b4020  ffd0                 call eax
// 006b4022  8d4e08               lea ecx, [esi + 8]
// 006b4025  83caff               or edx, 0xffffffff
// 006b4028  f00fc111             lock xadd dword ptr [ecx], edx
// 006b402c  7509                 jne 0x6b4037
// 006b402e  8b06                 mov eax, dword ptr [esi]
// 006b4030  8b5008               mov edx, dword ptr [eax + 8]
// 006b4033  8bce                 mov ecx, esi
// 006b4035  ffd2                 call edx
// 006b4037  8bcf                 mov ecx, edi
// 006b4039  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006b4041  ff15e4b69800         call dword ptr [0x98b6e4]
// 006b4047  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b404b  5f                   pop edi
// 006b404c  5e                   pop esi
// 006b404d  64890d00000000       mov dword ptr fs:[0], ecx
// 006b4054  83c410               add esp, 0x10
// 006b4057  c3                   ret 
// copied from an identical function in another client (function ??1Pair@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;

    void release()
    {
        if (_InterlockedDecrement(&strong) == 0)
        {
            dispose();
            if (_InterlockedDecrement(&weak) == 0)
                destroy();
        }
    }
};

struct Second
{
    void* value;
    Control* control;

    ~Second()
    {
        if (control)
            control->release();
    }
};

struct Pair
{
    std::string first;
    char pad[4];
    Second second;

    ~Pair();
};

Pair::~Pair()
{
}