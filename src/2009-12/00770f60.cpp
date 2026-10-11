// from server: 68% by atomic.potato
extern "C" void *__cdecl sub_4c1ca0(int *);

struct S
{
    int f(int, int, int);
};

int S::f(int a, int b, int c)
{
    int x = 0;
    void *p = sub_4c1ca0(&x);
    ((void (__thiscall *)(void *, int, int, int))0x76f270)(p, a, b, c);
    return a;
}
