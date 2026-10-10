// from server: 81% by colin
struct CXTSplitterWndThemeOffice2003 {
    void Init();
    int pad0;
    int pad1;
    int pad2;
    int pad3;
    int pad4;
    int color14;
    int color18;
    int sub_668F70();
};


extern "C" int __stdcall sub_668A50();
extern "C" int __stdcall sub_668D70();
extern "C" void __stdcall sub_70EAF0();

void CXTSplitterWndThemeOffice2003::Init()
{
    sub_70EAF0();
    int v = sub_668F70();
    if (sub_668A50() == 0)
    {
        int t = sub_668D70();
        t -= 1;
        if (t == 0)
        {
            color14 = 0xeadfdf;
            color18 = 0xc3b0b1;
            return;
        }
        t -= 1;
        if (t == 0)
        {
            color14 = 0xbfe7e2;
            color18 = 0x8ac0ab;
            return;
        }
        t -= 1;
        if (t == 0)
        {
            color14 = 0xfce7d8;
            color18 = 0xf5be9e;
            return;
        }
    }
}
