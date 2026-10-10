// from server: 66% by atomic.potato
extern "C" double g_00b4fd78;

struct ContentProviderJob
{
    void f(double* value, double* scale);
};

void ContentProviderJob::f(double* value, double* scale)
{
    int resolution = *(int*)((char*)this + 0x278);
    value[1] = 0;
    double result = (double)resolution;
    if (resolution < 0)
        result += g_00b4fd78;
    value[0] = result * *scale;
}
