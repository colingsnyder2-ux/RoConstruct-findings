// from server: 72% by atomic.potato
extern "C" void sub_008b0a30(void *, void *, void *);
extern "C" void sub_008396c0(void *);

struct S {
    int f(void *, void *);
};

int S::f(void *a, void *b)
{
    sub_008b0a30(this, a, b);
    sub_008396c0((char *)this + 0x38);
    *(unsigned long *)this = 0x00a0f8ac;
    return (int)this;
}
