// from server: 62% by colin
struct CXTPRibbonBar {
    char pad_0x000[0x1e8];
    int field_0x1e8;
    int field_0x1ec;
    int field_0x1f0;
    int field_0x1f4;
    void Method(int a, int b, int c, int d, int e);
};

extern "C" int __stdcall sub_6A7A50();
extern "C" void __stdcall sub_717120(int, int, int, int, int);

void CXTPRibbonBar::Method(int a, int b, int c, int d, int e)
{
    field_0x1e8 = a;
    field_0x1ec = b;
    field_0x1f0 = c;
    field_0x1f4 = d;

    int result = sub_6A7A50();
    if (result != 0)
    {
        int local = a + 4;
        int local2 = b + 3;
        int local3 = 6;
        int local4 = 3;
        sub_717120(*(int*)(result + 0x84), c - a, 0x40, (int)&local, (int)&local2);
    }
}
