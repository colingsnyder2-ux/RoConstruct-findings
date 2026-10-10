// from server: 45% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    int value = *((int *)((char *)this + 12));
    if (value == 4)
    {
        int *p = *((int **)((char *)this + 8));
        *p = 0x00b60980;
        *((char *)p + 4) = 0;
        *((char *)p + 5) = 0;
    }
    else
    {
        *((int *)((char *)this + 12)) = value;
    }
}
