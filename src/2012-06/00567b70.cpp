// from server: 92% by atomic.potato
extern "C" void G1_func_00567970(int);

struct S
{
    void f(unsigned char *);
};

void S::f(unsigned char *p)
{
    G1_func_00567970(8);
    *(unsigned char *)((*(unsigned int *)this >> 3) + *(unsigned int *)((char *)this + 12)) = *p;
    *(unsigned int *)this += 8;
}
