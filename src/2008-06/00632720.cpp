// from server: 88% by king_originala
struct Vector
{
    float x, y, z;
    Vector();
};

inline Vector::Vector() : x(0.0f), y(0.0f), z(0.0f)
{
}

struct BodyForce
{
    char padding[0x148];
    float x, y, z;

    int hasForce();
};

int BodyForce::hasForce()
{
    static Vector zero;

    if (zero.x != x || zero.y != y || zero.z != z)
        return 1;
    return 0;
}
