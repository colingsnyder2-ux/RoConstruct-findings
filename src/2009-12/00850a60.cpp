// from server: 60% by atomic.potato
struct S
{
    int __cdecl f(int, int, int);
};

int S::f(int a, int b, int c)
{
    if (this == 0)
        return 0;
    return (*(int (__thiscall **)(int, int, int, int *))(*(int *)this + 0x58))(a, b, 0xb, &c);
}
