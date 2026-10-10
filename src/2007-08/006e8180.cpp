// from server: 38% by colin
struct CXTPDockingPaneOffice2003Theme {
    char pad0[0x3c];
    int field3c;
    char pad40[0x8];
    int field48;
    char pad4c[0x4];
    char field50[0x18c];
    int field1dc;
    char pad1e0[0x4];
    char field1e4[0x20];
    char field204[0x24];
    int field228;
    char pad22c[0x8];
    int field234;

    void sub_6e6f60();
    int sub_6e5470();
    int sub_6e54b0(int);
    void sub_6e54d0(int, int*, int);
};

extern "C" {
    int __cdecl sub_668f70();
    int __cdecl sub_668930(int);
    void __cdecl sub_6684f0();
    void __cdecl sub_668510();
    void __cdecl sub_6686d0();
    void __cdecl sub_668ec0();
}

extern float g_797e9c;
extern float g_787054;
extern float g_79f758;

void CXTPDockingPaneOffice2003Theme::sub_6e6f60() {
    sub_668f70();
    float f1 = g_797e9c;
    int v1 = sub_6e54b0(0xf);
    int v2 = sub_6e54b0(5);
    int v3 = sub_6e54b0(0xcd);
    sub_6686d0();
    sub_6684f0();
    int v4 = sub_6e54b0(0x12);
    field228 = v4;
    int v5 = sub_6e54b0(0x24);
    sub_668ec0();
    int v6 = sub_6e54b0(0x12);
    field234 = v6;
    field1dc = 0;
    int r = sub_668930(0);
    if (r != 0) {
        int a = sub_6e54b0(0xf);
        sub_668ec0();
        int b = sub_6e54b0(0xd);
        sub_668ec0();
        int c = sub_6e54b0(0xe);
        field234 = c;
    }
    int mode = sub_6e5470();
    if (mode == 1) {
        float f = g_787054;
        sub_6684f0();
        field48 = 0xeadfdf;
        int x = sub_6e54b0(0x26);
        field3c = x;
        int arr[16];
        arr[0] = 0x26; arr[1] = 0x27; arr[2] = 0x28; arr[3] = 0x29;
        arr[4] = 0x2b; arr[5] = 0x1f; arr[6] = 0x20; arr[7] = 0x25;
        arr[8] = 0x32; arr[9] = 0x21; arr[10] = 0x24; arr[11] = 0x1e;
        arr[12] = 0x2f;
        int colors[16];
        colors[0] = 0x755454; colors[1] = 0x8f6d6e; colors[2] = 0xbea7a8;
        colors[3] = 0xfffafd; colors[4] = 0x947c7c; colors[5] = 0xc2eeff;
        colors[6] = 0x6f4b4b; colors[7] = 0x6f4b4b; colors[8] = 0x6f4b4b;
        colors[9] = 0x3e80fe; colors[10] = 0x6fc0ff; colors[11] = 0xe5d7d7;
        colors[12] = 0;
        sub_6e54d0(0xd, arr, 0);
        field1dc = 1;
    } else if (mode == 2) {
        float f = g_79f758;
        sub_6684f0();
        field48 = 0xbfe7e2;
        int x = sub_6e54b0(0x26);
        field3c = x;
        int arr[16];
        arr[0] = 0x26; arr[1] = 0x27; arr[2] = 0x28; arr[3] = 0x29;
        arr[4] = 0x2b; arr[5] = 0x1f; arr[6] = 0x20; arr[7] = 0x25;
        arr[8] = 0x32; arr[9] = 0x21; arr[10] = 0x24; arr[11] = 0x1e;
        arr[12] = 0x2f;
        int colors[16];
        colors[0] = 0x335e51; colors[1] = 0x588060; colors[2] = 0x7aae9f;
        colors[3] = 0xeef4f4; colors[4] = 0x5e8d75; colors[5] = 0xc2eeff;
        colors[6] = 0x385d3f; colors[7] = 0x385d3f; colors[8] = 0x385d3f;
        colors[9] = 0x3e80fe; colors[10] = 0x6fc0ff; colors[11] = 0xa7d9d9;
        colors[12] = 0;
        sub_6e54d0(0xd, arr, 0);
        field1dc = 1;
    } else if (mode == 3) {
        float f = g_787054;
        sub_6684f0();
        field48 = 0xfce7d8;
        int x = sub_6e54b0(0x26);
        field3c = x;
        int arr[16];
        arr[0] = 0x26; arr[1] = 0x27; arr[2] = 0x28; arr[3] = 0x29;
        arr[4] = 0x2b; arr[5] = 0x1f; arr[6] = 0x20; arr[7] = 0x32;
        arr[8] = 0x25; arr[9] = 0x21; arr[10] = 0x24; arr[11] = 0x1e;
        arr[12] = 0x2f;
        int colors[16];
        colors[0] = 0x764127; colors[1] = 0xcb8c6a; colors[2] = 0xd0966d;
        colors[3] = 0xf6f6f6; colors[4] = 0x962d00; colors[5] = 0xc2eeff;
        colors[6] = 0x800000; colors[7] = 0x800000; colors[8] = 0x800000;
        colors[9] = 0x3e80fe; colors[10] = 0x6fc0ff; colors[11] = 0xf5be9e;
        colors[12] = 0;
        sub_6e54d0(0xd, arr, 0);
        field1dc = 1;
    }
    if (field1dc != 0) {
        float f = g_797e9c;
        sub_6684f0();
        sub_668f70();
        sub_668510();
    }
}
