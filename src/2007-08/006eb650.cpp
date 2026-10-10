// from server: 16% by colin
struct CXTPDockingPaneNativeXPTheme
{
    char pad0[0x20];
    int field20;
    char pad24[0x50];
    int field74;
    char pad78[0x24];
    int field9c;
    int fielda0;
    char pada4[0x104];
    int field1a8;
    char pad1ac[0x14];
    int field1b8;
    char pad1bc[0x24];
    int field1e0;
    int field1e4;
    int field1e8;
    int field1ec;
    int field1f0;
    int field1f4;
    int field1f8;
    int field1fc;
    int field200;
    int field204;
    int field208;
    int field20c;
    int field210;
    int field214;
    int field218;
    int field21c;
    int field220;

    CXTPDockingPaneNativeXPTheme();
};

extern "C" void __stdcall SetRect(int*, int, int, int, int);
extern void func_006ea820();
extern void func_0062fef6();
extern void func_006ae110();
extern void func_006ff8d0();
extern void func_006ffa80();
extern void func_00702710();

CXTPDockingPaneNativeXPTheme::CXTPDockingPaneNativeXPTheme()
{
    func_006ea820();
    this->field9c = 0;
    this->fielda0 = 0;
    this->field20 = 0;
    this->field74 = 4;
    this->field1b8 = 0;
    this->field1e0 = 1;
    this->field1a8 = 0;
    SetRect(&this->field1a8, 0, 0, 0, 0);
}
