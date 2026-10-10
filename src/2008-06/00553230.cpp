// from server: 33% by atomic.potato
struct S
{
    int f(int);
    int sub_005467e0(int);
};

int S::sub_005467e0(int value)
{
    return value;
}

int S::f(int value)
{
    return sub_005467e0(-value);
}
