// from server: 19% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    volatile int value = 0;
}
