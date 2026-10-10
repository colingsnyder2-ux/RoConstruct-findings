// from server: 56% by atomic.potato
struct S
{
    int f(int);
    int a[36];
};

extern int helper(int, int);

int S::f(int value)
{
    if (value != 0)
        value = a[5] - a[35];
    else
        value = a[35] + a[5];

    return helper(0, value);
}
