// from server: 78% by colin
struct CXTPDockingPaneManager {
    char pad[0x128];
    int field_128;
    void sub_66fa00(int);
    void sub_66e100(int);
    void sub_66ec00();
    void sub_6301e4();
    void func(int);
};

struct CMainFrame {
    char pad0[0xec];
    int field_ec;
    char pad1[0x104 - 0xf0];
    char field_104;
    char pad2[0x138 - 0x105];
    char field_138[0x284 - 0x138];
    char field_284[0x100];
    void sub_430ae0(int, int);
};

extern void __stdcall sub_6a3a10(int, int);
extern void __stdcall sub_705440(int, int);
extern void __stdcall sub_6e68f0(int, int);
extern void __stdcall sub_6a0db8(int, int, int);

void CMainFrame::sub_430ae0(int a, int b)
{
    sub_6a3a10(field_ec, a);
    int flag = 0;
    if (a == 0)
        flag = (field_104 == 0);
    sub_705440((int)field_284, flag);
    sub_6e68f0((int)field_138, a);
    if (field_ec != 0)
        sub_6a3a10(field_ec, a);
    sub_6a0db8((int)this, a, b);
}
