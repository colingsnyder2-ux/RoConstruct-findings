// from server: 100% by tester
// roc 2008-06 005e6120  unit: RBX::Clump  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6120
//
// 005e6120  83ec08               sub esp, 8
// 005e6123  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005e6126  890424               mov dword ptr [esp], eax
// 005e6129  c744240401000000     mov dword ptr [esp + 4], 1
// 005e6131  85c0                 test eax, eax
// 005e6133  7418                 je 0x5e614d
// 005e6135  80b8ac00000000       cmp byte ptr [eax + 0xac], 0
// 005e613c  7415                 je 0x5e6153
// 005e613e  8d0c24               lea ecx, [esp]
// 005e6141  e8fa140600           call 0x647640
// 005e6146  8b0424               mov eax, dword ptr [esp]
// 005e6149  85c0                 test eax, eax
// 005e614b  75e8                 jne 0x5e6135
// 005e614d  b001                 mov al, 1
// 005e614f  83c408               add esp, 8
// 005e6152  c3                   ret 
// 005e6153  32c0                 xor al, al
// 005e6155  83c408               add esp, 8
// 005e6158  c3                   ret 

struct Prim { char pad[0xac]; bool canSleep; };
struct It {
    Prim* p; int dir;
    void next();
};
struct Assembly {
    char pad[0x1c];
    Prim* head;
    bool computeCanSleep() const;
};
bool Assembly::computeCanSleep() const {
    It it;
    it.p = head;
    it.dir = 1;
    while (it.p) {
        if (!it.p->canSleep) return false;
        it.next();
    }
    return true;
}
