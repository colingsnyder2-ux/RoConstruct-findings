// from server: 69% by atomic.potato
struct S {
    int f();
};

extern "C" int __stdcall func_0075b650(int, int, int, int, int, int, int, int);
extern "C" int __stdcall func_007f4929(int);

int S::f()
{
    int v1 = 0;
    int v2 = 0xf;
    int v3 = 0;
    int v4 = 0x75b150;
    int v5 = 0x7733f0;
    int v6 = 0x9bb084;
    int v7 = 0x9e5f1c;
    int v8 = 0xb977c0;
    func_0075b650(v1, v2, v3, v4, v5, v6, v7, v8);
    int v9 = 0x9896b0;
    func_007f4929(v9);
    return 0;
}
