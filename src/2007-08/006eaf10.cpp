// from server: 41% by colin
struct CXTPDockingPaneExplorerTheme {
    void Construct();
    int field0;
    char pad[0x6c];
    int field70;
    char pad2[8];
    int field7c;
    char pad3[0x1c];
    int field9c;
    int fielda0;
};

extern "C" void __stdcall sub_6EA820();
extern "C" void __stdcall sub_702710(int);
extern "C" void __stdcall sub_6FFA60(int);

void CXTPDockingPaneExplorerTheme::Construct()
{
    sub_6EA820();
    fielda0 = 0;
    *(int*)this = 0x7da92c;
    sub_702710(6);
    sub_702710(8);
    sub_6FFA60(0);
    field7c = 2;
    field70 = 2;
}
