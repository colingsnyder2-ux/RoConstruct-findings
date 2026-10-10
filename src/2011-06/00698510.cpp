// from server: 60% by atomic.potato
struct S
{
};

void __cdecl f(int, void *p, int n)
{
    if (n != 4)
    {
        return;
    }

    *(unsigned long *)p = 0x00C63580UL;
    *((unsigned char *)p + 4) = 0;
    *((unsigned char *)p + 5) = 0;
}
