// from server: 26% by colin
struct VColor3 {
    float r;
    float g;
    float b;
    float a;
    float field10;
    float field14;
    float field18;
    float field1c;
};

struct XItem {
};

VColor3* __cdecl convert(VColor3* begin, VColor3* end, VColor3* out) {
    float tmp;
    while (begin != end) {
        float* p = (float*)begin;
        float v0 = p[0];
        float v1 = p[1];
        float v2 = p[2];
        float v3 = p[3];
        float v4 = p[4];
        float v5 = p[5];
        float v6 = p[6];
        float v7 = p[7];
        (void)v0; (void)v1; (void)v2; (void)v3;
        (void)v4; (void)v5; (void)v6; (void)v7;
        begin = (VColor3*)((char*)begin + 8);
    }
    out->r = 0.0f;
    out->g = 0.0f;
    out->b = 0.0f;
    out->a = 0.0f;
    out->field10 = 0.0f;
    out->field14 = 0.0f;
    out->field18 = 0.0f;
    out->field1c = 0.0f;
    return out;
}
