// from server: 81% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct Holder
{
    void* object;
    Control* control;

    ~Holder();
};

__forceinline Holder::~Holder()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0)
    {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct S;

struct Registry
{
    void disconnect(S*);
};

struct Member
{
    unsigned long storage;
    ~Member();
};

struct Base
{
    virtual ~Base();
};

__forceinline Base::~Base()
{
}

struct S : Base
{
    Holder owner;
    Registry* registry;
    Member member;

    virtual ~S();
};

S::~S()
{
    if (registry)
        registry->disconnect(this);
}
