// from server: 76% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Object {
    void setEnabled(bool);
};

struct Shared {
    Object* const object;
    Control* const control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) - 1 == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) - 1 == 0)
            p->destroy();
    }
}

struct Entry {
    Object* object;
    Control* control;
    Shared lock();
};

struct Container {
    unsigned reserved[3];
    Entry* first;
    Entry* last;
};

extern void __cdecl prepare(Container*);
extern bool __cdecl predicate(Shared);

void __cdecl update(Container* container)
{
    prepare(container);
    for (unsigned i = 0; i < (unsigned)(container->last - container->first); ++i) {
        if (i >= (unsigned)(container->last - container->first))
            _invalid_parameter_noinfo();

        const Shared value = container->first[i].lock();
        if (predicate(value))
            value.object->setEnabled(true);
    }
}
