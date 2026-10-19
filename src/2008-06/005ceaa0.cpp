// from server: 88% by colin
// from server: 84% by king_originala
// roc 2008-06 005ceaa0  unit: RBX::Camera  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ceaa0
//
// 005ceaa0  6aff                 push -1
// 005ceaa2  6804557d00           push 0x7d5504
// 005ceaa7  64a100000000         mov eax, dword ptr fs:[0]
// 005ceaad  50                   push eax
// 005ceaae  64892500000000       mov dword ptr fs:[0], esp
// 005ceab5  83ec08               sub esp, 8
// 005ceab8  56                   push esi
// 005ceab9  8bf1                 mov esi, ecx
// 005ceabb  57                   push edi
// 005ceabc  8d7e04               lea edi, [esi + 4]
// 005ceabf  8bcf                 mov ecx, edi
// 005ceac1  897c240c             mov dword ptr [esp + 0xc], edi
// 005ceac5  ff1560248000         call dword ptr [0x802460]
// 005ceacb  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005cead3  e89857f8ff           call 0x554270
// 005cead8  89471c               mov dword ptr [edi + 0x1c], eax
// 005ceadb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ceadf  c7462400000000       mov dword ptr [esi + 0x24], 0
// 005ceae6  5f                   pop edi
// 005ceae7  8bc6                 mov eax, esi
// 005ceae9  5e                   pop esi
// 005ceaea  64890d00000000       mov dword ptr fs:[0], ecx
// 005ceaf1  83c414               add esp, 0x14
// 005ceaf4  c3                   ret 

#include <intrin.h>

struct String;
extern void (__thiscall *stringConstruct)(String *);

struct String {
    char storage[28];
    String();
    ~String();
};

inline String::String()
{
    stringConstruct(this);
}

struct Name;
extern const Name &__cdecl getLocalScope();

struct Scope {
    String text;
    const Name *name;
    Scope();
};

inline Scope::Scope()
{
    name = &getLocalScope();
    _ReadWriteBarrier();
}

struct S {
    unsigned char reserved[4];
    Scope scope;
    unsigned int value;
    S();
};

S::S()
{
    value = 0;
}
