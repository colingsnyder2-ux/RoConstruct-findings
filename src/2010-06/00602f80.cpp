// from server: 54% by atomic.potato
extern "C" void __cdecl f(void);

struct S
{
    void f(int, int, int);
};

void S::f(int, int, int a)
{
    if (a != 4)
    {
        f(0, 0, a);
        return;
    }

    int *p = (int *)*(int *)((char *)this + 8);
    *(volatile int *)p = 0xBAEA48;
    *((volatile unsigned char *)p + 4) = 0;
    *((volatile unsigned char *)p + 5) = 0;
}
