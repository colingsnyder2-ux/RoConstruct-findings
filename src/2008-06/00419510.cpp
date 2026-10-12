// from server: 99% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern void (__thiscall *copy_string)(void*, const void*);
extern void (__thiscall *destroy_string)(void*);

inline void add_reference(volatile long* references)
{
    _InterlockedExchangeAdd(references, 1);
}

inline long remove_reference(volatile long* references)
{
    return _InterlockedDecrement(references);
}

struct String {
    unsigned char data[28];
    String(const String&);
    ~String();
};

inline String::String(const String& other)
{
    copy_string(this, &other);
}

inline String::~String()
{
    destroy_string(this);
}

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    void release();
};

inline void Control::release()
{
    if (remove_reference(&strong) == 0) {
        dispose();
        if (remove_reference(&weak) == 0)
            destroy();
    }
}

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        add_reference(&control->strong);
}

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Wrapper {
    Shared shared;
    String string;
    Wrapper(Shared, String);
    Wrapper(const Wrapper&);
    ~Wrapper();
};

struct Result {
    int first;
    int second;
    Wrapper value;
    Result(int, int, const Wrapper&);
    ~Result();
};

inline Result::Result(int a, int b, const Wrapper& source)
    : first(a), second(b), value(source)
{
}

Result reconstruct(int a, int b, Shared shared, String string)
{
    return Result(a, b, Wrapper(shared, string));
}
