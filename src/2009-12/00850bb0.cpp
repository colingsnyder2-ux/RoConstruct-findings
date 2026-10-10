// from server: 84% by atomic.potato
struct S {
};

int __cdecl f(int a, int b, int c)
{
    if (a == 0)
        return 0;
    return ((int (__thiscall *)(S *, int, int, int))(*(int **)a)[24])(
        (S *)a, c, b, a);
}
