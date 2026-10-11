// from server: 24% by colin
// roc 2008-06 006477b0  unit: RBX::GlueJoint  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006477b0

extern "C" void __stdcall sub_5ddbd0(float* out, float* in);

struct GlueJoint {
    float f4;
    float f8;
    float fc;
    void func(float* a, float* b);
};

void GlueJoint::func(float* a, float* b)
{
    float v4 = f4;
    float v8 = f8;
    float vc = fc;

    float t0 = v8 * vc;
    float t1 = v4 + t0;
    float t2 = v8 * t1;
    float t3 = v4 + t2;

    float g1 = *(float*)0x81c434;
    float g2 = *(float*)0x826e68;

    float s0c = t3 * g1;
    float s10 = v8 * vc;
    float s14 = s10 * vc;
    float s18 = s14 * vc;
    float s04 = s18 * g2;

    float s1c = v4 * vc;
    float s20 = s1c * vc;
    float s08 = s20 * vc * t3;

    float d = s0c * vc;
    float e = b[0] / d;

    float r0 = s10 * s18 * s1c * s20;
    float r1 = s14 * s18 * s1c * s20;
    float r2 = s18 * s1c * s20;
    float r3 = s1c * s20;
    float r4 = s20;

    float q0 = r0 + r1 + r2 + r3 + r4 + s08 + s04;
    float q1 = q0 * e;

    float p0 = s10 * s18;
    float p1 = p0 * s1c;
    float p2 = p1 * s20;
    float p3 = p2 * s14;
    float p4 = p3 * s18;
    float p5 = p4 * s1c;
    float p6 = p5 * s20;

    float u0 = p6 + s08;
    float u1 = u0 + s04;
    float u2 = u1 * e;

    float w0 = s10 * s18 * s1c * s20;
    float w1 = w0 * s14;
    float w2 = w1 * s18;
    float w3 = w2 * s1c;
    float w4 = w3 * s20;
    float w5 = w4 + s08;
    float w6 = w5 + s04;
    float w7 = w6 * e;

    float x0 = s10 * s18 * s1c * s20;
    float x1 = x0 * s14;
    float x2 = x1 * s18;
    float x3 = x2 * s1c;
    float x4 = x3 * s20;
    float x5 = x4 + s08;
    float x6 = x5 + s04;
    float x7 = x6 * e;

    float y0 = s10 * s18 * s1c * s20;
    float y1 = y0 * s14;
    float y2 = y1 * s18;
    float y3 = y2 * s1c;
    float y4 = y3 * s20;
    float y5 = y4 + s08;
    float y6 = y5 + s04;
    float y7 = y6 * e;

    float z0 = s10 * s18 * s1c * s20;
    float z1 = z0 * s14;
    float z2 = z1 * s18;
    float z3 = z2 * s1c;
    float z4 = z3 * s20;
    float z5 = z4 + s08;
    float z6 = z5 + s04;
    float z7 = z6 * e;

    float out[4];
    out[0] = q1;
    out[1] = u2;
    out[2] = w7;
    out[3] = x7;

    sub_5ddbd0(out, b);
}
