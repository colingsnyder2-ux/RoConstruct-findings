// roc 2012-06 00692f70  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00692f70
//
// 00692f70  6aff                 push -1
// 00692f72  6828acab00           push 0xabac28
// 00692f77  64a100000000         mov eax, dword ptr fs:[0]
// 00692f7d  50                   push eax
// 00692f7e  64892500000000       mov dword ptr fs:[0], esp
// 00692f85  51                   push ecx
// 00692f86  56                   push esi
// 00692f87  57                   push edi
// 00692f88  8bf9                 mov edi, ecx
// 00692f8a  897c2408             mov dword ptr [esp + 8], edi
// 00692f8e  8b7724               mov esi, dword ptr [edi + 0x24]
// 00692f91  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00692f99  85f6                 test esi, esi
// 00692f9b  742a                 je 0x692fc7
// 00692f9d  8d4604               lea eax, [esi + 4]
// 00692fa0  83c9ff               or ecx, 0xffffffff
// 00692fa3  f00fc108             lock xadd dword ptr [eax], ecx
// 00692fa7  751e                 jne 0x692fc7
// 00692fa9  8b16                 mov edx, dword ptr [esi]
// 00692fab  8b4204               mov eax, dword ptr [edx + 4]
// 00692fae  8bce                 mov ecx, esi
// 00692fb0  ffd0                 call eax
// 00692fb2  8d4e08               lea ecx, [esi + 8]
// 00692fb5  83caff               or edx, 0xffffffff
// 00692fb8  f00fc111             lock xadd dword ptr [ecx], edx
// 00692fbc  7509                 jne 0x692fc7
// 00692fbe  8b06                 mov eax, dword ptr [esi]
// 00692fc0  8b5008               mov edx, dword ptr [eax + 8]
// 00692fc3  8bce                 mov ecx, esi
// 00692fc5  ffd2                 call edx
// 00692fc7  8bcf                 mov ecx, edi
// 00692fc9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00692fd1  ff153c26b200         call dword ptr [0xb2263c]
// 00692fd7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00692fdb  5f                   pop edi
// 00692fdc  5e                   pop esi
// 00692fdd  64890d00000000       mov dword ptr fs:[0], ecx
// 00692fe4  83c410               add esp, 0x10
// 00692fe7  c3                   ret 
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