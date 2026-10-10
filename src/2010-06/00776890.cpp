// from server: 29% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    return ((*(int *)((char *)this + 0x10) -
             *(int *)((char *)this + 0x0c)) / 20);
}
