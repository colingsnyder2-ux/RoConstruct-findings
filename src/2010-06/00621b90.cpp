// roc 2010-06 00621b90  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00621b90
//
// 00621b90  6aff                 push -1
// 00621b92  68d8099a00           push 0x9a09d8
// 00621b97  64a100000000         mov eax, dword ptr fs:[0]
// 00621b9d  50                   push eax
// 00621b9e  64892500000000       mov dword ptr fs:[0], esp
// 00621ba5  51                   push ecx
// 00621ba6  56                   push esi
// 00621ba7  57                   push edi
// 00621ba8  8bf9                 mov edi, ecx
// 00621baa  897c2408             mov dword ptr [esp + 8], edi
// 00621bae  8b7724               mov esi, dword ptr [edi + 0x24]
// 00621bb1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00621bb9  85f6                 test esi, esi
// 00621bbb  742a                 je 0x621be7
// 00621bbd  8d4604               lea eax, [esi + 4]
// 00621bc0  83c9ff               or ecx, 0xffffffff
// 00621bc3  f00fc108             lock xadd dword ptr [eax], ecx
// 00621bc7  751e                 jne 0x621be7
// 00621bc9  8b16                 mov edx, dword ptr [esi]
// 00621bcb  8b4204               mov eax, dword ptr [edx + 4]
// 00621bce  8bce                 mov ecx, esi
// 00621bd0  ffd0                 call eax
// 00621bd2  8d4e08               lea ecx, [esi + 8]
// 00621bd5  83caff               or edx, 0xffffffff
// 00621bd8  f00fc111             lock xadd dword ptr [ecx], edx
// 00621bdc  7509                 jne 0x621be7
// 00621bde  8b06                 mov eax, dword ptr [esi]
// 00621be0  8b5008               mov edx, dword ptr [eax + 8]
// 00621be3  8bce                 mov ecx, esi
// 00621be5  ffd2                 call edx
// 00621be7  8bcf                 mov ecx, edi
// 00621be9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00621bf1  ff1500a49e00         call dword ptr [0x9ea400]
// 00621bf7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00621bfb  5f                   pop edi
// 00621bfc  5e                   pop esi
// 00621bfd  64890d00000000       mov dword ptr fs:[0], ecx
// 00621c04  83c410               add esp, 0x10
// 00621c07  c3                   ret 
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