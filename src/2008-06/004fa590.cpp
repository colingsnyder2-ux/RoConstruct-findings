// from server: 68% by king_originala
extern "C" long __stdcall InterlockedIncrement(volatile long *);
extern "C" long __stdcall InterlockedDecrement(volatile long *);

void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Vector3 {
    float x, y, z;
};

struct Object {
    virtual ~Object();
    volatile long references;
    char data[32];

    Object(int);
    void dispose();
};

struct Reference {
    Object *pointer;

    Reference(Object *p) : pointer(p) {
        if (pointer)
            InterlockedIncrement(&pointer->references);
    }

    ~Reference() {
        if (pointer && InterlockedDecrement(&pointer->references) == 0) {
            pointer->dispose();
            delete pointer;
        }
    }
};

struct Array {
    Object **data;
    int count;
    int capacity;

    void append(const Reference &);
};

struct BuilderBase {
    virtual ~BuilderBase();
    int reserved[2];
    Array objects;

    BuilderBase();
};

struct ShapeBase {
    virtual ~ShapeBase() {}
    int reserved[4];
    Reference object;
    int remaining[2];

    ShapeBase(Object **, Vector3, int);
    void build(int);
};

struct Shape : ShapeBase {
    float lower;
    float upper;

    Shape(Object **p, Vector3 size, int purpose, float height)
        : ShapeBase(p, size, purpose), lower(0.0f), upper(height) {}
};

struct TorsoBuilder : BuilderBase {
    TorsoBuilder(const Vector3 &, int);
    virtual ~TorsoBuilder();
};

TorsoBuilder::TorsoBuilder(const Vector3 &size, int purpose)
    : BuilderBase() {
    float height = size.z * 0.5f;
    objects.append(Reference(new Object(5)));
    Shape shape(objects.data + objects.count - 1, size, purpose, height);
    shape.build(0);
}
