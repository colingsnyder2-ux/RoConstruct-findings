// from server: 60% by atomic.potato
struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c == 4)
    {
        *(int *)b = 0xb512c0;
        *((unsigned char *)b + 4) = 0;
        *((unsigned char *)b + 5) = 0;
    }
}
