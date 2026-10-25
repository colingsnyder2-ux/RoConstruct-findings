// from server: 100% by king_originala
// roc 2008-06 004b58f0  unit: RBX::Network::VClient::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b58f0
//
// 004b58f0  6aff                 push -1
// 004b58f2  6846997c00           push 0x7c9946
// 004b58f7  64a100000000         mov eax, dword ptr fs:[0]
// 004b58fd  50                   push eax
// 004b58fe  64892500000000       mov dword ptr fs:[0], esp
// 004b5905  51                   push ecx
// 004b5906  56                   push esi
// 004b5907  8bf1                 mov esi, ecx
// 004b5909  89742404             mov dword ptr [esp + 4], esi
// 004b590d  8d4e0c               lea ecx, [esi + 0xc]
// 004b5910  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004b5918  e8a3eaffff           call 0x4b43c0
// 004b591d  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 004b5921  740c                 je 0x4b592f
// 004b5923  8b4620               mov eax, dword ptr [esi + 0x20]
// 004b5926  50                   push eax
// 004b5927  e84ead1e00           call 0x6a067a
// 004b592c  83c404               add esp, 4
// 004b592f  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b5932  51                   push ecx
// 004b5933  e842ad1e00           call 0x6a067a
// 004b5938  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b593c  83c404               add esp, 4
// 004b593f  5e                   pop esi
// 004b5940  64890d00000000       mov dword ptr fs:[0], ecx
// 004b5947  83c410               add esp, 0x10
// 004b594a  c3                   ret 

extern "C" void __cdecl release(void *) throw();

struct Allocation {
    unsigned int reserved;
    void *pointer;
    ~Allocation();
};

struct OptionalAllocation {
    unsigned int owned;
    void *pointer;
    ~OptionalAllocation();
};

struct State {
    unsigned char storage[16];
    void clear();
};

struct S {
    Allocation allocation;
    unsigned int reserved;
    State state;
    OptionalAllocation optional;
    ~S();
};

inline Allocation::~Allocation() {
    release(pointer);
}

inline OptionalAllocation::~OptionalAllocation() {
    if (owned)
        release(pointer);
}

S::~S() {
    state.clear();
}
