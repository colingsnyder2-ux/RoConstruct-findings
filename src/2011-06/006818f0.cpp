// from server: 60% by atomic.potato
struct S
{
};

void __cdecl f(void *a, void *b, int c)
{
    if (c == 4)
    {
        *(int *)b = 0x00c5c5c8;
        *((unsigned char *)b + 4) = 0;
        *((unsigned char *)b + 5) = 0;
        return;
    }
}
