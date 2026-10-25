// from server: 100% by king_originala
// roc 2008-06 005a0df0  unit: RBX::RootInstance  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0df0
//
// 005a0df0  56                   push esi
// 005a0df1  8bf1                 mov esi, ecx
// 005a0df3  8b8688020000         mov eax, dword ptr [esi + 0x288]
// 005a0df9  8b5004               mov edx, dword ptr [eax + 4]
// 005a0dfc  8d8e88020000         lea ecx, [esi + 0x288]
// 005a0e02  c686d003000000       mov byte ptr [esi + 0x3d0], 0
// 005a0e09  ffd2                 call edx
// 005a0e0b  8bc8                 mov ecx, eax
// 005a0e0d  e83eb60200           call 0x5cc450
// 005a0e12  8b86e4020000         mov eax, dword ptr [esi + 0x2e4]
// 005a0e18  c780a800000000000000 mov dword ptr [eax + 0xa8], 0
// 005a0e22  5e                   pop esi
// 005a0e23  c3                   ret 

struct Worker {
    void clear();
};

struct Accessor {
    virtual void slot0();
    virtual Worker* get();
};

struct State {
    char padding[0xA8];
    int value;
};

struct RootInstance {
    char padding0[0x288];
    Accessor accessor;
    char padding1[0x58];
    State* state;
    char padding2[0xE8];
    bool flag;

    void reset();
};

void RootInstance::reset() {
    flag = false;
    accessor.get()->clear();
    state->value = 0;
}
