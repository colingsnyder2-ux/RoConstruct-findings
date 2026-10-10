// from server: 32% by colin
struct S {
    char pad0[0x30];
    int f(int, int, int, int, int, int, int, int, int);
};

extern "C" {
    int __stdcall sub_7273f0(int);
    int __stdcall sub_77e69c(int);
    int __stdcall sub_4a5620(int);
    int __stdcall sub_729380(int);
    int __stdcall sub_5f1980(int);
    int __stdcall sub_729350(int);
    int __stdcall sub_4afa50(int);
    int __stdcall sub_77e6ac(int);
    int __stdcall sub_7272d0(int);
    int __stdcall sub_630a1e(int);
}

int S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    char buf[0x38];
    int v;
    int *p;
    int r;

    sub_7273f0((int)buf);
    sub_77e69c(a1);
    sub_4a5620((int)buf);
    p = (int*)this;
    r = p[0];
    v = *(int*)(r + 0x30);
    sub_729380(r + 8);
    sub_729380(a2 + 8);
    sub_5f1980((int)buf);
    sub_729380(r + 8);
    sub_729350(a2 + 8);
    sub_5f1980((int)buf);
    sub_4afa50(v + 4);
    sub_77e6ac((int)(buf + 0x28));
    sub_7272d0((int)(buf + 0x20));
    sub_77e6ac((int)(buf + 0x60));
    sub_630a1e(0);
    return v;
}
