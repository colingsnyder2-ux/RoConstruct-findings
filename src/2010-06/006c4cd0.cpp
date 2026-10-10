// from server: 80% by atomic.potato
struct S
{
    void f(int *value);
};

void S::f(int *value)
{
    *value = *(int *)((char *)this + 0x2ac);
}
