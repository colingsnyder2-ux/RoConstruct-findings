// from server: 50% by atomic.potato
extern "C" void __stdcall imported(void *, void *);

struct S
{
    S *f(void *);
};

S *S::f(void *arg)
{
    S *self = this;
    imported((char *)self + 32, arg);
    return self;
}
