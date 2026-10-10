// from server: 78% by atomic.potato
struct S
{
    void f(int, int, int, int, int, int);
};

extern "C" void __stdcall G1_func_00406dd0(int, int, int, int, int);

void S::f(int a, int b, int c, int d, int e, int f)
{
    G1_func_00406dd0(f, e, d, c, b);
}
