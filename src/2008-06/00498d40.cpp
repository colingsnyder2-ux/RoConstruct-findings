// from server: 95% by king_originala
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
};

struct Shared {
    void* pointer;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

struct String {
    char storage[28];
    String(const String&);
    ~String();
};

extern void (__thiscall* string_copy)(String*, const String*);
extern void (__thiscall* string_destroy)(String*);

struct Function {
    char storage[36];
    Function(Shared, String);
    Function(const Function&);
    ~Function();
};

struct Result {
    void* pointer;
    Function function;
    Result(void*, const Function&);
    ~Result();
};

__forceinline String::String(const String& other)
{
    string_copy(this, &other);
}

__forceinline String::~String()
{
    string_destroy(this);
}

__forceinline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

__forceinline Shared::~Shared()
{
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

__forceinline Result::Result(void* p, const Function& f)
    : pointer(p), function(f)
{
}

__forceinline Result::~Result()
{
}

Result reconstruct(void* pointer, Shared shared, String text)
{
    return Result(pointer, Function(shared, text));
}
