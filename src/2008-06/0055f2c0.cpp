// from server: 29% by tester
// roc 2008-06 0055f2c0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055f2c0

extern "C" void __stdcall sub_6A067A(void* p);
extern "C" void __stdcall sub_422C60(void* p);
extern "C" void __stdcall sub_802468(void* p);

struct Node {
    Node* next;      // +0
    char pad[4];     // +4
    void* field8;    // +8
    char pad2[0x31]; // +0xc ... +0x3c
    char flag3d;     // +0x3d
};

struct S {
    void f(Node* n);
};

void S::f(Node* n) {
    Node* cur = n;
    if (cur->flag3d == 0) {
        do {
            f((Node*)cur->field8);
            cur = cur->next;
            char* base = (char*)n + 0xc;
            sub_422C60(base + 0x20);
            sub_802468(base);
            sub_6A067A(n);
        } while (cur->flag3d == 0);
    }
}
