// from server: 86% by atomic.potato
struct WeakThreadRef
{
    void f(void *, int);
};

void WeakThreadRef::f(void *a, int b)
{
    if (b != 4)
    {
        extern void __stdcall g(void *, int);
        g(a, b);
        return;
    }

    *(int *)a = 0x00c4a768;
    *((char *)a + 4) = 0;
    *((char *)a + 5) = 0;
}
