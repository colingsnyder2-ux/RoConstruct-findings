// from server: 100% by tester
// roc 2008-06 005e1d60  unit: RBX::Lighting  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e1d60
//
// 005e1d60  6aff                 push -1
// 005e1d62  6868647d00           push 0x7d6468
// 005e1d67  64a100000000         mov eax, dword ptr fs:[0]
// 005e1d6d  50                   push eax
// 005e1d6e  64892500000000       mov dword ptr fs:[0], esp
// 005e1d75  51                   push ecx
// 005e1d76  56                   push esi
// 005e1d77  57                   push edi
// 005e1d78  8bf9                 mov edi, ecx
// 005e1d7a  897c2408             mov dword ptr [esp + 8], edi
// 005e1d7e  8bb7d8020000         mov esi, dword ptr [edi + 0x2d8]
// 005e1d84  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005e1d8c  85f6                 test esi, esi
// 005e1d8e  742a                 je 0x5e1dba
// 005e1d90  8d4604               lea eax, [esi + 4]
// 005e1d93  83c9ff               or ecx, 0xffffffff
// 005e1d96  f00fc108             lock xadd dword ptr [eax], ecx
// 005e1d9a  751e                 jne 0x5e1dba
// 005e1d9c  8b16                 mov edx, dword ptr [esi]
// 005e1d9e  8b4204               mov eax, dword ptr [edx + 4]
// 005e1da1  8bce                 mov ecx, esi
// 005e1da3  ffd0                 call eax
// 005e1da5  8d4e08               lea ecx, [esi + 8]
// 005e1da8  83caff               or edx, 0xffffffff
// 005e1dab  f00fc111             lock xadd dword ptr [ecx], edx
// 005e1daf  7509                 jne 0x5e1dba
// 005e1db1  8b06                 mov eax, dword ptr [esi]
// 005e1db3  8b5008               mov edx, dword ptr [eax + 8]
// 005e1db6  8bce                 mov ecx, esi
// 005e1db8  ffd2                 call edx
// 005e1dba  8bcf                 mov ecx, edi
// 005e1dbc  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e1dc4  e897d7ffff           call 0x5df560
// 005e1dc9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e1dcd  5f                   pop edi
// 005e1dce  5e                   pop esi
// 005e1dcf  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1dd6  83c410               add esp, 0x10
// 005e1dd9  c3                   ret 

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
    char storage[0x2d4];
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
