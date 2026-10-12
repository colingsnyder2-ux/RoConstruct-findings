// from server: 82% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

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
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Handle::~Handle()
{
    Control* p = control;
    if (p) {
        volatile long* count = &p->strong;
        if (_InterlockedDecrement(count) == 0) {
            p->dispose();
            volatile long* weakCount = &p->weak;
            if (_InterlockedDecrement(weakCount) == 0)
                p->destroy();
        }
    }
}

struct Input {
    void* pointer;
    Input(const Input&);
    ~Input();
};

inline Input::Input(const Input& other)
    : pointer(other.pointer)
{
}

inline Input::~Input()
{
}

struct Key {
    unsigned first;
    unsigned second;
};

struct Value {
    unsigned tag;
    Handle handle;
    Value(Input, Handle, int);
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

Result __cdecl makeResult(Key key, Input input, Handle handle, volatile int number)
{
    return Result(key, Value(input, handle, number));
}
