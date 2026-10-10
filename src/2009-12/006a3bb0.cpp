// from server: 68% by atomic.potato
struct S
{
    void __cdecl f(int, int);
};

void __cdecl S::f(int a, int b)
{
    if (b != 4)
    {
        void (*p)(int, int) = 0;
        p(a, b);
        return;
    }

    *(int *)a = 0x00b39920;
    ((char *)a)[4] = 0;
    ((char *)a)[5] = 0;
}
