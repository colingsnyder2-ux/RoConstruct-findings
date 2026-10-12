// from server: 92% by king_originala
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;

    Vector3& operator=(const Vector3& v) {
        x = v.x;
        y = v.y;
        z = v.z;
        return *this;
    }
};

struct Matrix3 {
    float elements[9];
    Matrix3 __thiscall transpose() const;
    Vector3 __thiscall multiply(const Vector3&) const;
};

struct Transform {
    Matrix3 rotation;
    Vector3 position;
};

struct Bounds {
    unsigned char data[20];
    bool __thiscall intersects(const Bounds&) const;
};

struct Geometry {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual float radius();
    void __thiscall closestPoint(Vector3&, Vector3&, Vector3&);
};

struct Frame {
    unsigned char padding[0x94];
    Transform transform;
};

struct Body {
    unsigned char padding[0x80];
    Bounds bounds;
    unsigned char gap[8];
    Geometry* geometry;
    Frame* frame;
};

struct Contact {
    unsigned char padding[12];
    Body* first;
    Body* second;
    bool __thiscall evaluate(Vector3&, Vector3&, Vector3&, float);
};

bool Contact::evaluate(Vector3& a, Vector3& b, Vector3& result, float margin)
{
    Body* left = first;
    Body* right = second;

    if (left->bounds.intersects(right->bounds)) {
        Transform* lf = &left->frame->transform;
        Transform* rf = &right->frame->transform;

        {
            Vector3 difference;
            difference.x = lf->position.x - rf->position.x;
            difference.y = lf->position.y - rf->position.y;
            difference.z = lf->position.z - rf->position.z;
            result = rf->rotation.transpose().multiply(difference);
        }

        second->geometry->closestPoint(result, b, a);

        Vector3 transformed = rf->rotation.multiply(result);
        float x = transformed.x - lf->position.x;
        float y = transformed.y - lf->position.y;
        float z = transformed.z - lf->position.z;
        volatile float distance = (float)sqrt(x * x + y * y + z * z);

        return first->geometry->radius() - margin > distance;
    }

    return false;
}
