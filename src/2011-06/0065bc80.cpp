// from server: 82% by atomic.potato
extern "C" void G1_func_0065bbd0(void *, double, double, const char *);

struct S
{
    void f(float *);
};

void S::f(float *p)
{
    G1_func_0065bbd0(this, *p, *p, "%.3g");
}
