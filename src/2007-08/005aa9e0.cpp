// from server: 37% by colin
struct World {
    float m0;
    float m1;
    float m2;
    float m3;
    void f(float* out);
};

extern float g_797988;

void World::f(float* out)
{
    float a = m0;
    float b = m1;
    float c = m2;
    float d = m3;
    float k = g_797988;

    float t0 = a * k;
    float t1 = b * k;
    float t2 = c * k;
    float t3 = d * k;

    float s0 = a * a;
    float s1 = a * b;
    float s2 = a * c;
    float s3 = a * d;
    float s4 = b * b;
    float s5 = b * c;
    float s6 = b * d;
    float s7 = c * c;
    float s8 = c * d;
    float s9 = d * d;

    out[0] = 1.0f - (s4 + s7);
    out[1] = s1 - s8;
    out[2] = s2 + s6;
    out[3] = s3 - s5;
    out[4] = 1.0f - (s0 + s7);
    out[5] = s5 - s3;
    out[6] = s1 + s8;
    out[7] = s2 - s6;
    out[8] = 1.0f - (s0 + s4);
}
