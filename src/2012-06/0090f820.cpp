// from server: 96% by atomic.potato
struct S
{
    void __cdecl f(void *);
};

extern void G1_func_0090f6f0(void *, int);
extern void G1_func_00982114(void *);

void __cdecl S::f(void *p)
{
    if (p)
    {
        G1_func_0090f6f0(p, *(int *)((char *)p + 12));
        G1_func_00982114(p);
    }
}
