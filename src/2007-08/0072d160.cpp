// from server: 73% by colin
struct S {
    int f(int a, int b, int c);
};

int S::f(int a, int b, int c)
{
    if (b == 0)
        return 0;
    return ((int (__thiscall *)(S *, int))0x72cec0)((S *)b, a);
}
