// from server: 56% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Body {
    char pad[0x94];
    Vector3 value;
    void updatePV();
};

struct Size {
    char pad[4];
    Vector3 value;
};

struct Box {
    Vector3 low, high;
    Box translated(const Vector3& value) const;
};

extern const float scale;

struct Primitive {
    char pad[0x9c];
    Size* size;
    Body* body;
    const Vector3& getValue();
};

struct S : Primitive {
    Box f();
};

Box S::f()
{
    const Vector3& value = size->value;
    float x = value.x * scale;
    float y = value.y * scale;
    float z = value.z * scale;
    Box bounds = {
        { -x, -y, -z },
        { x, y, z }
    };
    return bounds.translated(getValue());
}
