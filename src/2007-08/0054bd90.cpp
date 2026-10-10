// from server: 80% by tester
extern "C" int __cdecl sub_54f490(int, int, int, int, int, int, int);

struct S {
    int __cdecl f(int, int, int, int, int, int, int);
};

int S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    return sub_54f490(a1, a2, a3, a4, a5, a6, a7);
}
