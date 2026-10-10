// from server: 90% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int *)this = 0x9e6d4c;
    *((int *)this + 1) = 0x9e6d40;
    *((int *)this + 6) = 0x9e6d34;
    *((int *)this + 7) = 0x9e6d2c;
}
