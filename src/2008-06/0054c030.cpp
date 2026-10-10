// from server: 21% by atomic.potato
struct S
{
    int value;
    int f(int);
};

int S::f(int index)
{
    return value + index * 24;
}
