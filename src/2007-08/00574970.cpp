// from server: 52% by colin
struct P8PartInstance {
    char pad[0x190];
    int count;
    void getSet(const float* a, float* out);
};

extern "C" void __cdecl sub_5AB230(float* a, float* b);

float g_79f5d8 = 0.0f;
float g_7aa8b4 = 0.0f;

void P8PartInstance::getSet(const float* a, float* out) {
    float v0 = 1.0f;
    float v1 = 1.0f;
    float v2 = 1.0f;
    const float* p0 = &v0;
    if (v0 == a[2]) p0 = &v2;
    float f0 = *p0;
    const float* p1 = &v1;
    if (a[1] == f0) p1 = &v1;
    float f1 = *p1;
    const float* p2 = &v2;
    if (a[0] == f1) p2 = &v2;
    float f2 = *p2;
    float tmp0 = f2;
    float tmp1 = f1;
    float tmp2 = f0;
    sub_5AB230(&tmp0, &tmp1);
    out[0] = tmp0;
    out[1] = tmp1;
    out[2] = tmp2;
    int c = count - 1;
    if (c == 0) {
        out[1] = out[1] * g_79f5d8;
    } else {
        c = c - 1;
        if (c == 0) {
            out[1] = out[1] * g_7aa8b4;
        }
    }
}
