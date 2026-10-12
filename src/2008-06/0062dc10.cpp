// from server: 66% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl releaseMemory(void*);

struct Vector
{
    float x, y, z;

    Vector();
    Vector(float, float, float);
    Vector(const Vector&);
    ~Vector();
};

inline Vector::Vector()
{
}

inline Vector::Vector(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

inline Vector::Vector(const Vector& v)
    : x(v.x), y(v.y), z(v.z)
{
}

inline Vector::~Vector()
{
}

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    unsigned long tag;
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p)
    {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

struct List
{
    void* head;
    unsigned long count;
    unsigned long capacity;
    void* first;
    void* last;
    void* limit;

    List();
    ~List();
};

inline List::~List()
{
    if (first)
        releaseMemory(first);
    first = 0;
    last = 0;
    limit = 0;
    releaseMemory(head);
}

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
        return Vector(defaultVector.x, defaultVector.y, defaultVector.z);

    Shared shared(input);
    Geometry* geometry = context->world->geometry;
    Vector result(0.0f, 0.0f, 0.0f);
    List list;

    if (!geometry->intersect(ray, list, shared, result, &intersectionOption))
    {
        const Ray& temporary = ray.transformed();
        result = Vector(temporary.direction.x + ray.origin.x,
                        temporary.direction.y + ray.origin.y,
                        temporary.direction.z + ray.origin.z);
    }

    return Vector(result.x, result.y, result.z);
}
