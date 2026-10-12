// from server: 61% by king_originala
#pragma float_control(precise, off)

extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)

extern const float radiusLimit;
extern const float distanceMinimum;
extern const float distanceMaximum;
extern const double initialPriority;

template<class T>
inline const T& minimum(const T& a, const T& b)
{
    return b < a ? b : a;
}

template<class T>
inline const T& maximum(const T& a, const T& b)
{
    return a < b ? b : a;
}

struct Matrix {
    float value[9];
};

struct Vector {
    float x, y, z;
    Vector operator-(const Vector& other) const;
    float length() const;
};

inline Vector Vector::operator-(const Vector& other) const
{
    Vector result;
    result.x = x - other.x;
    result.y = y - other.y;
    result.z = z - other.z;
    return result;
}

inline float Vector::length() const
{
    return static_cast<float>(fabs(x) + fabs(y) + fabs(z));
}

struct Transform {
    Matrix rotation;
    Vector translation;
    bool different(const Transform& other) const;
};

struct Ball {
    int getBulletSphereShape() const;
};

struct Object {
    Transform* getTransform();
    bool contains(Object* node);
};

typedef float (__thiscall *RadiusGetter)(void*);

struct Sphere {
    char padding[0x50];
    float radius;
    bool dirty;
    char alignment[3];
    char* object;
    unsigned unused;
    RadiusGetter getter;
    int adjustment;
    float getRadius();
};

inline float Sphere::getRadius()
{
    if (dirty) {
        radius = getter(object + adjustment);
        dirty = false;
    }
    return radius;
}

struct Sender {
    Object* object;
    unsigned padding;
    double priority;
    Transform previous;
    float scale;
    int sequence;
    float distance;

    bool update(const Transform* reference, Object* node, int newSequence);
};

bool Sender::update(const Transform* reference, Object* node, int newSequence)
{
    if (sequence >= newSequence)
        return false;

    Sphere* sphere = reinterpret_cast<Sphere*>(
        reinterpret_cast<Ball*>(reinterpret_cast<char*>(object) + 0x228)
            ->getBulletSphereShape());

    float radius;
    if (sphere) {
        scale = maximum(scale, minimum(sphere->getRadius() * 2.0f, radiusLimit));
        radius = sphere->getRadius();
    } else {
        radius = 0.0f;
    }

    distance = (object->getTransform()->translation -
                reference->translation).length() - radius;
    distance = maximum(distanceMinimum, minimum(distance, distanceMaximum));

    if (sequence == -1) {
        priority = scale / distance * scale;
        previous = *object->getTransform();
        sequence = newSequence;
        return true;
    }

    Object* owner = object;
    if (owner->contains(node)) {
        sequence = newSequence;
        priority = initialPriority;
        return true;
    }

    float movement =
        (owner->getTransform()->translation - previous.translation).length();
    priority = ((object->getTransform()->different(previous) ? 1.0f : 0.0f)
                + movement) / distance * scale * scale;
    sequence = newSequence;
    return true;
}
