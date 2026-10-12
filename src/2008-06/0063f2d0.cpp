// from server: 78% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl *_invalid_parameter_noinfo)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern unsigned char instanceType;
extern unsigned char partType;

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Entry {
    void* object;
    RefCount* reference;
};

struct Vector;

struct Proxy {
    Vector* container;
};

struct Vector {
    Proxy* proxy;
    char padding[8];
    Entry* first;
    Entry* last;
};

struct Frame {
    char data[40];
};

struct Ray {
    char data[44];
    Frame& frame();
};

struct Camera {
    virtual void unused0();
    virtual void unused1();
    virtual Ray ray();
};

struct World {
    char padding0[0x154];
    Vector* objects;
    char padding1[0x288 - 0x158];
    Camera camera;
};

struct Context {
    World* world;
    void* object;
    RefCount* reference;
    World* get(int);
    ~Context();
};

Context::~Context()
{
    RefCount* p = reference;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

struct Part {
    int property();
    int f();
};

extern void __cdecl apply(int, int, int, int, const void*);

struct S {
    char padding[0x14];
    World* world;
    void f(int);
};

void S::f(int argument)
{
    Context context;
    context.world = world;
    context.object = 0;
    context.reference = 0;

    Vector* objects = context.get(1)->objects;
    Entry* position = objects->first;
    if (position > objects->last)
        _invalid_parameter_noinfo();
    Proxy* proxy = objects->proxy;

    for (;;) {
        objects = context.get(1)->objects;
        Entry* last = objects->last;
        if (objects->first > last)
            _invalid_parameter_noinfo();

        if (!proxy || proxy != objects->proxy)
            _invalid_parameter_noinfo();
        if (position == last)
            break;

        if (!proxy)
            _invalid_parameter_noinfo();
        Vector* container = proxy ? proxy->container : 0;
        if (position >= container->last)
            _invalid_parameter_noinfo();

        Part* part = static_cast<Part*>(
            __RTDynamicCast(position->object, 0,
                            &instanceType, &partType, 0));

        if (part) {
            apply(part->f(), part->property(), argument, 0,
                  world->camera.ray().frame().data + 0x24);
        }

        if (!proxy)
            _invalid_parameter_noinfo();
        container = proxy ? proxy->container : 0;
        if (position >= container->last)
            _invalid_parameter_noinfo();
        ++position;
    }
}
