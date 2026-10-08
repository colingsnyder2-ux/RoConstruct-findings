// from server: 89% by colin
// roc 2007-08 00594200  unit: RBX::VFlatTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594200
//
// 00594200  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00594203  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00594209  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 0059420f  85c0                 test eax, eax
// 00594211  7416                 je 0x594229
// 00594213  50                   push eax
// 00594214  e879d10900           call 0x631392
// 00594219  83c404               add esp, 4
// 0059421c  50                   push eax
// 0059421d  b9d44c8a00           mov ecx, 0x8a4cd4
// 00594222  ff1508e77700         call dword ptr [0x77e708]
// 00594228  c3                   ret 
// 00594229  32c0                 xor al, al
// 0059422b  c3                   ret 

struct Verb;
struct VerbContainer;

struct TToolVerb {
    char pad[0xc];
    VerbContainer* container;
    bool isEnabled() const;
};

struct VerbContainer {
    char pad[0x188];
    void* something;
};

struct SomeClass {
    char pad[0x318];
    void* ptr;
};

extern "C" int __cdecl sub_631392(void*);
extern "C" int (__stdcall *off_77E708)(void*, const void*);

bool TToolVerb::isEnabled() const
{
    VerbContainer* c = container;
    SomeClass* s = *(SomeClass**)((char*)c + 0x188);
    void* p = *(void**)((char*)s + 0x318);
    if (p) {
        int r = sub_631392(p);
        return off_77E708((void*)0x8a4cd4, (const void*)r) != 0;
    }
    return false;
}
