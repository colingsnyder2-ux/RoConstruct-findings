// from server: 64% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Count {
    virtual ~Count();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    long use_count;
    long weak_count;
};

struct State {
    unsigned char padding[0x1b4];
    int value;
};

struct Object {
    State* state();
};

struct Shared {
    Object* pointer;
    Count* count;
    ~Shared();
};

inline Shared::~Shared()
{
    Count* p = count;
    if (p && _InterlockedExchangeAdd(&p->use_count, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak_count, -1) == 0)
            p->destroy();
    }
}

struct GuardShared {
    Object* pointer;
    Count* count;
    GuardShared(const Shared& other);
    ~GuardShared();
};

inline GuardShared::GuardShared(const Shared& other)
    : pointer(other.pointer), count(other.count)
{
    if (count)
        _InterlockedExchangeAdd(&count->use_count, 1);
}

inline GuardShared::~GuardShared()
{
    Count* p = count;
    if (p && _InterlockedExchangeAdd(&p->use_count, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak_count, -1) == 0)
            p->destroy();
    }
}

struct Source {
    Shared get();
};

struct Guard {
    unsigned char storage[12];
    Guard(GuardShared value);
    ~Guard();
};

struct Receiver {
    virtual void set(int value) = 0;
};

struct S {
    unsigned char padding[0x94];
    Source* source;
    Shared get();
    void f(Receiver* receiver);
};

void S::f(Receiver* receiver)
{
    Guard guard(source->get());
    receiver->set(get().pointer->state()->value == 1);
}
