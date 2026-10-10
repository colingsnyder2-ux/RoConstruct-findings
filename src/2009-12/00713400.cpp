// from server: 90% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int *)this = 0x9de49c;
    *((int *)this + 1) = 0x9de490;
    *((int *)this + 6) = 0x9de484;
    *((int *)this + 7) = 0x9de47c;
}
