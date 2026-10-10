// from server: 66% by atomic.potato
struct S
{
    int f(int);
};

int S::f(int a)
{
    int **p = *(int ***)this;
    int **q = *(int ***)((char *)this + 4);
    typedef int (__thiscall *Fn)(int *, int, int *);
    Fn fn = (Fn)(*(int **)*p + 0x1c);
    fn((int *)p, a, (int *)q);
    return a;
}
