// from server: 84% by atomic.potato
struct S {
};

void __cdecl f(void *p, double a, double b)
{
    if (*(int *)((char *)p + 0x10) != 0)
        (*(void (**)(void *, double, double))(*(int **)((char *)p + 8)))(p, a, b);
}
