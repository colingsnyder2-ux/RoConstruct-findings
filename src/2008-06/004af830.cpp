// from server: 67% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle {
    void* object;
    Control* control;

    Handle(const Handle&);
    ~Handle();
};

inline Handle::Handle(const Handle& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Handle::~Handle()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Key {
    unsigned first;
    unsigned second;
};

struct Value {
    unsigned tag;
    Handle handle;

    Value(void*, Handle, int);
};

struct Result {
    Key key;
    Value value;

    Result(const Key&, const Value&);
};

inline Result::Result(const Key& k, const Value& v)
    : key(k), value(v)
{
}

Result __cdecl makeResult(Key key, void* input, Handle handle, int number)
{
    return Result(key, Value(input, handle, number));
}
