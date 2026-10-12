// from server: 92% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Collection;

struct Proxy {
    Collection* owner;
    Proxy(Collection*);
};

inline Proxy::Proxy(Collection* p) : owner(p) {}

struct ProxyOwner {
    Proxy* proxy;
    ProxyOwner(Collection*);
    ~ProxyOwner();
};

inline ProxyOwner::ProxyOwner(Collection* p) : proxy(new Proxy(p)) {}

struct Collection : ProxyOwner {
    unsigned int reserved[2];
    Shared* first;
    Shared* last;
    Shared* limit;
    Collection();
    ~Collection();
};

inline Collection::Collection()
    : ProxyOwner(this), first(0), last(0), limit(0)
{
}

extern void __cdecl collect(void*, Collection*);

struct Filter {
    virtual void unused();
    virtual int apply(void*);
};

struct SingleFilter : Filter {
    unsigned char storage[64];
    SingleFilter(void*, void*, void*, Shared);
};

struct MultipleFilter : Filter {
    unsigned char storage[52];
    MultipleFilter(void*, void*, Collection*, void*);
};

int __cdecl makeFilter(void* a, void* b, void* source, void* value,
                       void* context, Shared shared)
{
    Collection collection;
    collect(source, &collection);

    Filter* filter;
    if (collection.last - collection.first == 1)
        filter = new SingleFilter(a, b, context, shared);
    else
        filter = new MultipleFilter(a, b, &collection, context);

    return filter->apply(value);
}
