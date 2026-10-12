// from server: 65% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Body {
    char pad[0x94];
    Vector3 value;
    void updatePV();
};

struct Dimensions {
    char pad[4];
    Vector3 size;
};

struct Primitive {
    char pad[0x9c];
    Dimensions* dimensions;
    Body* body;
    const Vector3& getValue();
};

struct Transform {
    float rotation[9];
    Vector3 translation;
};

struct Box {
    Vector3 minimum;
    Vector3 maximum;
    int query(const Vector3& point) const;
};

extern const float halfScale;

struct S {
    Primitive* primitive;
    int result;
    Vector3 point;
    void f();
};

void S::f()
{
    const Transform& t =
        *reinterpret_cast<const Transform*>(&primitive->getValue());

    double x = point.x - t.translation.x;
    double y = point.y - t.translation.y;
    double z = point.z - t.translation.z;

    Vector3 local;
    local.x = float(t.rotation[0] * x + t.rotation[3] * y + t.rotation[6] * z);
    local.y = float(t.rotation[1] * x + t.rotation[4] * y + t.rotation[7] * z);
    local.z = float(t.rotation[2] * x + t.rotation[5] * y + t.rotation[8] * z);

    const Vector3& size = primitive->dimensions->size;
    double hx = size.x * halfScale;
    double hy = size.y * halfScale;
    double hz = size.z * halfScale;

    Box box;
    box.minimum.x = float(-hx);
    box.minimum.y = float(-hy);
    box.minimum.z = float(-hz);
    box.maximum.x = float(hx);
    box.maximum.y = float(hy);
    box.maximum.z = float(hz);

    result = box.query(local);
}
