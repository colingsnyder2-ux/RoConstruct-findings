// from server: 100% by tester
// roc 2008-06 005c3c00  unit: RBX::ObjectValue  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3c00
//
// 005c3c00  6aff                 push -1
// 005c3c02  68a8487d00           push 0x7d48a8
// 005c3c07  64a100000000         mov eax, dword ptr fs:[0]
// 005c3c0d  50                   push eax
// 005c3c0e  64892500000000       mov dword ptr fs:[0], esp
// 005c3c15  51                   push ecx
// 005c3c16  56                   push esi
// 005c3c17  57                   push edi
// 005c3c18  8bf9                 mov edi, ecx
// 005c3c1a  897c2408             mov dword ptr [esp + 8], edi
// 005c3c1e  8bb734010000         mov esi, dword ptr [edi + 0x134]
// 005c3c24  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005c3c2c  85f6                 test esi, esi
// 005c3c2e  742a                 je 0x5c3c5a
// 005c3c30  8d4604               lea eax, [esi + 4]
// 005c3c33  83c9ff               or ecx, 0xffffffff
// 005c3c36  f00fc108             lock xadd dword ptr [eax], ecx
// 005c3c3a  751e                 jne 0x5c3c5a
// 005c3c3c  8b16                 mov edx, dword ptr [esi]
// 005c3c3e  8b4204               mov eax, dword ptr [edx + 4]
// 005c3c41  8bce                 mov ecx, esi
// 005c3c43  ffd0                 call eax
// 005c3c45  8d4e08               lea ecx, [esi + 8]
// 005c3c48  83caff               or edx, 0xffffffff
// 005c3c4b  f00fc111             lock xadd dword ptr [ecx], edx
// 005c3c4f  7509                 jne 0x5c3c5a
// 005c3c51  8b06                 mov eax, dword ptr [esi]
// 005c3c53  8b5008               mov edx, dword ptr [eax + 8]
// 005c3c56  8bce                 mov ecx, esi
// 005c3c58  ffd2                 call edx
// 005c3c5a  8bcf                 mov ecx, edi
// 005c3c5c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005c3c64  e867edffff           call 0x5c29d0
// 005c3c69  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c3c6d  5f                   pop edi
// 005c3c6e  5e                   pop esi
// 005c3c6f  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3c76  83c410               add esp, 0x10
// 005c3c79  c3                   ret 

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
    char storage[0x130];
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
