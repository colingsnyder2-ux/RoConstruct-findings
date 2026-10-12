// from server: 82% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& source)
    : pointer(source.pointer), control(source.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

__forceinline Shared::~Shared()
{
    if (control)
        control->release();
}

struct String {
    unsigned char storage[28];

    __declspec(dllimport) String(const String&);
    __declspec(dllimport) ~String();
};

struct Base {
    unsigned char storage[20];

    ~Base();
};

struct Value : Base {
    String text;

    Value(Shared, Shared, int, String);
    Value(const Value&);
    ~Value();
};

__forceinline Value::~Value()
{
}

struct Result {
    int first;
    int second;
    Value value;

    Result(int, int, const Value&);
};

__forceinline Result::Result(int a, int b, const Value& source)
    : first(a), second(b), value(source)
{
}

Result __cdecl reconstruct(int a, int b, Shared first, Shared second,
                           int option, String text)
{
    return Result(a, b, Value(first, second, option, text));
}
