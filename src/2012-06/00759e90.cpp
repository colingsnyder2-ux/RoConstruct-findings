// from server: 79% by atomic.potato
extern "C" void Function759de0(void *, double, double, const char *);

struct EventDesc
{
    void f(float *);
};

void EventDesc::f(float *value)
{
    double v = *value;
    Function759de0(this, v, v, "%.3g");
}
