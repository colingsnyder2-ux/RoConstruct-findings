// from server: 30% by colin
struct S {
    char pad[0x34];
    int f(int, int, int, int, int, int, int, int, int);
};

extern "C" {
    void __stdcall sub_5572B0(int);
    void __stdcall sub_558C00(int, int);
    void __stdcall sub_5596C0(int, int);
    void __stdcall sub_559CD0(int);
    void __stdcall sub_55ADB0(int);
    void __stdcall sub_572390(int, int, int);
    void __stdcall sub_7266D0(int, int);
    void __stdcall sub_726440(int);
    void __stdcall sub_77E69C(int);
    void __stdcall sub_77E698(int, int);
    void __stdcall sub_77E6AC(int);
}

int S::f(int a, int b, int c, int d, int e, int g, int h, int i, int j)
{
    int v = 0;
    int result = 0;
    char buf[0x34];
    int* p = (int*)buf;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 0;
    p[9] = 0;
    p[10] = 0;
    p[11] = 0;
    p[12] = 0;

    if (*(char*)&a != 0) {
        sub_77E69C((int)&a);
        sub_5572B0(b);
    } else {
        if (c > 0) {
            sub_77E69C((int)&a);
            sub_558C00((int)&a, b);
            sub_559CD0((int)&buf[0]);
            sub_5596C0((int)&buf[0], 0x56C480);
            sub_55ADB0((int)&buf[0]);
            sub_572390((int)&buf[0], 0x7A8A50, (int)&buf[0]);
            sub_7266D0((int)&buf[0], (int)&buf[0]);
            sub_726440((int)&buf[0]);
            if (p[0] != 0) {
                ((void(__stdcall*)(int, int))p[0])(p[1], 1);
            }
            if (p[2] != 0) {
                ((void(__stdcall*)(int, int))p[2])(p[3], 1);
            }
            if (p[4] != 0) {
                ((void(__stdcall*)(int, int))p[4])(p[5], 1);
            }
        }
        sub_77E698((int)&buf[0], 0x785954);
    }
    sub_77E6AC((int)&buf[0]);
    return result;
}
