// from server: 87% by atomic.potato
struct S
{
    char pad[392];
    float x;
    float y;
    float z;
    void f(float *p);
};

void S::f(float *p)
{
    p[0] = x;
    p[1] = y;
    p[2] = z;
}
