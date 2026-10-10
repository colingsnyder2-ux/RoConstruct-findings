// from server: 38% by atomic.potato
struct S
{
    int f(int);
};

int S::f(int)
{
    return (int)this;
}
