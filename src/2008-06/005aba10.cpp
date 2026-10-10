// from server: 55% by atomic.potato
struct S
{
    int __cdecl f(int);
    int (__thiscall *v)(int);
};

int S::f(int x)
{
    return v(x);
}
