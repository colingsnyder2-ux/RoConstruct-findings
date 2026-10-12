// from server: 77% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Counter {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reset {
    void* first;
    void* second;
    ~Reset();
};

struct Object {
    char padding1[0x14];
    Reset reset;
    char padding2[0x148];
    void* owner;
};

struct Shared {
    Object* object;
    Counter* counter;
    ~Shared();
};

inline Shared::~Shared()
{
    Counter* p = counter;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

struct First {
    virtual ~First();
};

struct Second {
    virtual ~Second();
};

struct Base : First, Second {
    char padding[0x14];
    virtual ~Base();
};

struct S : Base {
    Shared shared;
    virtual ~S();
};

S::~S()
{
    shared.object->owner = 0;
    shared.object->reset.~Reset();
}
