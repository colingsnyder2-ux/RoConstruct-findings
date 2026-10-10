// from server: 50% by atomic.potato
struct S
{
};

int __cdecl f(int a, int *p)
{
    if (a != 4)
        return a;
    *p = 0xc51500;
    p[1] = 0;
    p[2] = 0;
    return 0;
}
