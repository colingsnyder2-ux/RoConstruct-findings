// from server: 30% by colin
// roc 2007-08 006199f0  unit: RBX::ContactConnector  size: 444 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006199f0

struct Vector3 {
    float x, y, z;
};

struct Body {
    char pad[0x1c];
    Vector3 pos;
};

struct ContactConnector {
    char pad0[0xc];
    Body* body0;
    Body* body1;
    Body* body2;
    Body* body3;
    int age;
    float firstApproach;
    float threshold;
    float forceMagLast;
    Vector3 frictionOffset;
    void updateContactPoint(Vector3* out, float* a, float* b, int c);
};

extern float g_79fe50;
extern double g_7a0b68;
extern double g_7a0b70;
extern float g_7b1538;

extern "C" float __stdcall sub_50f3a0(float);
extern "C" double __cdecl atan2(double, double);

void ContactConnector::updateContactPoint(Vector3* out, float* a, float* b, int c)
{
    Body* b0 = body0;
    Body* b1 = body1;
    Vector3 d1;
    d1.x = b1->pos.x - b0->pos.x;
    d1.y = b1->pos.y - b0->pos.y;
    d1.z = b1->pos.z - b0->pos.z;
    *out = d1;
    sub_50f3a0(g_79fe50);

    Body* b2 = body2;
    Body* b3 = body3;
    Vector3 d2;
    d2.x = b2->pos.x - b0->pos.x;
    d2.y = b2->pos.y - b0->pos.y;
    d2.z = b2->pos.z - b0->pos.z;
    Vector3 d3;
    d3.x = b3->pos.x - b0->pos.x;
    d3.y = b3->pos.y - b0->pos.y;
    d3.z = b3->pos.z - b0->pos.z;

    float cross1x = d2.y * out->z - d2.z * out->y;
    float cross1y = d2.z * out->x - d2.x * out->z;
    float cross1z = d2.x * out->y - d2.y * out->x;

    float cross2x = d3.y * out->z - d3.z * out->y;
    float cross2y = d3.z * out->x - d3.x * out->z;
    float cross2z = d3.x * out->y - d3.y * out->x;

    float dot1 = cross1x * cross1y + out->x * out->y + cross1z * out->z;
    float dot2 = cross2x * out->x + cross2y * out->y + cross2z * out->z;

    float angle = (float)atan2((double)dot1, (double)dot2);

    int oldAge = age;
    if (firstApproach > (float)g_7a0b68) {
        if (firstApproach < (float)g_7a0b70) {
            age = oldAge + 1;
        }
    } else {
        if (firstApproach > (float)g_7a0b70) {
            if (firstApproach < angle) {
                age = oldAge - 1;
            }
        }
    }

    float fage = (float)age;
    float scaled = fage * g_7b1538;
    *a = scaled + firstApproach;
    *b = (float)oldAge * g_7b1538 + firstApproach - scaled;
    firstApproach = *b;
}
