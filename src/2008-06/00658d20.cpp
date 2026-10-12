// from server: 97% by king_originala
#pragma float_control(precise, off)
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

struct Vec3 {
    float x, y, z;
    Vec3();
    Vec3(float, float, float);
    Vec3(const Vec3&);
    Vec3& operator=(const Vec3&);
};

__forceinline Vec3::Vec3() {}
__forceinline Vec3::Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
__forceinline Vec3::Vec3(const Vec3& v) : x(v.x), y(v.y), z(v.z) {}
__forceinline Vec3& Vec3::operator=(const Vec3& v) {
    x = v.x;
    y = v.y;
    z = v.z;
    return *this;
}

struct Matrix3 {
    float m[9];
    Matrix3& assign(const Matrix3&);
};

struct Transform {
    Matrix3 rotation;
    Vec3 position, minimum, maximum;
    Transform* build(Transform*, const Vec3*);
};

struct Quaternion {
    float x, y, z, w;
    Quaternion* fromTransform(const Transform*);
    Quaternion& assign(const Quaternion&);
    void normalize();
};

__forceinline void Quaternion::normalize() {
    float reciprocal = 1.0f / (float)sqrt(
        x * x + y * y + z * z + w * w);
    x *= reciprocal;
    y *= reciprocal;
    z *= reciprocal;
    w *= reciprocal;
}

struct Source {
    const Vec3& position();
    const Matrix3& rotation();
    float scale();
};

struct Owner {
    char reserved0[0x28];
    Source* source;
    char reserved1[0x3c];
    Matrix3 localRotation;
    float localScale;
    float reserved2;
    Transform transform;
    const void* get();
    const Vec3& positionValue();
    const Matrix3& rotationValue();
    float scaleValue();
};

__forceinline const Vec3& Owner::positionValue() {
    if (source)
        return source->position();
    static Vec3 zero(0.0f, 0.0f, 0.0f);
    return zero;
}

__forceinline const Matrix3& Owner::rotationValue() {
    return source ? source->rotation() : localRotation;
}

__forceinline float Owner::scaleValue() {
    return source ? source->scale() : localScale;
}

extern Matrix3* __cdecl multiply(Matrix3*, const Matrix3*, const Transform*);
extern Vec3* __cdecl dimensions(Vec3*, const Matrix3*);
extern Vec3* __cdecl convert(Vec3*, const Vec3*);
extern const float directionY;

struct S {
    Owner* owner;
    unsigned int reserved;
    unsigned char dirty;
    char padding[3];
    Transform frame;
    Quaternion orientation;
    Vec3 transformedPosition;
    Vec3 inverseDimensions;
    float inverseScale;
    float projectedScale;
    void update();
};

void S::update() {
    float smallStorage[4];
    float largeStorage[18];
    Vec3& vectorTemporary = *reinterpret_cast<Vec3*>(smallStorage);
    Quaternion& quaternionTemporary =
        *reinterpret_cast<Quaternion*>(smallStorage);
    Transform& transformTemporary =
        *reinterpret_cast<Transform*>(largeStorage);
    Matrix3& rotationTemporary =
        *reinterpret_cast<Matrix3*>(largeStorage);

    vectorTemporary = owner->positionValue();
    Owner* object = owner;
    object->get();
    frame = *object->transform.build(&transformTemporary, &vectorTemporary);
    orientation.assign(*quaternionTemporary.fromTransform(&frame));
    orientation.normalize();

    object = owner;
    object->get();
    {
        rotationTemporary.assign(object->rotationValue());
        Matrix3 product;
        multiply(&product, &rotationTemporary, &object->transform);
        transformedPosition = Vec3(
            frame.maximum.y * product.m[3] +
            frame.maximum.z * product.m[6] +
            frame.maximum.x * product.m[0],
            frame.maximum.y * product.m[4] +
            frame.maximum.z * product.m[7] +
            frame.maximum.x * product.m[1],
            frame.maximum.y * product.m[5] +
            frame.maximum.z * product.m[8] +
            frame.maximum.x * product.m[2]);
    }

    inverseScale = 1.0f / owner->scaleValue();
    rotationTemporary.assign(owner->rotationValue());
    const Vec3* result = dimensions(&vectorTemporary, &rotationTemporary);
    inverseDimensions = Vec3(
        1.0f / result->x,
        1.0f / result->y,
        1.0f / result->z);

    float scale = owner->scaleValue();
    static Vec3 direction(0.0f, directionY, 0.0f);
    projectedScale = convert(&vectorTemporary, &direction)->y * scale;
    dirty = 0;
}
