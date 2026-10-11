// from server: 85% by atomic.potato
extern void G1_func_0086c140();
extern void G2_func_008e5870(void *);

struct S
{
    int f();
};

int S::f()
{
    G1_func_0086c140();
    G2_func_008e5870(this);
    *(int *)this = 0xa0003c;
    *(int *)((char *)this + 0x54) = 0xa00028;
    *(int *)((char *)this + 0xac) = 0;
    return (int)this;
}
