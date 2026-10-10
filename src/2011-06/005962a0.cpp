// from server: 91% by atomic.potato
extern void G1_func_00595be0(void *, int);

struct S
{
};

void __cdecl f(void *p, int n)
{
    if (n != 4)
    {
        G1_func_00595be0(p, n);
        return;
    }
    *(int *)p = 0x00c36dc0;
    ((char *)p)[4] = 0;
    ((char *)p)[5] = 0;
}
