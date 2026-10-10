// from server: 60% by atomic.potato
struct S
{
    void __cdecl f(void *a, int b);
};

void S::f(void *a, int b)
{
    if (b == 4)
    {
        *(int *)a = 0x00B2AAB8;
        *((unsigned char *)a + 4) = 0;
        *((unsigned char *)a + 5) = 0;
    }
}
