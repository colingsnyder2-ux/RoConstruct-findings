// from server: 100% by tester
// roc 2008-06 004b6690  unit: RBX::Network::Replicator::ReplicatorStatsItem  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b6690
//
// 004b6690  6aff                 push -1
// 004b6692  68982f7c00           push 0x7c2f98
// 004b6697  64a100000000         mov eax, dword ptr fs:[0]
// 004b669d  50                   push eax
// 004b669e  64892500000000       mov dword ptr fs:[0], esp
// 004b66a5  51                   push ecx
// 004b66a6  56                   push esi
// 004b66a7  57                   push edi
// 004b66a8  8bf9                 mov edi, ecx
// 004b66aa  897c2408             mov dword ptr [esp + 8], edi
// 004b66ae  8bb76c010000         mov esi, dword ptr [edi + 0x16c]
// 004b66b4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004b66bc  85f6                 test esi, esi
// 004b66be  742a                 je 0x4b66ea
// 004b66c0  8d4604               lea eax, [esi + 4]
// 004b66c3  83c9ff               or ecx, 0xffffffff
// 004b66c6  f00fc108             lock xadd dword ptr [eax], ecx
// 004b66ca  751e                 jne 0x4b66ea
// 004b66cc  8b16                 mov edx, dword ptr [esi]
// 004b66ce  8b4204               mov eax, dword ptr [edx + 4]
// 004b66d1  8bce                 mov ecx, esi
// 004b66d3  ffd0                 call eax
// 004b66d5  8d4e08               lea ecx, [esi + 8]
// 004b66d8  83caff               or edx, 0xffffffff
// 004b66db  f00fc111             lock xadd dword ptr [ecx], edx
// 004b66df  7509                 jne 0x4b66ea
// 004b66e1  8b06                 mov eax, dword ptr [esi]
// 004b66e3  8b5008               mov edx, dword ptr [eax + 8]
// 004b66e6  8bce                 mov ecx, esi
// 004b66e8  ffd2                 call edx
// 004b66ea  8bcf                 mov ecx, edi
// 004b66ec  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004b66f4  e81753faff           call 0x45ba10
// 004b66f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b66fd  5f                   pop edi
// 004b66fe  5e                   pop esi
// 004b66ff  64890d00000000       mov dword ptr fs:[0], ecx
// 004b6706  83c410               add esp, 0x10
// 004b6709  c3                   ret 

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
    char storage[0x168];
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
