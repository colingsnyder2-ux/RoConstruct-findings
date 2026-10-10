// from server: 38% by colin
struct Vec3 { float x, y, z; };

struct Mat4 {
    float m[12];
};

struct XForm {
    Mat4 rot;
    Vec3 pos;
};

struct EnumPropDescriptor {
    char pad0[0x24];
    float f24;
    float f28;
    float f2c;
};

extern float g_float_8c5740;
extern unsigned int g_flag_8c5744;
extern float* g_ptr_77e49c;

extern "C" void __cdecl sub_5bcb90(float* a, float* b, float* c);

void EnumPropDescriptor_005bcc60(EnumPropDescriptor* self, XForm* a, XForm* b, XForm* out)
{
    float f0, f1, f2;
    float v0, v1, v2;
    float t0, t1, t2;
    float r0, r1, r2;
    float s0, s1, s2;
    float u0, u1, u2;
    float w0, w1, w2;
    float x0, x1, x2;
    float y0, y1, y2;
    float z0, z1, z2;
    float aa, bb, cc;
    float best0, best1, best2;
    float tmp;
    int i;

    if (!(g_flag_8c5744 & 1)) {
        g_flag_8c5744 |= 1;
        g_float_8c5740 = *g_ptr_77e49c;
    }
    f0 = g_float_8c5740;

    if (!(g_flag_8c5744 & 1)) {
        g_flag_8c5744 |= 1;
        g_float_8c5740 = *g_ptr_77e49c;
    }
    f1 = g_float_8c5740;

    if (!(g_flag_8c5744 & 1)) {
        g_flag_8c5744 |= 1;
        g_float_8c5740 = *g_ptr_77e49c;
    }
    f2 = g_float_8c5740;

    v0 = f0;
    v1 = f1;
    v2 = f2;

    if (!(g_flag_8c5744 & 1)) {
        g_flag_8c5744 |= 1;
        g_float_8c5740 = *g_ptr_77e49c;
    }
    t0 = g_float_8c5740;

    if (!(g_flag_8c5744 & 1)) {
        g_flag_8c5744 |= 1;
        g_float_8c5740 = *g_ptr_77e49c;
    }
    t1 = g_float_8c5740;

    if (!(g_flag_8c5744 & 1)) {
        g_flag_8c5744 |= 1;
        g_float_8c5740 = *g_ptr_77e49c;
    }
    t2 = g_float_8c5740;

    r0 = -t0;
    r1 = -t1;
    r2 = -t2;

    best0 = v0;
    best1 = v1;
    best2 = v2;

    for (i = 0; i < 8; i++) {
        int idx0 = (i >> 2) * 3;
        int idx1 = ((i >> 1) & 0x80000001);
        if (idx1 < 0) idx1 = ((idx1 - 1) | 0xfffffffe) + 1;
        idx1 = idx1 * 3;
        int idx2 = (i & 1) * 3;

        float p0 = *(float*)((char*)self + idx0 * 4);
        float p1 = *(float*)((char*)self + idx1 * 4 + 4);
        float p2 = *(float*)((char*)self + idx2 * 4 + 8);

        float q0 = a->rot.m[0] * p0 + a->rot.m[1] * p1 + a->rot.m[2] * p2 + a->pos.x;
        float q1 = a->rot.m[3] * p0 + a->rot.m[4] * p1 + a->rot.m[5] * p2 + a->pos.y;
        float q2 = a->rot.m[6] * p0 + a->rot.m[7] * p1 + a->rot.m[8] * p2 + a->pos.z;

        float d0 = q0 - b->pos.x;
        float d1 = q1 - b->pos.y;
        float d2 = q2 - b->pos.z;

        float e0 = b->rot.m[0] * d0 + b->rot.m[3] * d1 + b->rot.m[6] * d2;
        float e1 = b->rot.m[1] * d0 + b->rot.m[4] * d1 + b->rot.m[7] * d2;
        float e2 = b->rot.m[2] * d0 + b->rot.m[5] * d1 + b->rot.m[8] * d2;

        if (e0 < best0) best0 = e0;
        if (e1 < best1) best1 = e1;
        if (e2 < best2) best2 = e2;

        if (e0 > r0) r0 = e0;
        if (e1 > r1) r1 = e1;
        if (e2 > r2) r2 = e2;
    }

    sub_5bcb90(&best0, &r0, (float*)out);
}
