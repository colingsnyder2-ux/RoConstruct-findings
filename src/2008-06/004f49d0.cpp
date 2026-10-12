// from server: 81% by king_originala
typedef unsigned int size_t;

extern "C" {
    extern long (__stdcall *InterlockedIncrement)(volatile long*);
    extern long (__stdcall *InterlockedDecrement)(volatile long*);
}

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Vector3 {
    float x, y, z;

    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}
};

struct Resource {
    virtual void destroy(unsigned int);
    volatile long references;
    void* data;
    unsigned char storage[28];

    Resource(int);
    void releaseData();
};

struct Reference {
    Resource* p;

    Reference(Resource* value) : p(0) {
        if (value) {
            p = value;
            InterlockedIncrement(&value->references);
        }
    }

    ~Reference() {
        if (p) {
            if (!InterlockedDecrement(&p->references)) {
                p->releaseData();
                if (p)
                    p->destroy(1);
            }
            p = 0;
        }
    }
};

struct Holder {
    Resource* p;

    void assign(const Reference&);
};

struct Temporary {
    unsigned char prefix[20];
    Reference resource;
    unsigned char suffix[12];

    Temporary(const Reference&, Vector3, int);
    void apply(void*, int);
};

struct Base {
    unsigned int state[2];

    Base();
    virtual ~Base();
};

struct Builder : Base {
    Holder resource;

    Builder(const Vector3&, void*);
    virtual ~Builder();
};

Builder::Builder(const Vector3& position, void* value)
    : Base() {
    Reference reference(new Resource(5));
    resource.assign(reference);
    Temporary temporary(reference, position, 0);
    temporary.apply(value, 1);
}
