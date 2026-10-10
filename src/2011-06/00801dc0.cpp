// from server: 30% by atomic.potato
struct S
{
    int f(int value);
};

int S::f(int value)
{
    *(int*)this = value;
    return *(int*)this;
}
