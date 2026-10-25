// from server: 100% by atomic.potato
// roc 2010-06 006d9b50  unit: RBX::VSurfaceSelection::?$FactoryProduct  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d9b50
//
// 006d9b50  c7017c67a400         mov dword ptr [ecx], 0xa4677c
// 006d9b56  c741047467a400       mov dword ptr [ecx + 4], 0xa46774
// 006d9b5d  c741186867a400       mov dword ptr [ecx + 0x18], 0xa46768
// 006d9b64  c7411c5c67a400       mov dword ptr [ecx + 0x1c], 0xa4675c
// 006d9b6b  c781940000004c67a400 mov dword ptr [ecx + 0x94], 0xa4674c
// 006d9b75  c781980000003467a400 mov dword ptr [ecx + 0x98], 0xa46734
// 006d9b7f  e91ce0feff           jmp 0x6c7ba0






struct S {
    int f0;
    int f4;
    int pad0[4];
    int f18;
    int f1c;
    int pad1[29];
    int f94;
    int f98;
    void init();
};

void __fastcall S_tail(S*);

void S::init() {
    f0 = 0xa4677c;
    f4 = 0xa46774;
    f18 = 0xa46768;
    f1c = 0xa4675c;
    f94 = 0xa4674c;
    f98 = 0xa46734;
    S_tail(this);
}
