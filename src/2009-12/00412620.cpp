// from server: 46% by atomic.potato
struct S
{
    void __cdecl f(void *);
};

void S::f(void *p)
{
    void *q = p;
    *(int *)((char *)q + 8) = 0;
}
