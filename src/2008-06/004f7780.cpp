// from server: 67% by king_originala
typedef unsigned int size_t;

extern "C" {
    extern long (__stdcall *InterlockedIncrement)(volatile long *);
    extern long (__stdcall *InterlockedDecrement)(volatile long *);
}

void * __cdecl operator new(size_t);
void __cdecl operator delete(void *);

struct Vector3 {
    float x, y, z;

    Vector3(const Vector3 &v) : x(v.x), y(v.y), z(v.z) {}
};

struct Object {
    virtual ~Object();
    volatile long references;
    void *owner;
    char storage[28];

    Object(int);
    void releaseOwner();
};

struct Reference {
    Object *pointer;

    explicit Reference(Object *p) : pointer(0) {
        if (p) {
            pointer = p;
            InterlockedIncrement(&p->references);
        }
    }

    ~Reference() {
        if (pointer && !InterlockedDecrement(&pointer->references)) {
            pointer->releaseOwner();
            delete pointer;
        }
    }
};

struct References {
    Object **data;
    int count;

    void append(const Reference &);
};

struct BuilderBase {
    virtual ~BuilderBase();
    int reserved[2];

    BuilderBase();
};

struct OperationBase {
    virtual void execute();
    char reserved[16];
    Reference reference;
    char remaining[8];

    OperationBase(Object **, Vector3, int);
    void apply(int);
};

struct Operation : OperationBase {
    float value;

    Operation(Object **p, const Vector3 &v, int mode)
        : OperationBase(p, v, mode) {
        value = 0.0f;
    }

    virtual void execute();
};

struct WedgeBuilder : BuilderBase {
    References objects;

    WedgeBuilder(const Vector3 &, int);
    virtual ~WedgeBuilder();
};

WedgeBuilder::WedgeBuilder(const Vector3 &v, int mode)
    : BuilderBase()
{
    objects.append(Reference(new Object(5)));

    Operation operation(objects.data + objects.count - 1, v, mode);
    operation.apply(0);
}
