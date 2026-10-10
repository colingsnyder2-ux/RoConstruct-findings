// from server: 46% by atomic.potato
extern "C" void *std_string_copy(void *, const void *);

struct S
{
    S *f(const void *);
};

S *S::f(const void *p)
{
    void *q = (char *)this + 0xc0;
    std_string_copy(q, p);
    return this;
}
