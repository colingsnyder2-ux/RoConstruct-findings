// from server: 82% by atomic.potato
extern "C" void __cdecl helper(int);

struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
    {
        helper(b);
        return;
    }

    *(int *)a = 0xb65000;
    *((char *)a + 4) = 0;
    *((char *)a + 5) = 0;
}
