// from server: 41% by atomic.potato
typedef int (__thiscall *Fn)(int);

struct S
{
    int f(int);
    Fn *v;
};

int S::f(int a)
{
    Fn *p = v + 12;
    return p[0](a);
}
