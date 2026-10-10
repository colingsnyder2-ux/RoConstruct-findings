// from server: 53% by atomic.potato
struct seg_006a0000
{
    double f();
};

double seg_006a0000::f()
{
    volatile double value = *(const double*)0x008eaa30;
    return value;
}
