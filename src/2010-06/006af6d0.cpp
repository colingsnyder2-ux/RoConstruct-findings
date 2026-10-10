// from server: 58% by atomic.potato
struct S
{
};

void __cdecl f(int, void *p, int n)
{
    if (n != 4)
        f(0, p, n);
    else
    {
        *(int *)p = 0x00bcb060;
        *((char *)p + 4) = 0;
        *((char *)p + 5) = 0;
    }
}
