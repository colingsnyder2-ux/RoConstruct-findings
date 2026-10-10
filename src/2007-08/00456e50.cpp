// from server: 46% by colin
struct CRobloxView {
    char pad[0x64];
    int field64;
    char pad2[0x10];
    int field78;
    int field7c;
    int field80;
    char pad3[0x4];
    int field88;
    char pad4[0xa4];
    int field130;
    int field134;
    int field138;
    int field13c;
    int field140;
    char pad5[0x54];
    int field198;
    int field19c;
    int field1a0;
    int field1a4;
    int field1a8;
    int field1ac;

    CRobloxView();
};

extern "C" void __stdcall sub_456970();
extern "C" void __stdcall sub_564be0(int);
extern "C" void __stdcall sub_459790(int);
extern "C" void __stdcall sub_433ba0();
extern "C" void __stdcall sub_630478(int, int, int);
extern "C" void __stdcall sub_630472(int);
extern "C" void* __stdcall LoadMenuA(int, int);
extern "C" void __stdcall sub_456e50_helper();

CRobloxView::CRobloxView()
{
    sub_456970();
    sub_564be0(0);
    field78 = 0x792ab0;
    field7c = 0x792abc;
    field80 = 0x792ac8;
    field88 = 0;
    sub_459790(0);
    field130 = 0;
    field134 = 0;
    field138 = 0x788318;
    field13c = 0;
    sub_433ba0();
    field198 = 0;
    field19c = 0;
    field1a0 = 0;
    field1a4 = 0;
    field1a8 = 0;
    field1ac = 0;
    void* h = LoadMenuA(0, 0x67);
    sub_630472((int)h);
}
