// from server: 24% by atomic.potato
struct S
{
    int f();
    int* data;
    int count;
};

int S::f()
{
    volatile int zero = 0;
    if (zero)
        zero = 0;
    return data[(count - 1) * 6];
}
