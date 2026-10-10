// from server: 65% by atomic.potato
extern "C" void __cdecl G1_func_00741ec0(int);

struct S
{
    void __cdecl f(void *, int);
};

void __cdecl S::f(void *a, int b)
{
    if (b == 4)
    {
        unsigned char *p = (unsigned char *)a;
        *(unsigned long *)p = 0x00c8c6b8;
        p[4] = 0;
        p[5] = 0;
    }
    else
    {
        G1_func_00741ec0(b);
    }
}
