// roc 2011-06 0059ed10  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059ed10
//
// 0059ed10  6aff                 push -1
// 0059ed12  68f81f9e00           push 0x9e1ff8
// 0059ed17  64a100000000         mov eax, dword ptr fs:[0]
// 0059ed1d  50                   push eax
// 0059ed1e  64892500000000       mov dword ptr fs:[0], esp
// 0059ed25  51                   push ecx
// 0059ed26  56                   push esi
// 0059ed27  57                   push edi
// 0059ed28  8bf9                 mov edi, ecx
// 0059ed2a  897c2408             mov dword ptr [esp + 8], edi
// 0059ed2e  8b7724               mov esi, dword ptr [edi + 0x24]
// 0059ed31  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0059ed39  85f6                 test esi, esi
// 0059ed3b  742a                 je 0x59ed67
// 0059ed3d  8d4604               lea eax, [esi + 4]
// 0059ed40  83c9ff               or ecx, 0xffffffff
// 0059ed43  f00fc108             lock xadd dword ptr [eax], ecx
// 0059ed47  751e                 jne 0x59ed67
// 0059ed49  8b16                 mov edx, dword ptr [esi]
// 0059ed4b  8b4204               mov eax, dword ptr [edx + 4]
// 0059ed4e  8bce                 mov ecx, esi
// 0059ed50  ffd0                 call eax
// 0059ed52  8d4e08               lea ecx, [esi + 8]
// 0059ed55  83caff               or edx, 0xffffffff
// 0059ed58  f00fc111             lock xadd dword ptr [ecx], edx
// 0059ed5c  7509                 jne 0x59ed67
// 0059ed5e  8b06                 mov eax, dword ptr [esi]
// 0059ed60  8b5008               mov edx, dword ptr [eax + 8]
// 0059ed63  8bce                 mov ecx, esi
// 0059ed65  ffd2                 call edx
// 0059ed67  8bcf                 mov ecx, edi
// 0059ed69  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0059ed71  ff15d004a400         call dword ptr [0xa404d0]
// 0059ed77  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059ed7b  5f                   pop edi
// 0059ed7c  5e                   pop esi
// 0059ed7d  64890d00000000       mov dword ptr fs:[0], ecx
// 0059ed84  83c410               add esp, 0x10
// 0059ed87  c3                   ret 
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