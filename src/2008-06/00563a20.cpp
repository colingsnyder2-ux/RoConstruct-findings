// from server: 58% by atomic.potato
extern "C" double g_value_827988;
extern "C" double g_value_94f638;

double __stdcall f(double value)
{
    double current = g_value_827988;
    g_value_94f638 = current < value ? value : current;
    return g_value_94f638;
}
