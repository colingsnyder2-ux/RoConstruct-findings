// from server: 25% by atomic.potato
struct S
{
    int f();
    int value;
};

int S::f()
{
    return value != 0;
}
