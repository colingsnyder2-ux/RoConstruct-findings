// from server: 79% by king_originala
extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)

extern const float distanceLimit;
extern const float distanceScale;
extern char propertyDescriptor;

struct Vector
{
    float x, y, z;
};

struct Transform
{
    char padding[0x24];
    Vector position;
};

struct Part
{
    const Transform* getTransform();
};

struct S
{
    char padding[0x1dc];
    Vector position;

    Part* getPart();
    void notify(const void*);
    void f(const Vector*);
};

inline const float& minimum(const float& a, const float& b)
{
    return b >= a ? b : a;
}

void S::f(const Vector* value)
{
    float threshold = 1.0f;

    if (getPart())
    {
        const Vector& origin = getPart()->getTransform()->position;
        double x = (double)origin.x - value->x;
        double y = (double)origin.y - value->y;
        double z = (double)origin.z - value->z;
        float distance = (float)(fabs(x) + fabs(y) + fabs(z));
        threshold = distanceLimit;
        threshold = minimum(distance, threshold) * distanceScale;
    }

    double x = (double)value->x - position.x;
    double y = (double)value->y - position.y;
    double z = (double)value->z - position.z;

    if (fabs(x) + fabs(y) + fabs(z) > threshold)
    {
        position.x = value->x;
        position.y = value->y;
        position.z = value->z;
        notify(&propertyDescriptor);
    }
}
