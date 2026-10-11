// from server: 86% by tester
extern "C" int __cdecl sub_611c10(void* L);
extern "C" void __cdecl sub_611c20(void* L, int idx);
extern "C" void __cdecl sub_611c70(void* L, int idx);
extern "C" void __cdecl sub_611dd0(void* L, int idx);
extern "C" int __cdecl sub_611e00(void* L, int a, int b);
extern "C" void __cdecl sub_612410(void* L, int idx);
extern "C" void __cdecl sub_612490(void* L, int a, void* b);
extern "C" void __cdecl sub_6124f0(void* L, int n);
extern "C" void __cdecl sub_612710(void* L, int idx);
extern "C" void __cdecl sub_6127f0(void* L, int idx);
extern "C" void* __cdecl sub_612c40(void* L, int sz);

extern void* g_5a9bd0;
extern void* g_95b1dc;

struct S {
};

void __cdecl f(void* a, void* b)
{
    void* L = a;
    sub_611c10(L);
    sub_612410(L, (int)&g_5a9bd0);
    sub_6124f0(L, -10000);
    sub_612410(L, (int)b);
    sub_6124f0(L, -2);
    if (sub_611e00(L, -1, 0) == 0) {
        sub_611c20(L, -2);
        void* p = sub_612c40(L, 4);
        if (p) *(void**)p = b;
        sub_612490(L, -10000, g_95b1dc);
        sub_6127f0(L, -2);
        sub_612410(L, (int)b);
        sub_611dd0(L, -2);
        sub_612710(L, -4);
    }
    sub_611c70(L, -2);
}
