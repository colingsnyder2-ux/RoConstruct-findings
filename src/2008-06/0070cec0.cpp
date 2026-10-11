// from server: 39% by colin
// roc 2008-06 0070cec0  unit: CXTPToolTipContext::CLunaToolTip  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070cec0

struct CXTPColorManager;
struct CXTPCompatibleDC;
struct CXTPPaintManager;

extern "C" int __stdcall sub_6dfd40();
extern "C" int __stdcall sub_6dfb40();
extern "C" int __stdcall sub_6f9bd0(int, int, int, int, int);
extern "C" int __stdcall sub_6f9c00();
extern "C" int __stdcall sub_6a1358(int, int, int, int);
extern "C" int __stdcall sub_70a0b0(int, int, int);

struct CXTPToolTipContext {
    int f(int, int, int, int, int, int);
};

int CXTPToolTipContext::f(int a, int b, int c, int d, int e, int f)
{
    int v;
    int r = sub_6dfd40();
    int t = sub_6dfb40();
    switch (t - 1) {
    case 0:
        sub_6f9bd0(0, 0xc8f2ff, 0x97d4ff, (int)&v, a);
        sub_6f9c00();
        sub_6a1358((int)&v, 0x800000, 0x800000, 0);
        return 0;
    case 1:
        sub_6f9bd0(0, 0xc8f2ff, 0x97d4ff, (int)&v, a);
        sub_6f9c00();
        sub_6a1358((int)&v, 0x385d3f, 0x385d3f, 0);
        return 0;
    case 2:
        sub_6f9bd0(0, 0xc8f2ff, 0x97d4ff, (int)&v, a);
        sub_6f9c00();
        sub_6a1358((int)&v, 0x6f4b4b, 0x6f4b4b, 0);
        return 0;
    default:
        {
            int x = sub_70a0b0(0xffffff, 0, 0);
            sub_6f9bd0(x, (int)&v, a, 0, 0);
            sub_6f9c00();
            sub_6a1358((int)&v, 0, 0, 0);
        }
        return 0;
    }
}
