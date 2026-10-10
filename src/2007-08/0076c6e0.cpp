// from server: 80% by colin
extern "C" void __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_4027a0();
extern "C" int __cdecl sub_407410(int*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int, int);

extern int g_8baecc;
extern int g_4035d0;
extern int g_777190;
extern int g_881370;

struct S {
    void f();
};

void S::f()
{
    int v;
    sub_725520((int)&g_8baecc, (int)&g_4035d0);
    v = sub_4027a0();
    int* p = &v;
    int r = sub_407410(p);
    sub_4339d0();
    *(int*)r = (int)&g_881370;
    sub_630d23((int)&g_777190, 0);
}
