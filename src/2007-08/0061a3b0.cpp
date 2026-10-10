// from server: 84% by colin
struct Body;
struct ContactParams;

struct Matrix3 {
    float m[9];
};

struct Vector3 {
    float x, y, z;
};

struct Connector {
    int vtable;
    int body0;
    int body1;
};

struct ContactConnector : Connector {
    int age;
    Matrix3 deltaVelPerUnitImpulse;
    Matrix3 impulsePerUnitDeltaVel;
    float inverseMass;
    float penetrationVelocity;
    float reboundVelocity;
    bool impulseComputed;
    int geoPair;
    ContactParams* contactParams;
    int oldContactPoint;
    int contactPoint;
    float firstApproach;
    float threshold;
    float forceMagLast;
    Vector3 frictionOffset;
    Vector3 something1;
    Vector3 something2;

    ContactConnector(Body* b0, Body* b1, const ContactParams& cp);
    void reset();
};

extern float g_gravityX;
extern float g_gravityY;
extern float g_gravityZ;
extern int g_gravityInit;

void __fastcall sub_475050(void* p);
void __fastcall sub_4A5D30(void* p);

ContactConnector::ContactConnector(Body* b0, Body* b1, const ContactParams& cp)
{
    this->body0 = (int)b0;
    this->body1 = (int)b1;
    *(unsigned char*)((char*)this + 4) = 1;

    sub_475050((char*)this + 8);
    sub_4A5D30((char*)this + 8 + 0x30);

    *(float*)((char*)this + 0x50) = 0.0f;
    *(float*)((char*)this + 0x54) = 0.0f;
    *(float*)((char*)this + 0x58) = 0.0f;
    *(float*)((char*)this + 0x5c) = 1.0f;
    *(float*)((char*)this + 0x60) = 0.0f;
    *(float*)((char*)this + 0x64) = 0.0f;
    *(float*)((char*)this + 0x68) = 0.0f;
    *(float*)((char*)this + 0x6c) = 0.0f;
    *(float*)((char*)this + 0x70) = 0.0f;
    *(float*)((char*)this + 0x74) = 0.0f;

    if (!(g_gravityInit & 1)) {
        g_gravityInit |= 1;
        g_gravityX = 0.0f;
        g_gravityY = 0.0f;
        g_gravityZ = 0.0f;
    }

    *(float*)((char*)this + 0x80) = g_gravityX;
    *(float*)((char*)this + 0x84) = g_gravityY;
    *(float*)((char*)this + 0x88) = g_gravityZ;

    if (!(g_gravityInit & 1)) {
        g_gravityInit |= 1;
        g_gravityX = 0.0f;
        g_gravityY = 0.0f;
        g_gravityZ = 0.0f;
    }

    *(float*)((char*)this + 0x8c) = g_gravityX;
    *(float*)((char*)this + 0x90) = g_gravityY;
    *(float*)((char*)this + 0x94) = g_gravityZ;
}
