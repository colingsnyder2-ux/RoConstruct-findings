// from server: 91% by atomic.potato
struct S
{
};

extern "C" void __cdecl G1_func_0065f1e0(void *, unsigned int);

void __cdecl f(void *a, unsigned int b)
{
    if (b != 4)
        G1_func_0065f1e0(a, b);
    else
    {
        *(unsigned int *)a = 0x00bbb850;
        *((unsigned char *)a + 4) = 0;
        *((unsigned char *)a + 5) = 0;
    }
}
