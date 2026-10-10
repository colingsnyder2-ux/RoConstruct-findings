// from server: 54% by atomic.potato
extern "C" void __cdecl target(int, int, int, int);

struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
        target(0, 0, a, b);
    else
    {
        *(int *)a = 0xb8dab8;
        ((char *)a)[4] = 0;
        ((char *)a)[5] = 0;
    }
}
