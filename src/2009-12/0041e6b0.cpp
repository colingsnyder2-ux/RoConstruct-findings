// from server: 60% by atomic.potato
struct S
{
    void * __cdecl f(void *, unsigned int);
};

void *S::f(void *a, unsigned int b)
{
    if (b == 4)
    {
        *(unsigned int *)a = 0x00b04028;
        ((unsigned char *)a)[4] = 0;
        ((unsigned char *)a)[5] = 0;
        return a;
    }
    return a;
}
