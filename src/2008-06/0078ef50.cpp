// from server: 33% by colin
struct CXTColorSelectorCtrl_PAUCOLOR_CELL_CList
{
    char pad0[0x54];
    int field54;
    char pad58[0x18];
    int field70;
    int field74;
    int field78;
    int field7c;
    int field80;
    char pad84[0x10];
    int field94;
    int field98;
    int field9c;
    int fielda0;
    int fielda4;
    int fielda8;
    int fieldac;
    int fieldb0;
    int fieldb4;
    char padb8[0x70];
    int field128;
    char pad12c[0x10];
    int field13c;
    char pad140[0x18];
    int field158;
    int field15c;
    int field160;

    CXTColorSelectorCtrl_PAUCOLOR_CELL_CList();
};

extern "C" void __stdcall sub_6a0e90();
extern "C" void __stdcall sub_78e6f0();
extern "C" void __stdcall sub_70de80();
extern "C" void __stdcall sub_7bc7b4();
extern "C" void __stdcall sub_71d050();
extern "C" void __stdcall sub_78eeb0(int);

CXTColorSelectorCtrl_PAUCOLOR_CELL_CList::CXTColorSelectorCtrl_PAUCOLOR_CELL_CList()
{
    sub_6a0e90();
    sub_78e6f0();
    sub_70de80();
    *(int*)this = 0x86a9dc;
    *(int*)((char*)this + 0x54) = 0x86a9cc;
    sub_7bc7b4();
    sub_71d050();
    sub_78eeb0(0xa);
    *(int*)((char*)this + 0xa8) = 0;
    *(int*)((char*)this + 0xac) = 0;
    *(int*)((char*)this + 0x7c) = 0x12;
    *(int*)((char*)this + 0xb0) = 0xff000000;
    *(int*)((char*)this + 0xb4) = 0xff000000;
    *(int*)((char*)this + 0x94) = 0;
    *(int*)((char*)this + 0x80) = 0x12;
    *(int*)((char*)this + 0x70) = -1;
    *(int*)((char*)this + 0x74) = -1;
    *(int*)((char*)this + 0x98) = 0;
    *(int*)((char*)this + 0x9c) = 0;
    *(int*)((char*)this + 0x158) = 0;
    *(int*)((char*)this + 0x6c) = 8;
    *(int*)((char*)this + 0xa4) = 0;
    *(int*)((char*)this + 0x78) = 0;
    *(int*)((char*)this + 0xa0) = 0;
    *(int*)((char*)this + 0x15c) = 0;
    *(int*)((char*)this + 0x160) = 0;
}
