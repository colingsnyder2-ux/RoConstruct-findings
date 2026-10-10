// from server: 87% by atomic.potato
struct S
{
    void f(float *);
    char pad[472];
    float a;
    float b;
    float c;
};

void S::f(float *p)
{
    p[0] = a;
    p[1] = b;
    p[2] = c;
}
