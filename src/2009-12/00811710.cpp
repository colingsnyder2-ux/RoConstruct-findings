// from server: 72% by atomic.potato
struct S
{
    int (**vtable)(S *);
    char padding[248];
    void *controls;
    int f();
};

int S::f()
{
    if (!vtable[0x60 / sizeof(int)](this))
        return 0;
    if (*(int *)((char *)controls + 0x3c) && !controls)
        return 0;
    return 1;
}
