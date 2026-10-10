// from server: 80% by atomic.potato
struct S
{
    int f(int);
};

int S::f(int value)
{
    if (value == *(int *)((char *)this + 0x10))
        return *(int *)((char *)this + 0x14);
    return value;
}
