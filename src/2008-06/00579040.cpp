// from server: 81% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct StringData;
typedef void (__thiscall *StringCopyFunction)(StringData*, const StringData*);
extern StringCopyFunction stringCopy;

struct StringData {
    unsigned char storage[28];
};

struct Argument {
    StringData text;
    unsigned long extra;

    Argument(const Argument& other);
};

inline Argument::Argument(const Argument& other)
{
    stringCopy(&text, &other.text);
    extra = other.extra;
}

struct Provider {
    const Argument& get();
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;

    void assign(const Shared& other);
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Result {
    void* type;
    Shared value;
};

extern void* __cdecl getType();

typedef Shared* (__thiscall *Callback)(void*, Shared*, Argument);

struct S {
    unsigned char reserved[56];
    Callback callback;
    int adjustment;

    void f(void* object, Result* result, Provider* provider);
};

void S::f(void* object, Result* result, Provider* provider)
{
    Shared temporary;
    Shared* value = callback(
        static_cast<unsigned char*>(object) + adjustment,
        &temporary,
        provider->get());
    result->type = getType();
    result->value.assign(*value);
}
