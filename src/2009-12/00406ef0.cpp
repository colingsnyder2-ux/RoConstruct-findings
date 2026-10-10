// from server: 53% by atomic.potato
struct S
{
    int f(int *p);
};

int S::f(int *p)
{
    return *reinterpret_cast<int *>(*reinterpret_cast<int **>(
        reinterpret_cast<char *>(p) + 0x18));
}
