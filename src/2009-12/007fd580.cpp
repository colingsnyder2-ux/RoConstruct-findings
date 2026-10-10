// from server: 50% by atomic.potato
extern "C" void unknown(void *, void *);

struct S
{
    void *f(void *);
};

void *S::f(void *p)
{
    unknown((char *)this + 0xf4, 0);
    return p;
}
