// from server: 61% by king_originala
extern "C" long __stdcall InterlockedIncrement(volatile long *);
extern "C" long __stdcall InterlockedDecrement(volatile long *);

void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Vector3 {
    float x, y, z;
};

struct Node {
    virtual ~Node();
    volatile long references;
    void *resource;
    unsigned char storage[28];

    Node(int);
    void release();
};

struct Reference {
    Node *p;

    Reference(Node *value) : p(value) {
        if (p)
            InterlockedIncrement(&p->references);
    }

    ~Reference() {
        if (p && InterlockedDecrement(&p->references) == 0) {
            p->release();
            if (p)
                delete p;
        }
    }
};

struct Container {
    Reference *entries;
    unsigned int count;

    void assign(const Reference &);
};

struct SphereBase {
    unsigned int table;
    unsigned char prefix[8];
    Container objects;
    unsigned char remainder[112];

    SphereBase();
    ~SphereBase();
};

struct BuilderBase {
    unsigned int table;
    unsigned char prefix[16];
    Reference reference;
    unsigned char remainder[8];

    BuilderBase(Reference *, Vector3, int);
    void build(int);
};

struct Builder : BuilderBase {
    int mode;

    Builder(Reference *entry, Vector3 position, int value)
        : BuilderBase(entry, position, value), mode(6) {
        table = 0x827134;
    }
};

struct Sphere : SphereBase {
    int mode;

    Sphere(const Vector3 &, int);
};

Sphere::Sphere(const Vector3 &position, int value)
    : SphereBase(), mode(2) {
    table = 0x827154;
    {
        Reference reference(new Node(5));
        objects.assign(reference);
    }
    Builder builder(objects.entries + objects.count - 1, position, value);
    builder.build(0);
}
