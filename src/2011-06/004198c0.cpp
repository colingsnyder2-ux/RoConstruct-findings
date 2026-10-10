// from server: 59% by atomic.potato
struct S
{
    void f(void *);
};

extern "C" void call_4196b0(void *, void *);

void S::f(void *p)
{
    void *q = 0;
    call_4196b0((char *)this + 4, p);
}
