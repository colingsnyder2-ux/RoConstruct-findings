// from server: 38% by atomic.potato
struct S
{
    int f(int);
};

int S::f(int n)
{
    volatile int z = 0;
    if (z)
        z = 0;
    return *reinterpret_cast<int **>(this)[0] + n * 4;
}
