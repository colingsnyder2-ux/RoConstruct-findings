// from server: 73% by atomic.potato
struct S
{
    int f();
    int padding[16];
};

int S::f()
{
    if (padding[16] != 0)
    {
        if (padding[16] > 0)
            return 1;
    }
    return 0;
}
