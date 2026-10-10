// from server: 70% by atomic.potato
extern "C" void helper(int, int, int);

struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
    {
        helper(0, a, b);
        return;
    }

    *(int*)a = 0xBABEC8;
    *((char*)a + 4) = 0;
    *((char*)a + 5) = 0;
}
