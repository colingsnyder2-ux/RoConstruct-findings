// roc 2012-06 007ad770  unit: RBX::VCacheableContentProvider::?$NonFactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007ad770
//
// 007ad770  6aff                 push -1
// 007ad772  68e9f3a900           push 0xa9f3e9
// 007ad777  64a100000000         mov eax, dword ptr fs:[0]
// 007ad77d  50                   push eax
// 007ad77e  64892500000000       mov dword ptr fs:[0], esp
// 007ad785  51                   push ecx
// 007ad786  56                   push esi
// 007ad787  57                   push edi
// 007ad788  8bf9                 mov edi, ecx
// 007ad78a  897c2408             mov dword ptr [esp + 8], edi
// 007ad78e  8b7724               mov esi, dword ptr [edi + 0x24]
// 007ad791  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007ad799  85f6                 test esi, esi
// 007ad79b  742a                 je 0x7ad7c7
// 007ad79d  8d4604               lea eax, [esi + 4]
// 007ad7a0  83c9ff               or ecx, 0xffffffff
// 007ad7a3  f00fc108             lock xadd dword ptr [eax], ecx
// 007ad7a7  751e                 jne 0x7ad7c7
// 007ad7a9  8b16                 mov edx, dword ptr [esi]
// 007ad7ab  8b4204               mov eax, dword ptr [edx + 4]
// 007ad7ae  8bce                 mov ecx, esi
// 007ad7b0  ffd0                 call eax
// 007ad7b2  8d4e08               lea ecx, [esi + 8]
// 007ad7b5  83caff               or edx, 0xffffffff
// 007ad7b8  f00fc111             lock xadd dword ptr [ecx], edx
// 007ad7bc  7509                 jne 0x7ad7c7
// 007ad7be  8b06                 mov eax, dword ptr [esi]
// 007ad7c0  8b5008               mov edx, dword ptr [eax + 8]
// 007ad7c3  8bce                 mov ecx, esi
// 007ad7c5  ffd2                 call edx
// 007ad7c7  8bcf                 mov ecx, edi
// 007ad7c9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007ad7d1  ff153c26b200         call dword ptr [0xb2263c]
// 007ad7d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007ad7db  5f                   pop edi
// 007ad7dc  5e                   pop esi
// 007ad7dd  64890d00000000       mov dword ptr fs:[0], ecx
// 007ad7e4  83c410               add esp, 0x10
// 007ad7e7  c3                   ret 
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