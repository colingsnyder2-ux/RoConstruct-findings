// from server: 48% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    int i = 0;
    while (i != 0)
        i = 0;
    *(int *)((char *)this + 4) = 0;
}
