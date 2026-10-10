// from server: 80% by atomic.potato
struct S
{
    int value;
    void f(int *out);
};

void S::f(int *out)
{
    *out = *(int *)((char *)this + 0x1c0);
}
