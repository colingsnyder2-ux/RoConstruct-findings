// from server: 97% by king_originala
struct RefObject {
    virtual ~RefObject();
    long references;
    void release();
};

extern "C" long (__stdcall *InterlockedDecrement)(volatile long *);

struct RefPtr {
    RefObject *pointer;

    RefPtr() : pointer(0) {}
    RefPtr(const RefPtr &other) : pointer(0) {
        assign(other.pointer);
    }

    ~RefPtr() {
        if (pointer && InterlockedDecrement(&pointer->references) == 0) {
            pointer->release();
            if (pointer)
                delete pointer;
        }
    }

    void assign(RefObject *);
};

struct MaterialPtr;
typedef void (__thiscall *MaterialConstructor)(MaterialPtr *, void *);
extern MaterialConstructor constructMaterial;

struct MaterialPtr {
    MaterialPtr(void *material) {
        constructMaterial(this, material);
    }
    ~MaterialPtr();
    unsigned long storage;
};

struct Base {
    virtual ~Base();
};

struct Level : Base {
    bool enabled;
    RefPtr first;
    RefPtr second;
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float g;
    MaterialPtr material;

    Level(RefPtr, float, float, float, float, float, float, float);
    virtual ~Level();
};

Level::Level(RefPtr value, float av, float bv, float cv,
             float dv, float ev, float fv, float gv)
    : enabled(false),
      first(),
      second(value),
      a(av),
      b(bv),
      c(cv),
      d(dv),
      e(ev),
      f(fv),
      g(gv),
      material(0)
{
}
