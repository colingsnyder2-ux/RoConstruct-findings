// from server: 68% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern void* __cdecl operator new(unsigned int);

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct ControlRef {
    Control* value;
    ControlRef(int*);
    ~ControlRef();
};

__forceinline ControlRef::~ControlRef()
{
    Control* p = value;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

extern void __cdecl initializeOwner(ControlRef*, int*, int*) throw();

struct Shared {
    int* value;
    ControlRef control;
    explicit Shared(int*);
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(int* p) : value(p), control(p)
{
    initializeOwner(&control, p, p);
}

__forceinline Shared::~Shared()
{
}

struct Owned {
    virtual ~Owned();
};

struct OwnedRef {
    Owned* value;
    explicit OwnedRef(void*);
    ~OwnedRef();
};

__forceinline OwnedRef::~OwnedRef()
{
    if (value)
        delete value;
}

struct Metadata {
    char padding[8];
    int enabled;
};

struct Holder {
    char padding[28];
    Metadata* metadata;
};

struct Input {
    Holder* holder;
    int reserved;
    char storage[4];
    Shared get();
};

struct Result {
    int reserved;
    void* first;
    void* second;
    bool valid;
    Result();
    ~Result();
};

__forceinline Result::Result() : first(0), second(0), valid(false)
{
}

struct Engine {
    Result make(OwnedRef*, int*, Shared, int);
};

struct S {
    Engine* engine;
    Result f(const int*, Input*, int);
};

Result S::f(const int* source, Input* input, int argument)
{
    Metadata* metadata = input->holder->metadata;
    if (!metadata || !metadata->enabled)
        return Result();

    int operation = 3;
    Shared shared(new int(*source));
    OwnedRef owned(input->storage);
    return engine->make(&owned, &operation, input->get(), argument);
}
