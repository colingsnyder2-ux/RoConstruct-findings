// from server: 48% by colin
// roc 2007-08 004234b0  unit: CSelectionTreeCtrl  size: 301 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004234b0

struct CSelectionTreeCtrl {
    char pad[0xb8];
    int field_b8;
    int field_bc;
    int field_c0;
    int field_c4;
    char field_c8;
    char field_c9;
    char field_ca;
    char pad_cb;
    int field_cc;
    int field_d0;
    int field_d4;
    int field_d8;
    int field_dc;
    int field_e0;
    int field_e4;
    int field_e8;
    int field_ec;

    CSelectionTreeCtrl();
};

struct Inner1 {
    char pad[4];
    int field_4;
    int field_8;
    void init();
};

struct Inner2 {
    char pad[4];
    int field_4;
    int field_8;
    void init();
};

extern "C" void __stdcall sub_421e20();
extern "C" void __stdcall sub_4073c0();
extern "C" void* __stdcall sub_5835b0();
extern "C" void* __stdcall sub_5a93b0();
extern "C" void __stdcall sub_630472();
extern "C" void* __stdcall sub_630478();
extern "C" void* __stdcall LoadMenuA(int, int, int);

CSelectionTreeCtrl::CSelectionTreeCtrl()
{
    sub_421e20();

    field_b8 = 0;
    sub_4073c0();
    field_bc = 0x788338;
    field_c0 = 0x788318;
    field_c4 = 0;
    field_c8 = 0;
    field_c9 = 0;
    field_ca = 0;

    Inner1* p1 = (Inner1*)((char*)this + 0xcc);
    p1->field_4 = (int)sub_5835b0();
    *(char*)(p1->field_4 + 0x15) = 1;
    *(int*)(p1->field_4 + 4) = p1->field_4;
    *(int*)(p1->field_4) = p1->field_4;
    *(int*)(p1->field_4 + 8) = p1->field_4;
    p1->field_8 = 0;

    Inner2* p2 = (Inner2*)((char*)this + 0xd8);
    p2->field_4 = (int)sub_5a93b0();
    *(char*)(p2->field_4 + 0x11) = 1;
    *(int*)(p2->field_4 + 4) = p2->field_4;
    *(int*)(p2->field_4) = p2->field_4;
    *(int*)(p2->field_4 + 8) = p2->field_4;
    p2->field_8 = 0;

    field_e4 = 0;
    field_e8 = 0;
    field_ec = 0;

    sub_630472();
    LoadMenuA(0x67, 4, 0x67);
}
