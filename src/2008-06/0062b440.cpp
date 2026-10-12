// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strong;
    volatile long weak;
};

struct Pair
{
    void* object;
    Control* control;

    Pair(const Pair& other);
    ~Pair();
};

inline Pair::Pair(const Pair& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Pair::~Pair()
{
    Control* c = control;
    if (c)
    {
        if (_InterlockedDecrement(&c->strong) == 0)
        {
            c->dispose();
            if (_InterlockedDecrement(&c->weak) == 0)
                c->destroy();
        }
    }
}

struct Result
{
    void* value;
    Result();
};

struct Emitter
{
    Result invoke(Pair value, float amount);
};

struct Object
{
    unsigned char reserved[16];
    Emitter emitter;
};

struct S
{
    Object* lookup(void* key);
    void f(void* key, Pair value, float amount);
};

void S::f(void* key, Pair value, float amount)
{
    Object* object = lookup(key);
    if (object)
        object->emitter.invoke(value, amount);
}
