// from server: 94% by colin
//

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
    float unitize(float);
};

struct Matrix3 {
    float data[9];
    Matrix3(const Matrix3&);
    Vector3 column(int) const;
    void setColumn(int, const Vector3&);
};

struct Frame {
    Matrix3 rotation;
    Vector3 translation;

    Frame(const Frame& source)
        : rotation(source.rotation) {
        translation.x = source.translation.x;
        translation.y = source.translation.y;
        translation.z = source.translation.z;
    }
};

extern const float normalizationTolerance;

struct Tool {
    char padding[0x158];
    Frame frame;
    void setFrame(const Frame&);
    void orient(const Vector3&);
};

void Tool::orient(const Vector3& direction) {
    Frame result(frame);

    Vector3 right = result.rotation.column(0);
    Vector3 back = result.rotation.column(2);

    float inverseLength = 1.0f / (float)sqrt(
        direction.x * direction.x +
        direction.y * direction.y +
        direction.z * direction.z);

    Vector3 up = {
        direction.x * inverseLength,
        direction.y * inverseLength,
        direction.z * inverseLength
    };

    Vector3 newBack = {
        right.y * up.z - right.z * up.y,
        right.z * up.x - right.x * up.z,
        right.x * up.y - right.y * up.x
    };
    newBack.unitize(normalizationTolerance);

    Vector3 newRight = {
        up.y * newBack.z - up.z * newBack.y,
        up.z * newBack.x - up.x * newBack.z,
        up.x * newBack.y - up.y * newBack.x
    };
    newRight.unitize(normalizationTolerance);

    result.rotation.setColumn(0, newRight);
    result.rotation.setColumn(1, up);
    result.rotation.setColumn(2, newBack);
    setFrame(result);
}
