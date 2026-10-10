// from server: 33% by colin
struct Sub1 {
    void ctor();
};

struct Sub2 {
    void ctor();
};

struct Sub3 {
    void ctor();
};

struct Sub4 {
    void ctor(int);
};

struct Sub5 {
    void ctor();
};

struct Sub6 {
    void ctor();
};

struct CXTColorSelectorCtrl_PAUCOLOR_CELL_CList {
    char pad0[0x54];
    Sub1 sub1;
    char pad58[0x6c - 0x58];
    int field6c;
    int field70;
    int field74;
    int field78;
    int field7c;
    int field80;
    int field84;
    int field88;
    char pad8c[0x9c - 0x8c];
    int field9c;
    int fielda0;
    int fielda4;
    int fielda8;
    int fieldac;
    int fieldb0;
    int fieldb4;
    int fieldb8;
    int fieldbc;
    Sub2 sub2;
    char padc4[0x130 - 0xc4];
    Sub3 sub3;
    char pad134[0x144 - 0x134];
    Sub4 sub4;
    char pad148[0x160 - 0x148];
    int field160;

    CXTColorSelectorCtrl_PAUCOLOR_CELL_CList();
};

extern "C" void __stdcall sub_6305da();
extern "C" void __stdcall sub_710fa0();
extern "C" void __stdcall sub_692160();
extern "C" void __stdcall sub_738b80();
extern "C" void __stdcall sub_6a3980();
extern "C" void __stdcall sub_711600(int);

CXTColorSelectorCtrl_PAUCOLOR_CELL_CList::CXTColorSelectorCtrl_PAUCOLOR_CELL_CList()
{
    sub_6305da();
    sub_710fa0();
    sub_692160();
    sub_738b80();
    sub_6a3980();
    sub_711600(10);
    fieldb0 = 0;
    fieldb4 = 0;
    field84 = 0x12;
    fieldb8 = 0xff000000;
    fieldbc = 0xff000000;
    field9c = 0;
    field88 = 0x12;
    field78 = -1;
    field7c = -1;
    fielda0 = 0;
    fielda4 = 0;
    field160 = 0;
    field70 = 8;
    fieldac = 0;
    field80 = 0;
    fielda8 = 0;
    field6c = 0;
    field74 = 0;
}
