// from server: 45% by TrollStein
struct S {
    void __cdecl f(float* out, const float* in);
};

void S::f(float* out, const float* in)
{
    float a = in[0];
    float b = in[1];
    float c = in[2];
    float s = 1.0f;
    float t = a + s;
    float u = b + t;
    float v = c + u;
    float k = *(float*)0x7a34b8;
    float x = t * k;
    float y = u * k;
    float z = v * k;
    float p = in[0];
    float q = in[1];
    float r = in[2];
    float m = p * x;
    float n = q * y;
    float o = r * z;
    out[0] = m;
    out[1] = n;
    out[2] = o;
    out[3] = x;
    out[4] = y;
    out[5] = z;
}
