// from server: 90% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long references;
    volatile long weakReferences;
};

struct Value
{
    void *first;
    void *second;
    Control *control;

    Value(const Value &other);
    ~Value();
};

__forceinline Value::Value(const Value &other)
    : first(other.first), second(other.second), control(other.control)
{
    if (control)
    {
        volatile long *counter = &control->references;
        _InterlockedExchangeAdd(counter, 1);
    }
}

__forceinline Value::~Value()
{
    Control *p = control;
    if (p)
    {
        if (_InterlockedExchangeAdd(&p->references, -1) == 1)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weakReferences, -1) == 1)
                p->destroy();
        }
    }
}

struct ExceptionObject
{
    unsigned long words[10];

    ExceptionObject();
    ~ExceptionObject();
};

__declspec(noreturn) void __cdecl raise_exception(const void *);

struct Operations
{
    void *unused;
    bool (__cdecl *invoke)(void *, Value, Value);
};

struct S
{
    Operations *operations;
    unsigned long reserved;
    unsigned char storage[1];

    bool invoke(Value first, Value second);
};

bool S::invoke(Value first, Value second)
{
    if (!operations)
        raise_exception(&ExceptionObject());

    return operations->invoke(storage, first, second);
}
