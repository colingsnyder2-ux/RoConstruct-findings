// from server: 70% by atomic.potato
extern "C" void __cdecl sub_68e2a0(void *, int);

struct S
{
    void __cdecl f(void *, int);
};

void __cdecl S::f(void *p, int n)
{
    if (n != 4)
    {
        sub_68e2a0(p, n);
        return;
    }

    *(unsigned long *)p = 0x00b36b30;
    *((unsigned char *)p + 4) = 0;
    *((unsigned char *)p + 5) = 0;
}
