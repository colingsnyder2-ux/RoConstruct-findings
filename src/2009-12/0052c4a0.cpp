// from server: 63% by atomic.potato
struct S
{
};

void __cdecl f(int a, void *p, int v)
{
    if (v != 4)
    {
        *(int *)p = 0x00b1bf50;
        *((char *)p + 4) = 0;
        *((char *)p + 5) = 0;
    }
}
