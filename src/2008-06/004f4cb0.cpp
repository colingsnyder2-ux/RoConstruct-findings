// from server: 98% by colin
// from server: 76% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long*);
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long*);
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern "C" {
}

struct Vector3 {
    float x, y, z;

    Vector3() {}
    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}
};

struct Object {
    virtual ~Object();
    volatile long references;
    unsigned char storage[32];

    Object(int);
    void release();
};

struct Reference {
    Object* pointer;

    __forceinline Reference(Object* p) throw() : pointer(0) {
        if (p) {
            pointer = p;
            InterlockedIncrement(&p->references);
        }
    }

    __forceinline ~Reference() {
        if (pointer && !InterlockedDecrement(&pointer->references)) {
            pointer->release();
            if (pointer)
                delete pointer;
        }
    }

    Reference& operator=(const Reference&);
};

struct Temporary {
    unsigned char prefix[20];
    Object* pointer;
    unsigned char suffix[16];

    Temporary(const Reference&, Vector3, int);
    void finish(int);

    __forceinline ~Temporary() {
        if (pointer) {
            if (!InterlockedDecrement(&pointer->references)) {
                pointer->release();
                if (pointer)
                    delete pointer;
            }
            pointer = 0;
        }
    }
};

struct Base {
    virtual ~Base();
    unsigned char prefix[8];
    Reference object;
    unsigned char middle[64];
    unsigned char first[24];
    unsigned char second[12];

    Base();
};

extern unsigned char enabled;
extern const float scale;
void __cdecl calculate(const Vector3*, void*, void*);

struct Builder : Base {
    Builder(const Vector3&, int);
    virtual ~Builder();
};

Builder::Builder(const Vector3& size, int mode) : Base() {
    {
        Reference object(new Object(5));
        this->object = object;
        Temporary temporary(object, size, mode);
        temporary.finish(0);
    }

    if (enabled) {
        Vector3 scaled;
        scaled.x = size.x * scale;
        scaled.y = size.y * scale;
        scaled.z = size.z * scale;
        calculate(&scaled, second, first);
    }
}
