// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl * _invalid_parameter_noinfo)();

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    RefCount* count;

    Shared();
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared() : object(0), count(0) {}

inline Shared::Shared(const Shared& other)
    : object(other.object), count(other.count)
{
    if (count)
        _InterlockedIncrement(&count->strong);
}

inline Shared::~Shared()
{
    if (count && _InterlockedDecrement(&count->strong) == 0) {
        count->dispose();
        if (_InterlockedDecrement(&count->weak) == 0)
            count->destroy();
    }
}

struct Vector {
    Vector** owner;
    unsigned char padding[8];
    Shared* first;
    Shared* last;

    unsigned size() const;
    const Shared& front() const;
};

inline unsigned Vector::size() const
{
    return static_cast<unsigned>(last - first);
}

inline const Shared& Vector::front() const
{
    Shared* position = first;
    void (__cdecl *invalid)() = _invalid_parameter_noinfo;
    if (position > last)
        invalid();

    Vector** proxy = owner;
    Vector* container = proxy ? *proxy : 0;
    if (!proxy)
        invalid();

    if (position >= container->last)
        invalid();
    return *position;
}

struct CopyVerb {
    unsigned char padding[0x154];
    Vector* selection;

    Shared first();
};

Shared CopyVerb::first()
{
    return selection->size() > 0 ? selection->front() : Shared();
}
