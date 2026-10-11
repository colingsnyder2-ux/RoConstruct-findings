// from server: 87% by atomic.potato
struct S_func_00690610 {
    char pad0[0x170];
    float m0;
    float m1;
    float m2;
    void f(float* out);
};

void S_func_00690610::f(float* out)
{
    out[0] = m0;
    out[1] = m1;
    out[2] = m2;
}
