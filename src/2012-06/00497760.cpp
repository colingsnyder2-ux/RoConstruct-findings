// from server: 57% by atomic.potato
struct S
{
    void __cdecl f(void *a, int b, int c);
};

void S::f(void *a, int b, int c)
{
    if (c == 4)
    {
        *(unsigned long *)a = 0x00D70E98;
        *((unsigned char *)a + 4) = 0;
        *((unsigned char *)a + 5) = 0;
    }
}
