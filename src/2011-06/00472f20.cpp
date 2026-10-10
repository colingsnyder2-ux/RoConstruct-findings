// from server: 55% by atomic.potato
struct S
{
};

void * __cdecl f(void *a, void *b, int c)
{
    if (c == 4)
    {
        *(unsigned long *)b = 0x00c15a58;
        *((unsigned char *)b + 4) = 0;
        *((unsigned char *)b + 5) = 0;
        return b;
    }
    return f(a, b, c);
}
