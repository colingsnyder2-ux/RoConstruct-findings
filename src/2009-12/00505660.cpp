// from server: 67% by atomic.potato
extern "C" void __cdecl sub_5054B0();

struct S
{
    void f();
};

void S::f()
{
    unsigned int n;
    char *p;

    n = *(unsigned int *)((char *)&n + 8);
    if (n != 4)
    {
        *(unsigned int *)((char *)&n + 8) = n;
        sub_5054B0();
    }
    else
    {
        p = *(char **)((char *)&n + 4);
        *(unsigned int *)p = 0x00b15378;
        p[4] = 0;
        p[5] = 0;
    }
}
