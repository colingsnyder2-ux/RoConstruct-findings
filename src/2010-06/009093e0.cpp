// from server: 70% by atomic.potato
extern "C" void __cdecl target(void *, void *, unsigned long);

struct S
{
    void __cdecl f(void *, unsigned long);
};

void S::f(void *p, unsigned long n)
{
    if (n != 4)
    {
        target(0, p, n);
        return;
    }

    *(unsigned long *)p = 0x00BFE988;
    ((unsigned char *)p)[4] = 0;
    ((unsigned char *)p)[5] = 0;
}
