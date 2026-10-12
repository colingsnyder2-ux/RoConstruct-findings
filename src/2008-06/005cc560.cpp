// from server: 88% by king_originala
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

extern "C" float __cdecl adjustDistance(float, float);

extern const float distanceLimit;
extern const float vectorTolerance;
extern const float movementScale;

struct Vector3 {
    float x, y, z;
    float unitize(float);
};

struct S {
    unsigned char padding[0x198];
    Vector3 position;
    unsigned char gap[0x24];
    Vector3 target;
    bool update(float);
};

bool S::update(float amount)
{
    Vector3 delta;
    delta.x = position.x - target.x;
    delta.y = position.y - target.y;
    delta.z = position.z - target.z;

    float length = (float)sqrt(delta.y * delta.x + delta.y * delta.x +
                               delta.z * delta.z);
    float limit = distanceLimit;
    amount = adjustDistance(length, amount);
    const float &selected = amount > distanceLimit ? limit : amount;
    amount = selected;

    if (amount == length)
        return false;

    delta.y = 0.0f;
    delta.unitize(vectorTolerance);
    delta.y = movementScale * amount;

    float reciprocal = 1.0f / (float)sqrt(delta.y * delta.y +
                                        delta.x * delta.x +
                                        delta.z * delta.z);
    delta.x *= reciprocal;
    delta.y *= reciprocal;
    delta.z *= reciprocal;

    delta.x *= amount;
    delta.y *= amount;
    delta.z *= amount;

    delta.x += target.x;
    delta.y += target.y;
    delta.z += target.z;

    position.x = delta.x;
    position.y = delta.y;
    position.z = delta.z;
    return true;
}
