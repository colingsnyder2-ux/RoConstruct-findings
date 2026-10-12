// from server: 98% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
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
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Storage {
    void* first;
    void* last;
    void* limit;

    Storage();
};

inline Storage::Storage()
    : first(0), last(0), limit(0)
{
}

struct Member {
    char storage[16];
    Member(void*, Shared);
};

struct Holder : Storage {
    char padding[4];
    Member member;
    unsigned long field20;
    unsigned long field24;

    Holder(void*, Shared);
};

Holder::Holder(void* argument, Shared value)
    : Storage(), member(argument, value), field20(0), field24(0)
{
}
