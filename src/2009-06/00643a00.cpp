// roc 2009-06 00643a00  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00643a00
//
// 00643a00  6aff                 push -1
// 00643a02  68083a8600           push 0x863a08
// 00643a07  64a100000000         mov eax, dword ptr fs:[0]
// 00643a0d  50                   push eax
// 00643a0e  64892500000000       mov dword ptr fs:[0], esp
// 00643a15  51                   push ecx
// 00643a16  56                   push esi
// 00643a17  57                   push edi
// 00643a18  8bf9                 mov edi, ecx
// 00643a1a  897c2408             mov dword ptr [esp + 8], edi
// 00643a1e  8b7724               mov esi, dword ptr [edi + 0x24]
// 00643a21  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00643a29  85f6                 test esi, esi
// 00643a2b  742a                 je 0x643a57
// 00643a2d  8d4604               lea eax, [esi + 4]
// 00643a30  83c9ff               or ecx, 0xffffffff
// 00643a33  f00fc108             lock xadd dword ptr [eax], ecx
// 00643a37  751e                 jne 0x643a57
// 00643a39  8b16                 mov edx, dword ptr [esi]
// 00643a3b  8b4204               mov eax, dword ptr [edx + 4]
// 00643a3e  8bce                 mov ecx, esi
// 00643a40  ffd0                 call eax
// 00643a42  8d4e08               lea ecx, [esi + 8]
// 00643a45  83caff               or edx, 0xffffffff
// 00643a48  f00fc111             lock xadd dword ptr [ecx], edx
// 00643a4c  7509                 jne 0x643a57
// 00643a4e  8b06                 mov eax, dword ptr [esi]
// 00643a50  8b5008               mov edx, dword ptr [eax + 8]
// 00643a53  8bce                 mov ecx, esi
// 00643a55  ffd2                 call edx
// 00643a57  8bcf                 mov ecx, edi
// 00643a59  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00643a61  ff15c4e48900         call dword ptr [0x89e4c4]
// 00643a67  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00643a6b  5f                   pop edi
// 00643a6c  5e                   pop esi
// 00643a6d  64890d00000000       mov dword ptr fs:[0], ecx
// 00643a74  83c410               add esp, 0x10
// 00643a77  c3                   ret 
// copied from an identical function in another client (function ??1Pair@@QAE@XZ)

// from server: 100% by colin
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