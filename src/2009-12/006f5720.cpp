// from server: 65% by atomic.potato
struct S
{
};

extern void G1_func_006f4c50(void *, unsigned int, void *);

void __cdecl f(void *, unsigned int value, void *result)
{
    if (value != 4)
    {
        G1_func_006f4c50(0, value, result);
        return;
    }

    *(unsigned int *)result = 0x00b466d0;
    *((unsigned char *)result + 4) = 0;
    *((unsigned char *)result + 5) = 0;
}
