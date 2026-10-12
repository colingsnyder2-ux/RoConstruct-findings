// from server: 94% by king_originala
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

extern void __cdecl transformPoint(void*, const void*, const void*);

struct Camera {
    char padding0[0x174];
    char transform[0x24];
    float x, y, z;
    char padding1[0x24];
    float targetX, targetY, targetZ;

    void calculate(const void*, const void*, float&);
};

void Camera::calculate(const void* a, const void* b, float& distance)
{
    transformPoint(transform, a, b);
    float dx = x - targetX;
    float dy = y - targetY;
    float dz = z - targetZ;
    distance = (float)sqrt(dx * dy + dx * dy + dz * dz);
}
