// from server: 92% by atomic.potato
extern "C" void __stdcall std_exception_copy(void *, const void *);

struct S
{
    int f(S *);
};

int S::f(S *p)
{
    std_exception_copy(this, p);
    *(unsigned long *)this = 0x00b9883c;
    *(unsigned long *)((char *)this + 12) =
        *(unsigned long *)((char *)p + 12);
    *(unsigned long *)((char *)this + 16) =
        *(unsigned long *)((char *)p + 16);
    return (int)this;
}
