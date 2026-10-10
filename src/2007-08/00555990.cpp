// from server: 57% by colin
struct S_func_00555990 {
};

float __cdecl f(float* out, const float* in)
{
    extern float g_8c1e64;
    extern float g_787054;
    extern float g_8c1e68;
    extern float g_7a8378;
    extern float g_7a837c;

    out[0] = 0.0f;
    out[1] = 0.0f;

    float a = g_8c1e64;
    float b = g_787054;
    float c = a * b;
    float d = g_8c1e68;

    if (d == c) {
        float e = g_7a8378;
        float f2 = e * c;
        float g = in[0];
        float h = g_7a837c;
        float i = h * g;
        float j = i * in[1];
        out[0] = f2;
        out[1] = j;
    } else {
        float g = in[0];
        float h = g_7a837c;
        float i = h * g;
        float j = i * in[1];
        out[0] = c;
        out[1] = j;
    }
    return 0.0f;
}
