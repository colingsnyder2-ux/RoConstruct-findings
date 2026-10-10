// from server: 55% by atomic.potato
struct S
{
};

void __cdecl f(void *a, int b, int c)
{
    if (c != 4)
    {
        f(a, b, c);
        return;
    }

    *(int *)b = 0x00bbb618;
    *((unsigned char *)b + 4) = 0;
    *((unsigned char *)b + 5) = 0;
}
