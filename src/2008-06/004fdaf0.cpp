// from server: 84% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern "C" {
    extern long (__stdcall *InterlockedDecrement)(volatile long *);
}

struct Control {
    virtual ~Control();
    volatile long references;
    void release();
};

struct Handle {
    Control *pointer;
    ~Handle();
};

inline Handle::~Handle()
{
    if (pointer && InterlockedDecrement(&pointer->references) == 0) {
        pointer->release();
        if (pointer)
            delete pointer;
    }
}

struct Vector {
    float x, y, z;
    Vector(float, float, float);
    Vector(const Vector&);
};

inline Vector::Vector(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

inline Vector::Vector(const Vector& other)
    : x(other.x), y(other.y), z(other.z)
{
}

inline const float& minimum(const float& a, const float& b)
{
    return a < b ? a : b;
}

struct Base {
    virtual ~Base();
    char padding[28];
    Base(const Handle&, Vector, int);
};

struct CylinderBuilder : Base {
    float radius;
    int value;
    CylinderBuilder(Handle, float, float, float, int, int, float);
    virtual ~CylinderBuilder();
};

CylinderBuilder::CylinderBuilder(
    Handle handle, float x, float y, float z,
    int purpose, int suppliedValue, float suppliedRadius)
    : Base(handle, Vector(minimum(z, x), y, minimum(z, x)), purpose),
      radius(suppliedRadius),
      value(suppliedValue)
{
}
