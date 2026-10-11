// from server: 37% by colin
// roc 2008-06 005ebae0  unit: RBX::Sky  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ebae0

struct Sky {
    char pad[0x130];
    char field130[0x20];
    char field150[0x20];
    char field170[0x20];
    char field190[0x20];
    char field1b0[0x20];
    char field1d0[0x20];
    void sub_5eb020();
    void destroy();
};

extern "C" void __stdcall sub_802468(void*);

void Sky::destroy() {
    sub_802468(field1d0);
    sub_802468(field1b0);
    sub_802468(field190);
    sub_802468(field170);
    sub_802468(field150);
    sub_802468(field130);
    sub_5eb020();
}
