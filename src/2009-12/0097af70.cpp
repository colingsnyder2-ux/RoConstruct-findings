// from server: 62% by atomic.potato
struct S {
    int f();
};

int S::f() {
    int v1 = 0;
    int v2 = 0xf;
    int v3 = 0;
    int v4 = 0x759e70;
    int v5 = 0x740480;
    int v6 = 0x9bb084;
    int v7 = 0x9e5f2c;
    int v8 = 0xb9769c;
    void* (__stdcall *v9)(int, int, int, int, int, int, int);
    void* (__stdcall *v10)(int);
    v9(0x740480, 0x759e70, 0x9bb084, 0x9e5f2c, 0xb9769c, 0xf, 0);
    v10(0x9895b0);
    return 0;
}
