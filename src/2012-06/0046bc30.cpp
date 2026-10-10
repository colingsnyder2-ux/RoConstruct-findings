// from server: 70% by atomic.potato
struct S
{
    void __cdecl f(void *a, int b);
};

extern void G1_func_0046b960(void *, int);

void __cdecl S::f(void *a, int b)
{
    if (b != 4)
    {
        G1_func_0046b960(a, b);
        return;
    }

    *(unsigned long *)a = 0x00d6c750;
    *((unsigned char *)a + 4) = 0;
    *((unsigned char *)a + 5) = 0;
}
