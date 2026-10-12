// from server: 60% by king_originala
extern const float offsetY;

struct Vector3 {
    float x, y, z;
    Vector3(float, float, float);
    Vector3(const Vector3&);
};

__forceinline Vector3::Vector3(float a, float b, float c)
    : x(a), y(b), z(c) {}

__forceinline Vector3::Vector3(const Vector3& v)
    : x(v.x), y(v.y), z(v.z) {}

struct Matrix3 {
    float m[9];
    Matrix3(const Matrix3&);
};

struct Frame {
    Matrix3 rotation;
    Vector3 translation;
    Frame(const Matrix3&, const Vector3&);
    Frame toObjectSpace(const Frame&) const;
    Frame operator*(const Frame&) const;
};

__forceinline Frame::Frame(const Matrix3& r, const Vector3& t)
    : rotation(r), translation(t) {}

struct Bounds {
    Vector3 low;
    Vector3 high;
};

struct PartInstance {
    const Frame& getFrame() const;
    void setFrame(const Frame&);
};

struct GetSetImpl {
    static PartInstance* get(PartInstance*);
};

struct PartList {
    PartInstance** data;
    int count;
};

Bounds getBounds(const PartList*);
Vector3 combine(const Vector3&, const Vector3&);
const Matrix3& identityRotation();

__forceinline const Vector3& getOffset()
{
    static Vector3 value(1.0f, offsetY, 1.0f);
    return value;
}

__forceinline const Vector3& getZero()
{
    static Vector3 value(0.0f, 0.0f, 0.0f);
    return value;
}

void updateParts(PartList* parts, const Matrix3& rotation)
{
    if (parts->count == 0)
        return;

    const Bounds& bounds = getBounds(parts);
    Vector3 center(
        (bounds.low.x + bounds.high.x) * 0.5f,
        (bounds.low.y + bounds.high.y) * 0.5f,
        (bounds.low.z + bounds.high.z) * 0.5f);

    Vector3 shifted = combine(center, getOffset());
    Frame origin(identityRotation(), shifted);
    Frame change(rotation, getZero());

    for (int i = 0; i < parts->count; ++i) {
        PartInstance* part = parts->data[i];
        Frame local = origin.toObjectSpace(part->getFrame());
        Frame changed = change * local;
        Frame result = origin * changed;
        PartInstance* destination = GetSetImpl::get(part);
        destination->setFrame(result);
    }
}
