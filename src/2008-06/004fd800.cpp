// from server: 82% by king_originala
extern "C" {
    extern long (__stdcall *InterlockedIncrement)(volatile long *);
    extern long (__stdcall *InterlockedDecrement)(volatile long *);
}

void * __cdecl operator new(size_t);
void __cdecl operator delete(void *);

struct Object {
    virtual ~Object();
    volatile long references;
    void *resource;
    char storage[28];

    Object(int);
    void release();
};

struct Reference {
    Object *pointer;

    Reference(Object *p) : pointer(0) {
        if (p) {
            pointer = p;
            InterlockedIncrement(&p->references);
        }
    }

    ~Reference() {
        if (pointer) {
            if (InterlockedDecrement(&pointer->references) == 0) {
                pointer->release();
                if (pointer)
                    delete pointer;
            }
            pointer = 0;
        }
    }

    void assign(const Reference &);
};

struct Vector {
    float x, y, z;

    Vector(const Vector &v) : x(v.x), y(v.y), z(v.z) {}
};

struct Sphere {
    char prefix[20];
    Reference reference;
    char suffix[12];

    Sphere(const Reference &, Vector, void *, int);
    void build(void *, int);
};

struct Base {
    virtual ~Base();
    char prefix[8];
    Reference reference;
    char suffix[116];

    Base();
};

struct Cylinder : Base {
    int kind;
    Cylinder(const Vector &, void *);
};

Cylinder::Cylinder(const Vector &size, void *destination)
    : Base()
{
    kind = 3;
    Reference object(new Object(5));
    reference.assign(object);
    Sphere sphere(object, size, 0, 12);
    sphere.build(destination, 1);
}
