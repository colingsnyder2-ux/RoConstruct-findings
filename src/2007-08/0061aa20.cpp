// from server: 47% by colin
struct Body;
struct ContactParams;
struct PairParams {
    float x, y, z;
};

struct GeoPair {
    Body* body0;
    Body* body1;
};

struct ContactConnector {
    char pad0[0x28];
    Body* body0;
    char pad2[0x24];
    GeoPair geoPair;
    ContactParams* contactParams;
    PairParams oldContactPoint;
    PairParams contactPoint;
    float firstApproach;
    float threshold;
    float forceMagLast;
    float frictionOffset[3];
    void updateContactPoint();
    void reset();
};

struct ContactParams {
    float k;
    float d;
    float friction;
    float elasticity;
};

extern "C" void* __stdcall sub_5A5820(Body*);
extern "C" int __stdcall sub_5E3F10(ContactConnector*, Body*, PairParams*);
extern "C" int __stdcall sub_5E3BD0(ContactConnector*, PairParams*, Body*);
extern "C" int __stdcall sub_5A5B60(void*);
extern "C" int __stdcall sub_573F80(void*);
extern "C" void __stdcall sub_5A8290(void*, PairParams*);

void ContactConnector::updateContactPoint()
{
    float zero = 0.0f;
    PairParams local;
    local.x = zero;
    local.y = zero;
    local.z = zero;

    Body* b = *(Body**)((char*)this + 0x28);
    void* p = sub_5A5820(b);
    if (p == 0)
        return;

    Body* other = *(Body**)((char*)this + 0x44);

    if (sub_5E3F10(this, other, &local) == 0) {
        PairParams cp;
        sub_5E3BD0(this, &cp, other);

        PairParams* src;
        if (sub_5A5B60(p) != 0) {
            void* q = (void*)sub_5A5B60(p);
            int r = sub_573F80(q);
            src = (PairParams*)(r + 0x24);
        } else {
            src = &cp;
        }

        local.x = src->x + local.x;
        local.y = src->y + local.y;
        local.z = src->z + local.z;
    }

    sub_5A8290(p, &local);
}
