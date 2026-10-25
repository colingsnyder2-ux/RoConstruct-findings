// from server: 100% by tester
// roc 2008-06 006565a0  unit: RBX::HealthHud  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006565a0
//
// 006565a0  6aff                 push -1
// 006565a2  6868817d00           push 0x7d8168
// 006565a7  64a100000000         mov eax, dword ptr fs:[0]
// 006565ad  50                   push eax
// 006565ae  64892500000000       mov dword ptr fs:[0], esp
// 006565b5  51                   push ecx
// 006565b6  56                   push esi
// 006565b7  57                   push edi
// 006565b8  8bf9                 mov edi, ecx
// 006565ba  897c2408             mov dword ptr [esp + 8], edi
// 006565be  8bb748010000         mov esi, dword ptr [edi + 0x148]
// 006565c4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006565cc  85f6                 test esi, esi
// 006565ce  742a                 je 0x6565fa
// 006565d0  8d4604               lea eax, [esi + 4]
// 006565d3  83c9ff               or ecx, 0xffffffff
// 006565d6  f00fc108             lock xadd dword ptr [eax], ecx
// 006565da  751e                 jne 0x6565fa
// 006565dc  8b16                 mov edx, dword ptr [esi]
// 006565de  8b4204               mov eax, dword ptr [edx + 4]
// 006565e1  8bce                 mov ecx, esi
// 006565e3  ffd0                 call eax
// 006565e5  8d4e08               lea ecx, [esi + 8]
// 006565e8  83caff               or edx, 0xffffffff
// 006565eb  f00fc111             lock xadd dword ptr [ecx], edx
// 006565ef  7509                 jne 0x6565fa
// 006565f1  8b06                 mov eax, dword ptr [esi]
// 006565f3  8b5008               mov edx, dword ptr [eax + 8]
// 006565f6  8bce                 mov ecx, esi
// 006565f8  ffd2                 call edx
// 006565fa  8bcf                 mov ecx, edi
// 006565fc  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00656604  e837afdbff           call 0x411540
// 00656609  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065660d  5f                   pop edi
// 0065660e  5e                   pop esi
// 0065660f  64890d00000000       mov dword ptr fs:[0], ecx
// 00656616  83c410               add esp, 0x10
// 00656619  c3                   ret 

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
    char storage[0x144];
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
