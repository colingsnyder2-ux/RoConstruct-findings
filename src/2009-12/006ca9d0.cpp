// from server: 95% by atomic.potato
struct S
{
    int unused;
    int value;
    double time;
    double f();
};

double S::f()
{
    if (value > 0)
        return time / value;
    return 0.0;
}
