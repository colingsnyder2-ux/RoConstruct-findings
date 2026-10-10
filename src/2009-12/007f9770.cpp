// from server: 57% by atomic.potato
struct S
{
    void *p;

    int f();
};

int S::f()
{
    void *p = *(void **)((char *)this + 0x180);
    if (p)
    {
        int (**vtable)(void) = *(int (***)(void))p;
        return (*vtable)();
    }
    return 0;
}
