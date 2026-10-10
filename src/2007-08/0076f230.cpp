// from server: 82% by colin
// roc 2007-08 0076f230  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f230

extern "C" int __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_491790();
extern "C" int __cdecl sub_407410(int*);
extern "C" int __cdecl sub_4339d0();
extern "C" int __cdecl sub_630d23(int, int);

extern int g_8bdfa0;
extern int g_492070;
extern int g_778630;
extern int g_88f5a8;

struct S {
    void f();
};

void S::f()
{
    int v;
    sub_725520((int)&g_8bdfa0, (int)&g_492070);
    v = sub_491790();
    int* p = &v;
    int r = sub_407410(p);
    int* q = (int*)sub_4339d0();
    *q = (int)&g_88f5a8;
    sub_630d23((int)&g_778630, (int)q);
}
