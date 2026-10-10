// from server: 60% by atomic.potato
struct S
{
    void __cdecl f(void *, int);
};

void S::f(void *a, int b)
{
    if (b != 4)
    {
        return;
    }

    *(int *)a = 0xb2a478;
    *((unsigned char *)a + 4) = 0;
    *((unsigned char *)a + 5) = 0;
}
