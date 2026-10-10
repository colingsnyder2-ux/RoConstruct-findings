// from server: 50% by atomic.potato
struct S {
    typedef int (__cdecl *Fn)(void *);
    int f(void *);
    char *a;
    Fn b;
};

int S::f(void *p)
{
    if (p)
        return b((char *)((char *)a + (int)p - 28));
    return b(a);
}
