// from server: 90% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int *)this = 0x9cdc2c;
    *((int *)this + 1) = 0x9cdc24;
    *((int *)this + 6) = 0x9cdc18;
    *((int *)this + 7) = 0x9cdc10;
}
