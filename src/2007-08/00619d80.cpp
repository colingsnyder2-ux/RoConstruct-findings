// from server: 32% by colin
struct Point {
    char pad[0x28];
    float pos[3];
};

struct Body {
    char pad[0x1c];
    float pos[3];
    char pad2[0x0c];
    float vel[3];
};

struct Connector {
    char pad[0x08];
    Body* body0;
    Body* body1;
    float k;
    float breakForce;
    char pad2[0x04];
    bool broken;
    char pad3[0x03];
    int normalIdBody0;
};

struct NormalBreakConnector : Connector {
    void computeForce(bool throttling);
};

extern "C" void __stdcall sub_530100(int);

void NormalBreakConnector::computeForce(bool throttling)
{
    if (broken)
        return;

    Body* b0 = body0;
    Body* b1 = body1;

    sub_530100(0);

    int n = normalIdBody0;
    int idx = n % 3;
    int base = (n / 3) * 2;

    float f0 = b0->pos[idx];
    float f1 = b0->pos[idx + 3];
    float f2 = b0->pos[idx + 6];

    float w = (float)(1 - base);

    float d0 = b1->pos[0] - b0->pos[0];
    float d1 = b1->pos[1] - b0->pos[1];
    float d2 = b1->pos[2] - b0->pos[2];

    float nk = -k;

    d0 *= nk;
    d1 *= nk;
    d2 *= nk;

    float r0 = d0 * w;
    float r1 = d1 * w;
    float r2 = d2 * w;

    float s0 = f0 * w;
    float s1 = f1 * w;
    float s2 = f2 * w;

    float t0 = r0 + s0;
    float t1 = r1 + s1;
    float t2 = r2 + s2;

    float mag = -t0;
    broken = (mag > breakForce);

    b0->vel[0] += t0;
    b0->vel[1] += t1;
    b0->vel[2] += t2;

    b1->vel[0] += t0;
    b1->vel[1] += t1;
    b1->vel[2] += t2;
}
