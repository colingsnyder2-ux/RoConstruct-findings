// from server: 94% by atomic.potato
extern "C" void __stdcall target_79e110(int, int, int);

struct S
{
    void f(int, int, int);
};

void S::f(int a, int b, int c)
{
    if (c != 4)
    {
        target_79e110(a, b, c);
        return;
    }

    unsigned char *p = (unsigned char *)b;
    *(unsigned int *)p = 0x00be5db0;
    p[4] = 0;
    p[5] = 0;
}
