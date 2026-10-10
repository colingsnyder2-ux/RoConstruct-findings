// from server: 21% by atomic.potato
struct S
{
    int f(int);
};

int S::f(int index)
{
    int zero = 0;
    if (zero != 0)
        return 0;

    zero = 0;
    if (zero != 0)
        return 0;

    return index * 12 + *reinterpret_cast<int *>(this);
}
