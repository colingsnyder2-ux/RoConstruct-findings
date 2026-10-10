// from server: 93% by colin
struct CMainFrame {
    char pad[0xd8];
    int field_0xd8;
    int sub_0042f140(int);
};

extern "C" int __fastcall sub_0063052C(int);
extern "C" void __fastcall sub_00632A60(int, CMainFrame*);
extern "C" void __fastcall sub_00631CA0(int);

int CMainFrame::sub_0042f140(int a)
{
    int v = sub_0063052C(a);
    field_0xd8 = v;
    if (v == 0)
        return 0;
    sub_00632A60(v, this);
    sub_00631CA0(field_0xd8);
    return 1;
}
