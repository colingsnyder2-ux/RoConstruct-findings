// from server: 48% by colin
struct CAboutRobloxDialog {
    char pad[0x74];
    int field74;
    char pad2[0x18];
    int field90;
    char pad3[0x78];
    int field10c;
    char pad4[0x4];
    int field114;
    int method_6308c2(int, int, int);
    int method_62ff08(int);
    CAboutRobloxDialog(int, int, int);
};

extern "C" int __stdcall sub_77e698(int, int);

CAboutRobloxDialog::CAboutRobloxDialog(int a1, int a2, int a3)
{
    method_6308c2(a1, 0x72, a2);
    field74 = 0x790cbc;
    field114 = 0;
    *(int*)this = 0x790cec;
    sub_77e698((int)&field114, a3);
    field90 = 1;
    method_62ff08(field10c | 0x1844013);
}
