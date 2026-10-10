// from server: 63% by atomic.potato
extern "C" void __cdecl sub_008344e0(int, int, int);

struct S
{
    int __cdecl f(int, int);
};

int S::f(int a, int b)
{
    sub_008344e0(b, a, 0);
    return a;
}
