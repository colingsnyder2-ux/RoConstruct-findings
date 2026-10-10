// from server: 92% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int *)this = 0x9e2cec;
    *(int *)((char *)this + 4) = 0x9e2ce0;
    *(int *)((char *)this + 0x18) = 0x9e2cd4;
    *(int *)((char *)this + 0x1c) = 0x9e2ccc;
    *(int *)((char *)this + 0x94) = 0x9e2cb4;
}
