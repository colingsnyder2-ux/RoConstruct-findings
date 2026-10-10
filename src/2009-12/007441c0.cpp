// from server: 80% by atomic.potato
struct S
{
    void f(int *);
};

void S::f(int *p)
{
    *p = *(int *)((char *)this + 0x1bc);
}
