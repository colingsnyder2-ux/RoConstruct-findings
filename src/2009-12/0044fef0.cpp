// from server: 60% by atomic.potato
struct S
{
    void __cdecl f(int, int);
};

extern "C" void __cdecl helper(int, int, int);

void S::f(int a, int b)
{
    if (b != 4)
    {
        helper(0, 0, b);
        return;
    }

    *((int *)a) = 0x00b09208;
    *((char *)a + 4) = 0;
    *((char *)a + 5) = 0;
}
