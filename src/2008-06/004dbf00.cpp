// from server: 73% by king_originala
extern "C" {
    extern long (__stdcall *InterlockedDecrement)(volatile long *);
}

struct Vector3 {
    float x, y, z;
    Vector3(const Vector3 &);
};

inline Vector3::Vector3(const Vector3 &v)
    : x(v.x), y(v.y), z(v.z) {}

struct Color4 {
    float r, g, b, a;
    Color4 &operator=(const Color4 &);
};

inline Color4 &Color4::operator=(const Color4 &v)
{
    r = v.r;
    g = v.g;
    b = v.b;
    a = v.a;
    return *this;
}

struct StateBlock {
    char data[248];
    StateBlock(const StateBlock &);
    ~StateBlock();
};

struct Handle {
    void *pointer;
    Handle();
    Handle(const Handle &);
};

inline Handle::Handle() : pointer(0) {}
inline Handle::Handle(const Handle &v) : pointer(v.pointer) {}

struct Renderer {
    virtual void reserved() = 0;
    virtual void configure(Handle, StateBlock, Vector3, Vector3) = 0;
    char padding[16];
    Color4 color;
};

struct Image {
    virtual ~Image();
    volatile long references;
    void release();
};

struct Scene {
    char padding[0x130];
    StateBlock state;
    Vector3 first;
    Vector3 second;
    char gap[4];
    Color4 color;
};

struct Provider {
    Scene *getScene();
};

struct S {
    char padding0[8];
    Renderer *renderer;
    char padding1[8];
    Provider *provider;
    char padding2[0x30];
    Image *image;
    void f();
};

void S::f()
{
    Scene *scene = provider ? provider->getScene() : 0;
    Renderer *target = renderer;

    target->configure(Handle(), scene->state, scene->first, scene->second);

    if (image) {
        if (InterlockedDecrement(&image->references) == 0) {
            image->release();
            if (image)
                delete image;
        }
        image = 0;
    }

    renderer->color = scene->color;
}
