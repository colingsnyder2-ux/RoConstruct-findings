// from server: 29% by colin
struct CLunaToolTip {
    char pad[0x6c];
    int field6c;
    void func(int, int, int, int, int, int);
};

extern "C" int __stdcall sub_668f70();
extern "C" int __stdcall sub_668d70(int);
extern "C" int __stdcall sub_6940d0(int, int);
extern "C" int __stdcall sub_682240(int, int, int);
extern "C" int __stdcall sub_682270(int);
extern "C" int __stdcall sub_6308aa(int, int, int, int);

void CLunaToolTip::func(int a, int b, int c, int d, int e, int f) {
    int v = sub_668f70();
    int r = sub_668d70(v);
    r -= 1;
    if (r == 0) {
        int x = sub_682240(d, 0xc8f2ff, 0x97d4ff);
        sub_682270(x);
        sub_6308aa(d, 0x800000, 0x800000, 0);
    } else {
        r -= 1;
        if (r == 0) {
            int x = sub_682240(d, 0xc8f2ff, 0x97d4ff);
            sub_682270(x);
            sub_6308aa(d, 0x385d3f, 0x385d3f, 0);
        } else {
            r -= 1;
            if (r == 0) {
                int x = sub_682240(d, 0xc8f2ff, 0x97d4ff);
                sub_682270(x);
                sub_6308aa(d, 0x6f4b4b, 0x6f4b4b, 0);
            } else {
                int y = sub_6940d0(field6c, 0xffffff);
                int x = sub_682240(d, y, 0);
                sub_682270(x);
                sub_6308aa(d, 0, 0, 0);
            }
        }
    }
}
