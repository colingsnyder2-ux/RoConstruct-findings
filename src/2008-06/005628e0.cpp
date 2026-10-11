// from server: 19% by colin
// roc 2008-06 005628e0  size: 327 bytes
// Reconstructed from the target machine code.

struct S {
    void f(int, int, int, int, int, int, int, int, int);
};

extern "C" {
    void __stdcall sub_80245c();
    void __stdcall sub_802468();
    void __cdecl sub_413a70();
    void __cdecl sub_4147c0();
    void __cdecl sub_415350();
    void __cdecl sub_561f20();
    void __cdecl sub_58f6c0();
    void __cdecl sub_593250();
    void __cdecl sub_6a067a();
}

void S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    char buf[0x58];
    char *p;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;

    v1 = 0;
    sub_80245c();
    v2 = a9;
    sub_561f20();
    v3 = *(int*)0;
    *(int*)0 = 0;
    v4 = v3;
    if (v3 != 0) {
        v5 = *(int*)v3;
        v6 = *(int*)(v5 + 4);
        v7 = *(int*)(v6 + v3);
        v8 = *(int*)v7;
        sub_415350();
    }
    v9 = *(int*)(v4 + 0x28);
    sub_415350();
    sub_58f6c0();
    v10 = *(int*)0;
    *(int*)0 = 0;
    if (v10 != 0) {
        sub_413a70();
        sub_6a067a();
    }
    sub_593250();
    if (v10 != 0) {
        sub_413a70();
        sub_6a067a();
    }
    sub_4147c0();
    sub_802468();
}
