// from server: 76% by colin
struct S {
    void f(int a, float *out);
};

extern "C" void __stdcall g(double *out, int a);

void S::f(int a, float *out)
{
    double tmp;
    g(&tmp, a);
    *out = (float)tmp;
}
