// from server: 86% by king_originala
struct Vector3 {
    float x, y, z;
    Vector3(const Vector3&);
};

inline Vector3::Vector3(const Vector3& other)
    : x(other.x), y(other.y), z(other.z)
{
}

struct Matrix3 {
    float values[9];
    Matrix3(const Matrix3&);
};

struct Frame {
    Matrix3 rotation;
    Vector3 translation;
    Frame();
    Frame(const Frame&);
};

inline Frame::Frame(const Frame& other)
    : rotation(other.rotation), translation(other.translation)
{
}

extern const char* vectorType;
extern "C" void* __cdecl checkObject(void*, int, const char*);
extern "C" float __cdecl checkNumber(void*, int);
extern Matrix3 __cdecl axisAngle(const Vector3&, float);
extern void __cdecl pushFrame(void*, Frame);

int __cdecl makeFrame(void* state)
{
    Frame result;
    const Vector3* axis =
        static_cast<const Vector3*>(checkObject(state, 1, vectorType));
    float angle = checkNumber(state, 2);
    result.rotation = axisAngle(*axis, angle);
    pushFrame(state, result);
    return 1;
}
