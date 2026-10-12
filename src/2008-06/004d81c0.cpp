// from server: 37% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern void* __cdecl operator new(unsigned int);
extern void __cdecl operator delete(void*);

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Count {
    Control* control;
    explicit Count(int*);
    __forceinline ~Count();
};

__forceinline Count::~Count()
{
    if (control && _InterlockedExchangeAdd(&control->strong, -1) == 0) {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 0)
            control->destroy();
    }
}

struct Key {
    int* value;
    Count count;
    __forceinline explicit Key(const int*);
};

__forceinline Key::Key(const int* p)
    : value(new int(*p)), count(value)
{
}

extern void __cdecl func_0047d410(Count*, int*, int*);

struct Object {
    virtual ~Object();
};

struct Owner {
    Object* object;
    explicit Owner(const void*);
    __forceinline ~Owner();
};

__forceinline Owner::~Owner()
{
    delete object;
}

struct Node {
    unsigned char padding[8];
    int size;
};

struct Entity {
    unsigned char padding[28];
    Node* node;
};

struct Shared {
    Entity* object;
    Count count;
};

struct Holder {
    Entity* object;
    Control* control;
    Shared get() const;
};

struct Result {
    int unused;
    void* first;
    void* second;
    bool success;
    __forceinline Result(void*, void*, bool);
    ~Result();
};

__forceinline Result::Result(void* a, void* b, bool c)
    : first(a), second(b), success(c)
{
}

struct Backend {
    Result insert(const Owner&, const Key&, Shared, int);
};

struct S {
    Backend* backend;
    Result f(const int*, const Holder&, int);
};

Result S::f(const int* key, const Holder& object, int flags)
{
    Node* node = object.object->node;
    if (!node || !node->size)
        return Result(0, 0, false);

    Key stored(key);
    func_0047d410(&stored.count, stored.value, stored.value);
    Owner owner(reinterpret_cast<const unsigned char*>(&object) + 8);
    return backend->insert(owner, stored, object.get(), flags);
}
