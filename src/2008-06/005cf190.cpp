// from server: 61% by colin
extern float G_f827490;

struct S {
    void f(float* out);
};

extern "C" void __cdecl G_func_005736f0(float* a, float* b);

void S::f(float* out)
{
    float v = G_f827490;
    float tmp[2];
    tmp[0] = v;
    tmp[1] = v;
    G_func_005736f0(tmp, &tmp[1]);
    out[0] = tmp[0];
    out[1] = tmp[1];
}
