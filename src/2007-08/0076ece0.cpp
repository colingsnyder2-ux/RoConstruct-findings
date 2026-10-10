// from server: 82% by colin
// roc 2007-08 0076ece0  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ece0

extern "C" int __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_486d70();
extern "C" int __cdecl sub_407410(int*);
extern "C" int __cdecl sub_4339d0();
extern "C" int __cdecl sub_630d23(int, int);

extern int g_8bdc98;
extern int g_487920;
extern int g_7783c0;
extern int g_88e2fc;

struct S {
    void f();
};

void S::f()
{
    int local;
    sub_725520((int)&g_8bdc98, (int)&g_487920);
    local = sub_486d70();
    int* p = (int*)sub_407410(&local);
    int r = sub_4339d0();
    *(int*)r = (int)&g_88e2fc;
    sub_630d23((int)&g_7783c0, r);
}
