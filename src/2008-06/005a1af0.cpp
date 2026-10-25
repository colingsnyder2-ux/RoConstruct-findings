// from server: 100% by tester
// roc 2008-06 005a1af0  unit: RBX::DecalTool  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1af0
//
// 005a1af0  6aff                 push -1
// 005a1af2  68d8297d00           push 0x7d29d8
// 005a1af7  64a100000000         mov eax, dword ptr fs:[0]
// 005a1afd  50                   push eax
// 005a1afe  64892500000000       mov dword ptr fs:[0], esp
// 005a1b05  51                   push ecx
// 005a1b06  56                   push esi
// 005a1b07  57                   push edi
// 005a1b08  8bf9                 mov edi, ecx
// 005a1b0a  897c2408             mov dword ptr [esp + 8], edi
// 005a1b0e  8b774c               mov esi, dword ptr [edi + 0x4c]
// 005a1b11  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005a1b19  85f6                 test esi, esi
// 005a1b1b  742a                 je 0x5a1b47
// 005a1b1d  8d4604               lea eax, [esi + 4]
// 005a1b20  83c9ff               or ecx, 0xffffffff
// 005a1b23  f00fc108             lock xadd dword ptr [eax], ecx
// 005a1b27  751e                 jne 0x5a1b47
// 005a1b29  8b16                 mov edx, dword ptr [esi]
// 005a1b2b  8b4204               mov eax, dword ptr [edx + 4]
// 005a1b2e  8bce                 mov ecx, esi
// 005a1b30  ffd0                 call eax
// 005a1b32  8d4e08               lea ecx, [esi + 8]
// 005a1b35  83caff               or edx, 0xffffffff
// 005a1b38  f00fc111             lock xadd dword ptr [ecx], edx
// 005a1b3c  7509                 jne 0x5a1b47
// 005a1b3e  8b06                 mov eax, dword ptr [esi]
// 005a1b40  8b5008               mov edx, dword ptr [eax + 8]
// 005a1b43  8bce                 mov ecx, esi
// 005a1b45  ffd2                 call edx
// 005a1b47  8bcf                 mov ecx, edi
// 005a1b49  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005a1b51  e8aaf1ffff           call 0x5a0d00
// 005a1b56  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a1b5a  5f                   pop edi
// 005a1b5b  5e                   pop esi
// 005a1b5c  64890d00000000       mov dword ptr fs:[0], ecx
// 005a1b63  83c410               add esp, 0x10
// 005a1b66  c3                   ret 

#include <intrin.h>

struct Counted {
    virtual ~Counted();
    virtual void dispose();
    virtual void destroy();
    long use;
    long weak;
    void release()
    {
        if (_InterlockedDecrement(&use) == 0) {
            dispose();
            if (_InterlockedDecrement(&weak) == 0)
                destroy();
        }
    }
};

struct Base {
    char storage[0x48];
    ~Base();
};

struct Derived : Base {
    void* px;
    Counted* pn;
    ~Derived();
};

Derived::~Derived()
{
    if (pn)
        pn->release();
}
