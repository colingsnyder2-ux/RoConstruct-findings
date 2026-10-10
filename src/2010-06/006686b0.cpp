// from server: 45% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    int value = *(int *)((char *)this + 8);
    if (*(int *)((char *)this + 12) == 4)
    {
        *(int *)value = 0x00bbd970;
        *(char *)((char *)value + 4) = 0;
        *(char *)((char *)value + 5) = 0;
    }
    else
    {
        *(int *)((char *)this + 12) = *(int *)((char *)this + 12);
    }
}
