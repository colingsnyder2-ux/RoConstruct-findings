// from server: 25% by atomic.potato
struct S
{
    int value;
    int f(S *);
};

int S::f(S *other)
{
    return value >= other->value ? 1 : 0;
}
