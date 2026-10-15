// from server: 87% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

extern float tolerance;

struct Vector {
    float x, y, z;
    float normalize(float);
};

struct Matrix {
    float elements[9];
    Matrix(const Matrix&);
    Vector column(int) const;
    void setColumn(int, const Vector&);
};

struct Frame {
    Matrix rotation;
    Vector translation;
};

struct Accoutrement {
    char padding[0x158];
    Frame frame;
    void apply(const Frame&);
    void f(const Vector&);
};

void Accoutrement::f(const Vector& direction) {
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
    z.y = x.z * oldY.x - x.x * oldY.z;
    z.z = x.x * oldY.y - x.y * oldY.x;
    z.normalize(tolerance);

    Vector y;
    y.x = z.y * x.z - z.z * x.y;
    y.y = z.z * x.x - z.x * x.z;
    y.z = z.x * x.y - z.y * x.x;
    y.normalize(tolerance);

    result.rotation.setColumn(0, x);
    result.rotation.setColumn(1, y);
    result.rotation.setColumn(2, z);
    apply(result);
}
