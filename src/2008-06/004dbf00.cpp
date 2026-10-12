// from server: 58% by king_originala
extern "C" {
    extern long (__stdcall *InterlockedDecrement)(volatile long *);
}

struct Vector3 {
    float x, y, z;
    Vector3(float a, float b, float c) : x(a), y(b), z(c) {}
    Vector3(const Vector3 &v) : x(v.x), y(v.y), z(v.z) {}
    ~Vector3() {}
};

struct Color4 {
    float r, g, b, a;
    Color4(float x, float y, float z, float w) : r(x), g(y), b(z), a(w) {}
    Color4 &operator=(const Color4 &v) {
        r = v.r;
        g = v.g;
        b = v.b;
        a = v.a;
        return *this;
    }
};

struct StateBlock {
    char data[248];
    StateBlock(const StateBlock &);
};

struct Handle {
    void *pointer;
    Handle() : pointer(0) {}
    Handle(const Handle &v) : pointer(v.pointer) {}
    ~Handle() {}
};

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
    float firstX, firstY, firstZ;
    float secondX, secondY, secondZ;
    char gap[4];
    float red, green, blue, alpha;
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

    renderer->configure(
        Handle(),
        scene->state,
        Vector3(scene->firstX, scene->firstY, scene->firstZ),
        Vector3(scene->secondX, scene->secondY, scene->secondZ));

    if (image) {
        if (InterlockedDecrement(&image->references) == 0) {
            image->release();
            if (image)
                delete image;
        }
        image = 0;
    }

    renderer->color = Color4(scene->red, scene->green, scene->blue, scene->alpha);
}
