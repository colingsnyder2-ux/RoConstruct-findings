// from server: 44% by atomic.potato
extern "C" void __cdecl sub_006a40c0(int, int, int, int, int);

struct S_func_006a4290 {
    void f(int a1, int a2, int a3);
};

void S_func_006a4290::f(int a1, int a2, int a3)
{
    sub_006a40c0(a1, a2, (a2 < 0) ? -1 : 0, a2, a3);
}
