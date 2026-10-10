// from server: 58% by atomic.potato
struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
        f(a, b, c);

    *(int *)b = 0x00b18f30;
    *((char *)b + 4) = 0;
    *((char *)b + 5) = 0;
}
