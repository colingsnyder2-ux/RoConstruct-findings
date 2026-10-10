// from server: 55% by atomic.potato
struct S
{
};

void __cdecl f(void *a, void *c, int b)
{
    if (b == 4)
    {
        *(unsigned long *)c = 0x00bd3be8;
        *((unsigned char *)c + 4) = 0;
        *((unsigned char *)c + 5) = 0;
    }
    else
    {
        f(a, c, b);
    }
}
