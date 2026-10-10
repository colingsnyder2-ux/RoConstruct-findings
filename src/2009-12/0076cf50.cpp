// from server: 87% by atomic.potato
struct S
{
    char pad[380];
    float a;
    float b;
    float c;
    void f(float* p);
};

void S::f(float* p)
{
    p[0] = a;
    p[1] = b;
    p[2] = c;
}
