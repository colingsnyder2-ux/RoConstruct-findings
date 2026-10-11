// from server: 62% by colin
struct CXTPDockingPaneVisualStudio2005SecondTheme {
    char pad0[0x20];
    int field20;
    char pad24[0x4c];
    int field70;
    int field74;
    int field78;
    int field7c;
    char pad80[0x128];
    int field1a8;
    int field1ac;
    int field1b0;
    int field1b4;
    char pad1b8[0xe38c648];
    int field_e38e800;
    void Init();
};

extern "C" int __stdcall SetRect(int, int, int, int, int);

void CXTPDockingPaneVisualStudio2005SecondTheme::Init()
{
    int v = field_e38e800 * 0x6afffb;
    SetRect((int)&field1a8, 0, 0, 0, 0);
    field20 = 0;
    field7c = 9;
    field70 = 5;
}
