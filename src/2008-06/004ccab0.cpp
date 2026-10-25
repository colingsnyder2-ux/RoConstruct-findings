// from server: 100% by king_originala
// roc 2008-06 004ccab0  unit: RBX::VInstance::?$NonFactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ccab0
//
// 004ccab0  6aff                 push -1
// 004ccab2  6846997c00           push 0x7c9946
// 004ccab7  64a100000000         mov eax, dword ptr fs:[0]
// 004ccabd  50                   push eax
// 004ccabe  64892500000000       mov dword ptr fs:[0], esp
// 004ccac5  51                   push ecx
// 004ccac6  56                   push esi
// 004ccac7  8bf1                 mov esi, ecx
// 004ccac9  89742404             mov dword ptr [esp + 4], esi
// 004ccacd  8d4e0c               lea ecx, [esi + 0xc]
// 004ccad0  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004ccad8  e883f9ffff           call 0x4cc460
// 004ccadd  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 004ccae1  740c                 je 0x4ccaef
// 004ccae3  8b4620               mov eax, dword ptr [esi + 0x20]
// 004ccae6  50                   push eax
// 004ccae7  e88e3b1d00           call 0x6a067a
// 004ccaec  83c404               add esp, 4
// 004ccaef  8b4e04               mov ecx, dword ptr [esi + 4]
// 004ccaf2  51                   push ecx
// 004ccaf3  e8823b1d00           call 0x6a067a
// 004ccaf8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ccafc  83c404               add esp, 4
// 004ccaff  5e                   pop esi
// 004ccb00  64890d00000000       mov dword ptr fs:[0], ecx
// 004ccb07  83c410               add esp, 0x10
// 004ccb0a  c3                   ret 

extern "C" void __cdecl release(void *);

struct Allocation {
    unsigned int reserved0;
    void *pointer;
    unsigned int reserved1;

    ~Allocation() { release(pointer); }
};

struct ConditionalAllocation {
    unsigned int owned;
    void *pointer;

    ~ConditionalAllocation() {
        if (owned)
            release(pointer);
    }
};

struct Helper {
    unsigned char storage[16];
    void cleanup();
};

struct S {
    Allocation allocation;
    Helper helper;
    ConditionalAllocation conditional;

    ~S();
};

S::~S() {
    helper.cleanup();
}
