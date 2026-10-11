// from server: 30% by colin
// roc 2008-06 0046cc80  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046cc80

extern "C" {
    void __stdcall sub_802458(void*);
    void __stdcall sub_802468(void*);
}

int __stdcall sub_46f9f0(void*, void*);

struct S {
    int f(int, int, int, int, int, int, int);
};

int S::f(int a, int b, int c, int d, int e, int f, int g)
{
    char buf1[4];
    char buf2[4];
    char buf3[4];
    char buf4[4];
    char buf5[4];
    char buf6[4];
    char buf7[4];
    int result;

    sub_802458(buf1);
    result = sub_46f9f0(buf2, buf3);
    sub_802468(buf1);
    if (result == 0)
        return 0;

    sub_802458(buf1);
    result = sub_46f9f0(buf2, buf3);
    sub_802468(buf1);
    if (result == 0)
        return 1;

    sub_802458(buf1);
    result = sub_46f9f0(buf2, buf3);
    sub_802468(buf1);
    sub_802468(buf1);
    if (result == 0)
        return 2;
    return 0x3e7;
}
