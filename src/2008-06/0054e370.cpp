// from server: 47% by atomic.potato
struct S
{
    int f(const int* a, const int* b);
    int x;
    int y;
};

int S::f(const int* a, const int* b)
{
    x = *a;
    y = *b;
    return (int)this;
}
