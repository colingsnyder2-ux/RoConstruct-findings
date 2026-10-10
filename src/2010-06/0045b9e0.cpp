// from server: 60% by atomic.potato
struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b == 4)
    {
        *(int *)a = 0x00b83158;
        *((char *)a + 4) = 0;
        *((char *)a + 5) = 0;
    }
}
