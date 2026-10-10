// from server: 54% by atomic.potato
extern "C" void __stdcall Call980(void *, void *);

struct S
{
    S *f(void *);
};

S *S::f(void *arg)
{
    void *p = (char *)this + 0x98;
    Call980(p, arg);
    return this;
}
