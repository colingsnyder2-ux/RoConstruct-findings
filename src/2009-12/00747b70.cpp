// from server: 82% by atomic.potato
extern "C" void __cdecl Function_007476e0(int);

struct Handles
{
    void __cdecl f(int, int);
};

void Handles::f(int a, int b)
{
    if (b != 4)
    {
        Function_007476e0(b);
        return;
    }

    *(int *)a = 0x00b56df0;
    *((char *)a + 4) = 0;
    *((char *)a + 5) = 0;
}
