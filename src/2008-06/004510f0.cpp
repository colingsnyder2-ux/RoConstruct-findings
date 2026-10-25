// from server: 100% by tester
// roc 2008-06 004510f0  unit: CRobloxDoc  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004510f0
//
// 004510f0  6aff                 push -1
// 004510f2  68980f7d00           push 0x7d0f98
// 004510f7  64a100000000         mov eax, dword ptr fs:[0]
// 004510fd  50                   push eax
// 004510fe  64892500000000       mov dword ptr fs:[0], esp
// 00451105  51                   push ecx
// 00451106  56                   push esi
// 00451107  57                   push edi
// 00451108  8bf9                 mov edi, ecx
// 0045110a  897c2408             mov dword ptr [esp + 8], edi
// 0045110e  8b7718               mov esi, dword ptr [edi + 0x18]
// 00451111  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00451119  85f6                 test esi, esi
// 0045111b  742a                 je 0x451147
// 0045111d  8d4604               lea eax, [esi + 4]
// 00451120  83c9ff               or ecx, 0xffffffff
// 00451123  f00fc108             lock xadd dword ptr [eax], ecx
// 00451127  751e                 jne 0x451147
// 00451129  8b16                 mov edx, dword ptr [esi]
// 0045112b  8b4204               mov eax, dword ptr [edx + 4]
// 0045112e  8bce                 mov ecx, esi
// 00451130  ffd0                 call eax
// 00451132  8d4e08               lea ecx, [esi + 8]
// 00451135  83caff               or edx, 0xffffffff
// 00451138  f00fc111             lock xadd dword ptr [ecx], edx
// 0045113c  7509                 jne 0x451147
// 0045113e  8b06                 mov eax, dword ptr [esi]
// 00451140  8b5008               mov edx, dword ptr [eax + 8]
// 00451143  8bce                 mov ecx, esi
// 00451145  ffd2                 call edx
// 00451147  8bcf                 mov ecx, edi
// 00451149  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00451151  e86a211300           call 0x5832c0
// 00451156  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045115a  5f                   pop edi
// 0045115b  5e                   pop esi
// 0045115c  64890d00000000       mov dword ptr fs:[0], ecx
// 00451163  83c410               add esp, 0x10
// 00451166  c3                   ret 

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
    char storage[0x14];
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
