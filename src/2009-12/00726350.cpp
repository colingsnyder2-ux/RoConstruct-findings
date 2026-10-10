// from server: 50% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    int value = *(int *)((char *)this + 0xa4);
    *(int *)((char *)this + 0x10) = value;
    *(int *)((char *)this + 0x20) = value;
    *(int *)((char *)this + 0x30) = 0;
    return 0;
}
