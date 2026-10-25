// from server: 100% by tester
// roc 2008-06 005e75b0  unit: RBX::Ball  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e75b0
//
// 005e75b0  8bc1                 mov eax, ecx
// 005e75b2  8a4c2404             mov cl, byte ptr [esp + 4]
// 005e75b6  3a88ac000000         cmp cl, byte ptr [eax + 0xac]
// 005e75bc  7416                 je 0x5e75d4
// 005e75be  8888ac000000         mov byte ptr [eax + 0xac], cl
// 005e75c4  8b4858               mov ecx, dword ptr [eax + 0x58]
// 005e75c7  85c9                 test ecx, ecx
// 005e75c9  7409                 je 0x5e75d4
// 005e75cb  89442404             mov dword ptr [esp + 4], eax
// 005e75cf  e98c1e0000           jmp 0x5e9460
// 005e75d4  c20400               ret 4

struct World { void wake(struct Prim*); };
struct Prim {
    char pad[0x58];
    World* world;
    char pad2[0xac - 0x5c];
    bool canSleep;
    void setCanSleep(bool b);
};
void Prim::setCanSleep(bool b) {
    if (b != canSleep) {
        canSleep = b;
        if (world) world->wake(this);
    }
}
