// from server: 55% by atomic.potato
struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b == 4)
    {
        *(int*)a = 0x00b60848;
        *((unsigned char*)a + 4) = 0;
        *((unsigned char*)a + 5) = 0;
    }
    else
    {
        f(a, b);
    }
}
