// from server: 61% by atomic.potato
struct S
{
    int f(int *p);
};

extern "C" void sub_44bb70(void *, int *);

int S::f(int *p)
{
    *p = 0;
    sub_44bb70((void *)((char *)this + 0x30), p);
    return (int)p;
}
