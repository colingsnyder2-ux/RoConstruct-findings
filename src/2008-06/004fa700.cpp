// from server: 85% by king_originala
extern "C" {
    extern long (__thiscall *InterlockedIncrement)(volatile long *);
    extern long (__stdcall *InterlockedDecrement)(volatile long *);
}

typedef unsigned int size_t;
void * __cdecl operator new(size_t);
void __cdecl operator delete(void *);

struct Vector3 {
    float x, y, z;
    Vector3(const Vector3 &);
};

inline Vector3::Vector3(const Vector3 &v)
    : x(v.x), y(v.y), z(v.z) {
}

struct Object {
    virtual ~Object();
    volatile long references;
    void *resource;
    char data[28];

    Object(int);
    void dispose();
};

struct Reference {
    Object *pointer;

    explicit Reference(Object *);
    ~Reference();
};

inline Reference::Reference(Object *p) : pointer(0) {
    if (p) {
        pointer = p;
        InterlockedIncrement(&p->references);
    }
}

inline Reference::~Reference() {
    if (pointer) {
        if (!InterlockedDecrement(&pointer->references)) {
            pointer->dispose();
            if (pointer)
                delete pointer;
        }
        pointer = 0;
    }
}

struct Holder {
    void assign(const Reference &);
};

struct BuilderBase {
    virtual ~BuilderBase();
    unsigned int reserved[2];

    BuilderBase();
};

struct ShapeBase {
    virtual ~ShapeBase();
    unsigned int reserved[4];
    Reference object;
    unsigned int tail[2];

    ShapeBase(const Reference &, Vector3, int);
    void apply(int, int);
};

inline ShapeBase::~ShapeBase() {
}

extern const float shapeConstant;
extern const float scaleConstant;

struct Shape : ShapeBase {
    float parameter;
    float depth;

    Shape(const Reference &, const Vector3 &, float);
    ~Shape();
};

inline Shape::Shape(const Reference &r, const Vector3 &v, float d)
    : ShapeBase(r, v, 0), parameter(shapeConstant), depth(d) {
}

inline Shape::~Shape() {
}

struct TorsoBuilder : BuilderBase {
    Holder holder;

    TorsoBuilder(const Vector3 &, int);
    virtual ~TorsoBuilder();
};

TorsoBuilder::TorsoBuilder(const Vector3 &dimensions, int purpose)
    : BuilderBase() {
    float depth = dimensions.z * scaleConstant;
    Reference object(new Object(5));
    holder.assign(object);
    Shape shape(object, dimensions, depth);
    shape.apply(purpose, 1);
}
