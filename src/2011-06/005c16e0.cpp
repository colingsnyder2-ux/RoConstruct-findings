// from server: 60% by atomic.potato
extern "C" void G1_func_005c1180();

struct S
{
    void f(int, void *);
};

void S::f(int value, void *p)
{
    if (value != 4)
    {
        G1_func_005c1180();
        return;
    }

    *(unsigned long *)p = 0x00c3cf60UL;
    *((unsigned char *)p + 4) = 0;
    *((unsigned char *)p + 5) = 0;
}
