// from server: 83% by atomic.potato
struct S
{
    typedef int (__thiscall *Fn)(S *, int);
    int __cdecl f(int, int);
};

int S::f(int a, int b)
{
    return ((Fn)(*(int *)this))(this, b);
}
