// from server: 37% by colin
struct Primitive {
    char pad[0x74];
    float radius;
    float mass;
    char pad3[0xb0 - 0x7c];
    float cachedMass;
    unsigned char massDirty;
    char pad5[0xb8 - 0xb5];
    void* massContext;
    float (__thiscall *massFunc)(void*);
};

struct Contact {
    char pad[0x8];
    Primitive* p0;
    Primitive* p1;
    char pad2[0x20 - 0xc];
    float overlap;
    float impulse;
    float restitution;
};

struct BallBallContact : Contact {
    float computeRestitution();
};

extern "C" float __cdecl sqrtf_helper(float);

float BallBallContact::computeRestitution()
{
    float r0 = p0->radius;
    float r1 = p1->radius;
    float minRadius = (r0 < r1) ? r0 : r1;
    overlap = minRadius;

    float m0 = p0->mass;
    float m1 = p1->mass;
    float maxMass = (m0 > m1) ? m0 : m1;

    if (p0->massDirty) {
        p0->cachedMass = p0->massFunc(p0->massContext);
        p0->massDirty = 0;
    }
    float cm0 = p0->cachedMass;

    if (p1->massDirty) {
        p1->cachedMass = p1->massFunc(p1->massContext);
        p1->massDirty = 0;
    }
    float cm1 = p1->cachedMass;

    float minMass = (cm0 < cm1) ? cm0 : cm1;
    impulse = minMass;

    float s = sqrtf_helper(maxMass);
    restitution = s * impulse;
    return restitution;
}
