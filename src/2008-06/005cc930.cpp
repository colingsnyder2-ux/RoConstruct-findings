// from server: 76% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern float directionScale;
extern float inversePeriod;
extern float period;

extern "C" double __cdecl atan2(double, double);
#pragma intrinsic(atan2)

struct Vector3 {
    float x, y, z;
};

struct Matrix3 {
    float elements[9];
    Vector3 column(int index) const;
};

struct Camera {
    char padding[0x174];
    Matrix3 rotation;

    void adjust(float angle);
    void turn(int steps);
};

void Camera::turn(int steps)
{
    float scale = directionScale;
    Vector3 direction = rotation.column(2);
    float angle = (float)atan2(-direction.z * scale,
                              -direction.x * scale);
    float turns = angle * inversePeriod + steps;
    int rounded = (int)turns;
    adjust(angle - rounded * period);
}
