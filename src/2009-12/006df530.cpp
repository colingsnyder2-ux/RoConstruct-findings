// from server: 90% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int *)this = 0x9da2f4;
    *(int *)((char *)this + 4) = 0x9da2e8;
    *(int *)((char *)this + 0x18) = 0x9da2dc;
    *(int *)((char *)this + 0x1c) = 0x9da2d4;
}
