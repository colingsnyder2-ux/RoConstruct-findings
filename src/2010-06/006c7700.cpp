// from server: 55% by atomic.potato
struct S
{
};

void __cdecl f(void *a, int b, int c)
{
    if (c != 4)
        return f(a, b, c);

    *(int *)b = 0x00bd1220;
    *((unsigned char *)b + 4) = 0;
    *((unsigned char *)b + 5) = 0;
}
