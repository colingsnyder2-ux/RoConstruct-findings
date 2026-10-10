// from server: 92% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int *)this = 0x9cd344;
    *((int *)this + 1) = 0x9cd338;
    *((int *)this + 6) = 0x9cd32c;
    *((int *)this + 7) = 0x9cd324;
    *((int *)this + 37) = 0x9cd31c;
}
