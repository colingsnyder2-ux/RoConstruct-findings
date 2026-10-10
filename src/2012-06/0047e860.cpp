// from server: 78% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    typedef void (__thiscall *F)(void *, void *, int);
    void **p = (void **)this;
    if (*p)
    {
        F f = *(F *)*p;
        if (f)
            f((char *)this + 8, (char *)this + 8, 2);
    }
    *p = 0;
}
