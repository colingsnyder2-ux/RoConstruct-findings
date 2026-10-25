// from server: 100% by tester
// roc 2008-06 00632d10  unit: RBX::Rocket  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00632d10
//
// 00632d10  6aff                 push -1
// 00632d12  68e89d7d00           push 0x7d9de8
// 00632d17  64a100000000         mov eax, dword ptr fs:[0]
// 00632d1d  50                   push eax
// 00632d1e  64892500000000       mov dword ptr fs:[0], esp
// 00632d25  51                   push ecx
// 00632d26  56                   push esi
// 00632d27  57                   push edi
// 00632d28  8bf9                 mov edi, ecx
// 00632d2a  897c2408             mov dword ptr [esp + 8], edi
// 00632d2e  8bb750010000         mov esi, dword ptr [edi + 0x150]
// 00632d34  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00632d3c  85f6                 test esi, esi
// 00632d3e  742a                 je 0x632d6a
// 00632d40  8d4604               lea eax, [esi + 4]
// 00632d43  83c9ff               or ecx, 0xffffffff
// 00632d46  f00fc108             lock xadd dword ptr [eax], ecx
// 00632d4a  751e                 jne 0x632d6a
// 00632d4c  8b16                 mov edx, dword ptr [esi]
// 00632d4e  8b4204               mov eax, dword ptr [edx + 4]
// 00632d51  8bce                 mov ecx, esi
// 00632d53  ffd0                 call eax
// 00632d55  8d4e08               lea ecx, [esi + 8]
// 00632d58  83caff               or edx, 0xffffffff
// 00632d5b  f00fc111             lock xadd dword ptr [ecx], edx
// 00632d5f  7509                 jne 0x632d6a
// 00632d61  8b06                 mov eax, dword ptr [esi]
// 00632d63  8b5008               mov edx, dword ptr [eax + 8]
// 00632d66  8bce                 mov ecx, esi
// 00632d68  ffd2                 call edx
// 00632d6a  8bcf                 mov ecx, edi
// 00632d6c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00632d74  e867c7ffff           call 0x62f4e0
// 00632d79  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00632d7d  5f                   pop edi
// 00632d7e  5e                   pop esi
// 00632d7f  64890d00000000       mov dword ptr fs:[0], ecx
// 00632d86  83c410               add esp, 0x10
// 00632d89  c3                   ret 

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
    char storage[0x14c];
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
