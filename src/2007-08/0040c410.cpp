// from server: 31% by colin
// roc 2007-08 0040c410  unit: CBrowserView  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040c410

struct CBrowserView {
    unsigned char pad[0xf4];
    int field_f4;
    int field_f8;
    int field_fc;
    int field_100;
    int field_104;
    unsigned char pad2[0x2b0 - 0x108];
    int field_2b0;
    unsigned char field_2b4;
    unsigned char field_2b5;
    unsigned char pad3[0x2b8 - 0x2b6];
    int field_2b8;

    CBrowserView();
};

extern "C" void __stdcall sub_461c60();
extern "C" int __stdcall sub_40b550();
extern "C" void __stdcall sub_64ed00();
extern "C" void __stdcall sub_64dfd0();
extern "C" void __stdcall sub_42fa60(void*);
extern "C" void __stdcall sub_77ddac();

CBrowserView::CBrowserView()
{
    sub_461c60();
    field_f4 = 0;
    field_f8 = 0;
    field_fc = 0;
    field_100 = 0;
    field_104 = 0;
    field_2b0 = 0;
    field_2b4 = 0;
    field_2b5 = 0;
    sub_64ed00();
    sub_77ddac();
    sub_42fa60((void*)sub_64dfd0);
}
