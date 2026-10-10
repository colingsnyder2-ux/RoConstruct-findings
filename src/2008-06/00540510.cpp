// from server: 37% by atomic.potato
struct S
{
    int f(const int *p);
    int value;
};

int S::f(const int *p)
{
    return *p < value ? 1 : 0;
}
