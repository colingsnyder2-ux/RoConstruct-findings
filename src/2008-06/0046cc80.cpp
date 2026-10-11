// from server: 39% by colin
// roc 2008-06 0046cc80  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046cc80

extern "C" {
void __stdcall sub_802458(void*);
void __stdcall sub_802468(void*);
int __cdecl sub_46f9f0(void*, void*);
}

struct S {
    int f(int, int, int, int, int, int, int);
};

int S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    char buf1[28];
    char buf2[28];
    bool b;

    sub_802458(buf1);
    b = (sub_46f9f0(buf2, buf1) == 0);
    sub_802468(buf1);
    if (b)
        return 0;

    sub_802458(buf1);
    b = (sub_46f9f0(buf2, buf1) == 0);
    sub_802468(buf1);
    if (b)
        return 1;

    sub_802458(buf1);
    b = (sub_46f9f0(buf2, buf1) == 0);
    sub_802468(buf1);
    sub_802468(buf1);

    if (b)
        return 2;
    return 0x3e7;
}
