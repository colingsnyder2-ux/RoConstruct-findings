// from server: 62% by colin
struct S_func_00501ca0 {
    float f0;
    float f4;
    float f8;
    float f12;
    float f16;
    float f20;
    float f24;
    float f28;
    float f32;
    float f36;
    float f40;
    float f44;
    void method(float* out, const float* in);
};

void S_func_00501ca0::method(float* out, const float* in)
{
    float dx = in[0] - f36;
    float dy = in[1] - f40;
    float dz = in[2] - f44;

    out[0] = f24 * f12 + dx * dy + f0 * dz;
    out[1] = f28 * dx + f16 * dy + f4 * dz;
    out[2] = f32 * dx + f20 * dy + f8 * dz;
}
