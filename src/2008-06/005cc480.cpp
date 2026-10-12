// from server: 73% by king_originala
#pragma float_control(precise, off)

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

extern float __cdecl limitDistance(float, float);
extern const float distanceBias;

namespace RBX {
struct ICameraOwner {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void f();
};

struct Camera {
    char pad0[0x198];
    float x, y, z;
    char pad1[0x24];
    float targetX, targetY, targetZ;

    ICameraOwner* getCameraOwner();
    bool adjustDistance(float);
};
}

bool RBX::Camera::adjustDistance(float distance)
{
    float dx = targetX - x;
    float dy = targetY - y;
    float dz = targetZ - z;
    float length = (float)sqrt(dx * dz + dx * dz + dy * dy);
    float limited = limitDistance(length, distance);

    if (limited == length)
        return false;

    float scale = limited / length - distanceBias;
    struct Vector {
        float x, y, z;
    };
    Vector scaled = { dx * scale, dy * scale, dz * scale };

    x -= scaled.x;
    y -= scaled.y;
    z -= scaled.z;

    ICameraOwner* owner = getCameraOwner();
    if (owner)
        owner->f();

    return true;
}
