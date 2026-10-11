// from server: 59% by atomic.potato
struct S {
    void f(float* out, float x, float y, double z, int a);
};

extern "C" void __stdcall sub_837980(float* out, float x, float y, double z, int a);

void S::f(float* out, float x, float y, double z, int a) {
    float tmp[2];
    sub_837980(tmp, x, y, z, a);
    out[0] = tmp[0];
    out[1] = tmp[1];
}
