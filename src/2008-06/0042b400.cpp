// from server: 59% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern void* __cdecl operator new(unsigned int);

struct Object {
    virtual ~Object();
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    Reference(Object*);
    ~Reference();
};

inline Reference::~Reference()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

extern void __cdecl func_0047d410(Reference*, Object*, Object*);

struct Shared {
    Object* object;
    Reference reference;
    Shared(Object*);
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(Object* p) : object(p), reference(p)
{
    func_0047d410(&reference, p, p);
}

inline Shared::~Shared()
{
}

struct Owner {
    Object* object;
    Owner(const Owner&);
    ~Owner();
};

inline Owner::~Owner()
{
    if (object)
        delete object;
}

struct Node {
    unsigned char padding[8];
    int count;
};

struct SourceData {
    unsigned char padding[28];
    Node* node;
};

struct Source {
    SourceData* data;
    Control* control;
    Owner owner;
};

struct Result {
    unsigned int unused;
    void* first;
    void* second;
    unsigned char active;
};

struct Dispatcher {
    Result* invoke(Result*, Owner*, int*, Shared, int);
};

struct S {
    Dispatcher* dispatcher;
    Result* f(Result*, Object* const*, Source*, int);
};

Result* S::f(Result* result, Object* const* value, Source* source, int argument)
{
    if (!source->data->node || !source->data->node->count) {
        result->first = 0;
        result->second = 0;
        result->active = 0;
        return result;
    }

    int mode = 3;
    Object* p = 0;
    void* storage = operator new(4);
    if (storage) {
        *static_cast<Object**>(storage) = *value;
        p = static_cast<Object*>(storage);
    }

    Shared shared(p);
    Owner owner(source->owner);
    dispatcher->invoke(result, &owner, &mode, *reinterpret_cast<Shared*>(source), argument);
    return result;
}
