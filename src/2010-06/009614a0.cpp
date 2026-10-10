// from server: 64% by atomic.potato
extern "C" void __cdecl helper(void *);

struct S
{
    void f(void *, unsigned int);
};

void S::f(void *a, unsigned int b)
{
    if (b != 4)
    {
        helper(a);
        return;
    }

    *(unsigned long *)a = 0x00bff7f0;
    *((unsigned char *)a + 4) = 0;
    *((unsigned char *)a + 5) = 0;
}
