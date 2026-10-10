// from server: 60% by atomic.potato
struct S
{
    void f(int a, int *p);
};

extern "C" void G1_func_0065f590();

void S::f(int a, int *p)
{
    if (a != 4)
    {
        G1_func_0065f590();
        return;
    }

    *p = 0x00bbc080;
    ((unsigned char *)p)[4] = 0;
    ((unsigned char *)p)[5] = 0;
}
