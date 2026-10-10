// from server: 63% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    int *p = *(int **)((char *)this + 12);
    if (p)
    {
        int (**vtable)(int *, int) = (int (**)(int *, int))*(int **)p;
        vtable[4](p, 1);
    }
}
