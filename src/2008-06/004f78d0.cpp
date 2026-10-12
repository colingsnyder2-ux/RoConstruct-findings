// from server: 78% by king_originala
typedef unsigned int size_t;

extern "C" long __stdcall InterlockedIncrement(volatile long *);
extern "C" long __stdcall InterlockedDecrement(volatile long *);

void *__cdecl operator new(size_t);
void __cdecl operator delete(void *);

extern const float faceScale;

struct Vector3 {
    float x, y, z;
    Vector3(const Vector3 &);
};

inline Vector3::Vector3(const Vector3 &v)
    : x(v.x), y(v.y), z(v.z)
{
}

struct Object {
    virtual ~Object();
    volatile long references;
    char storage[32];

    Object(int);
    void dispose();
};

struct Reference {
    Object *pointer;

    Reference(Object *);
    ~Reference();
};

inline Reference::Reference(Object *p) : pointer(0)
{
    if (p) {
        pointer = p;
        InterlockedIncrement(&p->references);
    }
}

inline Reference::~Reference()
{
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
    char storage[8];
    Holder holder;

    BuilderBase();
};

struct __declspec(novtable) FaceBase {
    virtual void unused();
    char storage[16];
    Reference reference;
    char tail[8];

    FaceBase(const Reference &, Vector3, int);
    ~FaceBase();
    void build(int, int);
};

inline FaceBase::~FaceBase()
{
}

struct Face : FaceBase {
    float scale;

    Face(const Reference &, const Vector3 &, int);
    ~Face();
    virtual void unused();
};

inline Face::Face(const Reference &r, const Vector3 &size, int side)
    : FaceBase(r, size, side), scale(faceScale)
{
}

inline Face::~Face()
{
}

struct WedgeBuilder : BuilderBase {
    WedgeBuilder(const Vector3 &, int);
    virtual ~WedgeBuilder();
};

WedgeBuilder::WedgeBuilder(const Vector3 &size, int purpose)
    : BuilderBase()
{
    Reference reference(new Object(5));
    holder.assign(reference);
    Face face(reference, size, 0);
    face.build(purpose, 1);
}
