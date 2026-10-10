// from server: 90% by colin
extern "C" int __stdcall sub_00405d20(int, int, int, int, int);

struct S {
    int __stdcall f(int a1, int a2, int a3, int a4, int a5);
};

int __stdcall S::f(int a1, int a2, int a3, int a4, int a5)
{
    return sub_00405d20(a1, a2, a3, a4, a5);
}
