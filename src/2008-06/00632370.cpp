// from server: 88% by king_originala
struct Vector3 {
    float x, y, z;
    Vector3();
};

inline Vector3::Vector3() : x(0.0f), y(0.0f), z(0.0f) {}

struct BodyVelocity {
    char padding[0x158];
    float x, y, z;
    bool isNonzero();
};

bool BodyVelocity::isNonzero()
{
    static Vector3 zero;
    return zero.x != x || zero.y != y || zero.z != z;
}
