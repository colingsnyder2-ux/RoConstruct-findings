// from server: 61% by atomic.potato
extern "C" void G1_func_009066b0();

struct S
{
    void __cdecl f(void *, int);
};

void S::f(void *a, int b)
{
    if (b != 4)
    {
        G1_func_009066b0();
        return;
    }

    *(unsigned long *)a = 0x00bfe618UL;
    *((unsigned char *)a + 4) = 0;
    *((unsigned char *)a + 5) = 0;
}
