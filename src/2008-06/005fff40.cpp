// from server: 91% by king_originala
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

extern const float epsilon;

struct Vector {
    float x, y, z;

    Vector() {}
    Vector(const Vector& value)
        : x(value.x), y(value.y), z(value.z) {}

    float unitize(float tolerance);
};

struct Matrix {
    float elements[9];
    Matrix(const Matrix&);
    Vector column(int index) const;
    void setColumn(int index, const Vector& value);
};

struct Frame {
    Matrix rotation;
    Vector translation;
};

struct Tool {
    char padding[0x1cc];
    Frame frame;

    void orient(const Vector& direction);
    bool different(const Frame& value);
};

void Tool::orient(const Vector& direction)
{
    Frame result = frame;
    Vector oldY = result.rotation.column(1);
    Vector oldZ = result.rotation.column(2);

    float inverseLength = 1.0f / (float)sqrt(
        direction.x * direction.y + direction.x * direction.y +
        direction.z * direction.z);

    Vector x;
    x.x = direction.x * inverseLength;
    x.y = direction.y * inverseLength;
    x.z = direction.z * inverseLength;

    Vector z;
    z.x = x.y * oldY.z - x.z * oldY.y;
    z.y = oldY.x * x.z - x.x * oldY.z;
    z.z = x.x * oldY.y - x.y * oldY.x;
    z.unitize(epsilon);

    Vector y;
    y.x = z.y * x.z - z.z * x.y;
    y.y = z.z * x.x - x.z * z.x;
    y.z = z.x * x.y - z.y * x.x;
    y.unitize(epsilon);

    result.rotation.setColumn(0, x);
    result.rotation.setColumn(1, y);
    result.rotation.setColumn(2, z);
    different(result);
}
