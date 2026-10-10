// from server: 74% by atomic.potato
struct S
{
    int f(int, int);
};

typedef int (__thiscall *F)(void *, void *);

extern int __stdcall G1_func_00445bc0(int, int);

int S::f(int a, int b)
{
    char *p = *(char **)((char *)this + 0x18);
    F q = *(F *)(*(char **)p + 8);
    int x = q(p, &b);
    return G1_func_00445bc0(b, x);
}
