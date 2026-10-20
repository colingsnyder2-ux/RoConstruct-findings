// from server: 94% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client-dll roc_espeon_rayvectorarithmetic_c8f88ffeee6a890f.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
#include <vector>
struct Vector { float x,y,z; Vector() {} Vector(float a,float b,float c):x(a),y(b),z(c){} Vector operator+(const Vector& v) const {return Vector(x+v.x,y+v.y,z+v.z);} Vector& operator=(const Vector& v){x=v.x;y=v.y;z=v.z;return *this;} Vector(const Vector& v):x(v.x),y(v.y),z(v.z){} };
struct Shared { unsigned long tag; boost::shared_ptr<void> object; Shared(const Shared&); };
typedef std::vector<void*> List;
struct Ray
{
    Vector direction;
    Vector origin;

    Ray transformed() const;
    virtual ~Ray();
};

inline Ray::~Ray()
{
}

struct Geometry
{
    int intersect(const Ray&, List&, const Shared&, Vector&, const void*);
};

struct World
{
    unsigned char padding[0x84];
    Geometry* geometry;
};

struct Context
{
    unsigned char padding[0x2e4];
    World* world;
};

extern const Vector defaultVector;
extern const unsigned char intersectionOption;

struct S
{
    unsigned char padding[0x130];
    Context* context;

    Vector f(const Shared&, Ray);
};

Vector S::f(const Shared& input, Ray ray)
{
    if (!context)
        return defaultVector;

    Shared shared(input);
    Geometry* geometry = context->world->geometry;
    Vector result;
    result.x = 0.0f;
    result.y = 0.0f;
    result.z = 0.0f;
    List list;

    if (!geometry->intersect(ray, list, shared, result, &intersectionOption))
    {
        result = ray.transformed().direction + ray.origin;
    }

    return result;
}
