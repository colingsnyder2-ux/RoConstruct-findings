// from server: 64% by atomic.potato
struct S
{
    float pad[90];
    void f(float);
};

void S::f(float x)
{
    if (x == pad[90] && x >= 0.0f)
    {
        pad[90] = x;
        *(float*)0x975f30 = x;
        ((void (__stdcall *)(float))0x40db00)(x);
    }
}
