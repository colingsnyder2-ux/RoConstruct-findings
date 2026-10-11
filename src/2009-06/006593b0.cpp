// from server: 75% by atomic.potato
struct S {
    float x;
    float y;
    float* f(float* out);
};

extern "C" void __stdcall sub_56cc20(float* out, float v);

float* S::f(float* out) {
    float sum = x * x + y * y;
    if (sum != 1.0f) {
        sub_56cc20(out, sum);
    } else {
        out[0] = x;
        out[1] = y;
    }
    return out;
}
