// from server: 43% by atomic.potato
struct S
{
    static void f(void *, unsigned int);
};

void S::f(void *a, unsigned int b)
{
    if (b != 4)
    {
        S::f(a, b);
        return;
    }

    *(unsigned int *)a = 0x00c2b3a8;
    ((unsigned char *)a)[4] = 0;
    ((unsigned char *)a)[5] = 0;
}
