// from server: 80% by atomic.potato
extern void G1_func_0040c080();

struct S
{
    void f(int value);
};

void S::f(int value)
{
    if (value != *(int *)((char *)this + 0xc8))
    {
        *(int *)((char *)this + 0xc8) = value;
        G1_func_0040c080();
    }
}
