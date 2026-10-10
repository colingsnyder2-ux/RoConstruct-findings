// from server: 38% by colin
struct PartInstance;
struct Body;

struct Rocket {
    char pad0[0x0c];
    bool active;
    char pad1[0x0f];
    PartInstance* target;
    char pad2[0x08];
    float targetOffsetX;
    float targetOffsetY;
    float targetOffsetZ;
    float targetRadius;
    bool firedEvent;
    char pad3[0x0b];
    float maxThrust;
    float kThrustP;
    float kThrustD;
    float maxSpeed;
    float kTurnP;
    float kTurnD;
    float maxTorqueX;
    float maxTorqueY;
    float maxTorqueZ;
    float cartoonFactor;

    void computeForceImpl(bool throttling, Body* body, Body* root, float* force, float* torque);
};

struct BodyMoverBase {
    char pad[0x44];
    virtual bool isActive();
};

struct Body {
    char pad0[0x1d8];
    int someId;
};

struct TargetPart {
    char pad0[0x24];
    float posX;
    float posY;
    float posZ;
};

struct Vector3 {
    float x, y, z;
};

extern "C" {
    void __stdcall sub_5a91c0(int);
    void __stdcall sub_573f80();
    void __stdcall sub_4731a0();
    void __stdcall sub_570270();
    void __stdcall sub_4b0360();
}

void Rocket::computeForceImpl(bool throttling, Body* body, Body* root, float* force, float* torque)
{
    BodyMoverBase* base = (BodyMoverBase*)((char*)this - 0xf0);
    if (base->isActive()) {
        sub_5a91c0(*(int*)((char*)body + 0x1d8));
    }

    if (active && !firedEvent) {
        if (target) {
            TargetPart* tp = (TargetPart*)target;
            float tx = tp->posX;
            float ty = tp->posY;
            float tz = tp->posZ;

            Vector3 offset;
            offset.x = targetOffsetX;
            offset.y = targetOffsetY;
            offset.z = targetOffsetZ;

            float dx = tx - offset.x;
            float dy = ty - offset.y;
            float dz = tz - offset.z;

            float distSq = dx*dy + dx*dy + dz*dz;
            if (distSq <= targetRadius * targetRadius) {
                firedEvent = true;
            }
        }
    }
}
