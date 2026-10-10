// from server: 73% by atomic.potato
extern "C" float g_819bac;
extern "C" double tan(double);

struct Ray
{
    void f(float);
};

void Ray::f(float value)
{
    ((float*)this)[1] = value;
    ((float*)this)[2] = 1.0f / (2.0f * tan(value * g_819bac));
}
