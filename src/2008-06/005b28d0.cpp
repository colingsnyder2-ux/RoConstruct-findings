// from server: 92% by king_originala
#pragma float_control(precise, off)

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

extern const float tolerance;

struct Vector {
    float x, y, z;

    Vector();
    Vector(float a, float b, float c);
    Vector(const Vector& value);
    Vector unit() const;
    Vector cross(const Vector& value) const;
    float normalize(float epsilon);
};

inline Vector::Vector()
{
}

inline Vector::Vector(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

inline Vector::Vector(const Vector& value)
    : x(value.x), y(value.y), z(value.z)
{
}

inline Vector Vector::unit() const
{
    float scale = 1.0f / (float)sqrt(x * x + y * y + z * z);
    return Vector(x * scale, y * scale, z * scale);
}

inline Vector Vector::cross(const Vector& value) const
{
    return Vector(y * value.z - z * value.y,
                  z * value.x - x * value.z,
                  x * value.y - y * value.x);
}

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

struct S {
    char reserved[0x158];
    Frame frame;

    void apply(const Frame&);
    void func_005b28d0(const Vector& direction);
};

void S::func_005b28d0(const Vector& direction)
{
    Frame result = frame;
    Vector right = result.rotation.column(0);
    Vector back = result.rotation.column(2);
    Vector up = direction.unit();
    Vector newBack = right.cross(up);
    newBack.normalize(tolerance);
    Vector newRight = up.cross(newBack);
    newRight.normalize(tolerance);
    result.rotation.setColumn(0, newRight);
    result.rotation.setColumn(1, up);
    result.rotation.setColumn(2, newBack);
    apply(result);
}
