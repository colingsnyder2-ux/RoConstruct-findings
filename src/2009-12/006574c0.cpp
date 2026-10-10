// from server: 92% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int *)this = 0x9cd274;
    *(int *)((char *)this + 4) = 0x9cd268;
    *(int *)((char *)this + 0x18) = 0x9cd25c;
    *(int *)((char *)this + 0x1c) = 0x9cd254;
    *(int *)((char *)this + 0x94) = 0x9cd24c;
}
