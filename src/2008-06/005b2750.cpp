// from server: 93% by king_originala
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off, push)

extern const float normalizationTolerance;

struct Vector3
{
    float x, y, z;
    float unitize(float tolerance);
};

struct Matrix3
{
    float data[9];
    void copy(const Matrix3* source);
    void column(Vector3* result, int index) const;
    void setColumn(int index, const Vector3* value);
};

struct Frame
{
    Matrix3 rotation;
    Vector3 translation;
    Frame(const Frame& source);
};

inline Frame::Frame(const Frame& source)
{
    rotation.copy(&source.rotation);
    translation.x = source.translation.x;
    translation.y = source.translation.y;
    translation.z = source.translation.z;
}

struct S
{
    char padding[0x158];
    Frame frame;
    void finish(const Frame* value);
    void func_005b2750(const Vector3& direction);
};

void S::func_005b2750(const Vector3& direction)
{
    Frame result(frame);

    Vector3 oldRight;
    Vector3 oldUp;
    result.rotation.column(&oldRight, 0);
    result.rotation.column(&oldUp, 1);

    float inverseLength = 1.0f / sqrt(
        direction.x * direction.x +
        direction.y * direction.y +
        direction.z * direction.z);

    Vector3 normalized;
    normalized.x = direction.x * inverseLength;
    normalized.y = direction.y * inverseLength;
    normalized.z = direction.z * inverseLength;

    Vector3 back;
    back.x = -normalized.x;
    back.y = -normalized.y;
    back.z = -normalized.z;

    Vector3 right;
    right.x = oldUp.y * back.z - oldUp.z * back.y;
    right.y = oldUp.z * back.x - back.z * oldUp.x;
    right.z = oldUp.x * back.y - oldUp.y * back.x;
    right.unitize(normalizationTolerance);

    Vector3 up;
    up.x = back.y * right.z - back.z * right.y;
    up.y = back.z * right.x - back.x * right.z;
    up.z = back.x * right.y - back.y * right.x;
    up.unitize(normalizationTolerance);

    result.rotation.setColumn(0, &right);
    result.rotation.setColumn(1, &up);
    result.rotation.setColumn(2, &back);
    finish(&result);
}

#pragma float_control(pop)
