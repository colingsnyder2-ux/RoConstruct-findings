// from server: 42% by atomic.potato
extern float g_009cf458;

struct S
{
    void f(float *p);
};

void S::f(float *p)
{
    p[0] = 0.0f;
    p[1] = g_009cf458;
}
