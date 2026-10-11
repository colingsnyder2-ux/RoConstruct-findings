// from server: 54% by atomic.potato
struct S
{
    int f();
};

extern "C" void sub_005b61b0(void *);
extern "C" void sub_0080245c(void *, void *);

int S::f()
{
    char value[4];
    void *p = value;
    sub_005b61b0(p);
    sub_0080245c(this, p);
    return 0;
}
