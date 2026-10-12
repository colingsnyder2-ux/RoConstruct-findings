// from server: 77% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern char instanceType;
extern char partType;
extern float colorComponent0;
extern float colorComponent1;

struct Color {
    float x, y, z;
    Color(float, float, float);
};

__forceinline Color::Color(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Entry {
    void* object;
    Control* control;
};

struct Vector;

struct Proxy {
    Vector* owner;
};

struct Iterator {
    Proxy* proxy;
    Entry* current;

    Vector* owner() const;
    void* operator*() const;
    Iterator& operator++();
    bool operator!=(const Iterator&) const;
};

struct Vector {
    Proxy* proxy;
    char padding[8];
    Entry* first;
    Entry* last;

    Iterator begin();
    Iterator end();
};

__forceinline Iterator Vector::begin()
{
    Iterator result;
    result.current = first;
    if (result.current > last)
        _invalid_parameter_noinfo();
    result.proxy = proxy;
    return result;
}

__forceinline Iterator Vector::end()
{
    Iterator result;
    result.current = last;
    if (first > result.current)
        _invalid_parameter_noinfo();
    result.proxy = proxy;
    return result;
}

__forceinline Vector* Iterator::owner() const
{
    if (proxy)
        return proxy->owner;
    _invalid_parameter_noinfo();
    return 0;
}

__forceinline bool Iterator::operator!=(const Iterator& other) const
{
    if (!proxy || proxy != other.proxy)
        _invalid_parameter_noinfo();
    return current != other.current;
}

__forceinline void* Iterator::operator*() const
{
    if (current >= owner()->last)
        _invalid_parameter_noinfo();
    return current->object;
}

__forceinline Iterator& Iterator::operator++()
{
    if (current >= owner()->last)
        _invalid_parameter_noinfo();
    ++current;
    return *this;
}

struct RenderInterface {
    virtual void unused0();
    virtual void unused1();
    virtual void* get();
};

struct Context {
    char padding[0x154];
    Vector* selection;
    char gap[0x130];
    RenderInterface rendering;
};

struct Holder {
    Context* context;
    void* object;
    Control* control;

    Context* get(int);
    ~Holder();
};

__forceinline Holder::~Holder()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

struct Part {
    void* frame();
    int f();
};

extern void __cdecl draw(int, void*, void*, int, const Color*);

struct ResizeTool {
    char padding[0x14];
    Context* context;

    void render(int);
};

void ResizeTool::render(int argument)
{
    Holder holder = { context, 0, 0 };

    for (Iterator it = holder.get(1)->selection->begin();
         it != holder.get(1)->selection->end(); ++it) {
        Part* part = static_cast<Part*>(
            __RTDynamicCast(*it, 0, &instanceType, &partType, 0));

        if (part) {
            static Color color(colorComponent0, colorComponent1, 1.0f);
            draw(part->f(), part->frame(), context->rendering.get(),
                 argument, &color);
        }
    }
}
