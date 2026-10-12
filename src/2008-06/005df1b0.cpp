// from server: 68% by colin
struct S {
};

void __cdecl f(float* out, const float* in) {
    out[0] = in[0];
    out[1] = in[1];
    out[2] = in[2];
    if (!(out[2] > out[1]) && out + 2 != out + 1) {
        float t = out[2];
        out[2] = out[1];
        out[1] = t;
    }
    if (!(out[0] <= out[1]) && out + 1 != out) {
        float t = out[1];
        out[1] = out[0];
        out[0] = t;
    }
    if (!(out[1] <= out[2]) && out + 2 != out + 1) {
        float t = out[2];
        out[2] = out[1];
        out[1] = t;
    }
}
