// from server: 100% by king_originala
// roc 2008-06 005e6170  unit: RBX::Clump  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6170
//
// 005e6170  83ec08               sub esp, 8
// 005e6173  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005e6176  890424               mov dword ptr [esp], eax
// 005e6179  c744240401000000     mov dword ptr [esp + 4], 1
// 005e6181  85c0                 test eax, eax
// 005e6183  741a                 je 0x5e619f
// 005e6185  8b88a4000000         mov ecx, dword ptr [eax + 0xa4]
// 005e618b  e850ea0200           call 0x614be0
// 005e6190  8d0c24               lea ecx, [esp]
// 005e6193  e8a8140600           call 0x647640
// 005e6198  8b0424               mov eax, dword ptr [esp]
// 005e619b  85c0                 test eax, eax
// 005e619d  75e6                 jne 0x5e6185
// 005e619f  83c408               add esp, 8
// 005e61a2  c3                   ret 

struct Link {
    void update();
};

struct Node {
    char padding[0xA4];
    Link* link;
};

struct Iterator {
    Node* node;
    int mode;
    void advance();
};

struct Clump {
    char padding[0x1C];
    Node* root;
    void f();
};

void Clump::f() {
    Iterator it;
    it.node = root;
    it.mode = 1;
    while (it.node) {
        it.node->link->update();
        it.advance();
    }
}
