// from server: 90% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int *)this = 0x9cdd3c;
    *(int *)((char *)this + 4) = 0x9cdd34;
    *(int *)((char *)this + 0x18) = 0x9cdd28;
    *(int *)((char *)this + 0x1c) = 0x9cdd20;
}
