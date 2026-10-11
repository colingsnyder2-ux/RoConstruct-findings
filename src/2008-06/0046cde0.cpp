// from server: 27% by colin
extern "C" {
    void __stdcall sub_802458(void*);
    void __stdcall sub_802468(void*);
}
int __cdecl sub_46f9f0(void*, void*);

struct S {
    int f(int, int, int, int, int, int, int);
};

int S::f(int a, int b, int c, int d, int e, int g, int h)
{
    char buf1[4];
    char buf2[4];
    char str1[28];
    char str2[28];
    int flag;
    char ok;

    flag = 0;
    sub_802458(str1);
    ok = 1;
    if (sub_46f9f0(buf2, str2) == 0)
        ok = 1;
    else
        ok = 0;
    sub_802468(str1);
    if (ok) {
        sub_802468(str2);
        return 0;
    }
    sub_802458(str2);
    if (sub_46f9f0(buf1, str1) == 0)
        ok = 1;
    else
        ok = 0;
    sub_802468(str2);
    sub_802468(str1);
    if (ok)
        return 1;
    return 2;
}
