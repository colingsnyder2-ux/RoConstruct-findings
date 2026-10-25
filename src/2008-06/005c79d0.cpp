// from server: 100% by tester
// roc 2008-06 005c79d0  unit: RBX::HammerTool  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c79d0
//
// 005c79d0  6aff                 push -1
// 005c79d2  68b84d7d00           push 0x7d4db8
// 005c79d7  64a100000000         mov eax, dword ptr fs:[0]
// 005c79dd  50                   push eax
// 005c79de  64892500000000       mov dword ptr fs:[0], esp
// 005c79e5  51                   push ecx
// 005c79e6  56                   push esi
// 005c79e7  57                   push edi
// 005c79e8  8bf9                 mov edi, ecx
// 005c79ea  897c2408             mov dword ptr [esp + 8], edi
// 005c79ee  8b7720               mov esi, dword ptr [edi + 0x20]
// 005c79f1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005c79f9  85f6                 test esi, esi
// 005c79fb  742a                 je 0x5c7a27
// 005c79fd  8d4604               lea eax, [esi + 4]
// 005c7a00  83c9ff               or ecx, 0xffffffff
// 005c7a03  f00fc108             lock xadd dword ptr [eax], ecx
// 005c7a07  751e                 jne 0x5c7a27
// 005c7a09  8b16                 mov edx, dword ptr [esi]
// 005c7a0b  8b4204               mov eax, dword ptr [edx + 4]
// 005c7a0e  8bce                 mov ecx, esi
// 005c7a10  ffd0                 call eax
// 005c7a12  8d4e08               lea ecx, [esi + 8]
// 005c7a15  83caff               or edx, 0xffffffff
// 005c7a18  f00fc111             lock xadd dword ptr [ecx], edx
// 005c7a1c  7509                 jne 0x5c7a27
// 005c7a1e  8b06                 mov eax, dword ptr [esi]
// 005c7a20  8b5008               mov edx, dword ptr [eax + 8]
// 005c7a23  8bce                 mov ecx, esi
// 005c7a25  ffd2                 call edx
// 005c7a27  8bcf                 mov ecx, edi
// 005c7a29  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005c7a31  e84add0400           call 0x615780
// 005c7a36  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c7a3a  5f                   pop edi
// 005c7a3b  5e                   pop esi
// 005c7a3c  64890d00000000       mov dword ptr fs:[0], ecx
// 005c7a43  83c410               add esp, 0x10
// 005c7a46  c3                   ret 

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
    char storage[0x1c];
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
