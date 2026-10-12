// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

typedef unsigned int size_t;

inline void* __cdecl operator new(size_t, void* p)
{
    return p;
}

struct Control
{
    long reserved;
    volatile long references;
};

struct Value
{
    unsigned int first;
    unsigned int second;
    unsigned int third;
    Control* control;

    Value(const Value& other)
        : first(other.first), second(other.second),
          third(other.third), control(other.control)
    {
        if (control)
        {
            volatile long* count = &control->references;
            _InterlockedExchangeAdd(count, 1);
        }
    }
};

bool __cdecl func_0060a2f0();
extern unsigned char type_tag;

struct Holder
{
    const void* type;
    unsigned int reserved;
    Value value;

    void assign(const Value& source);
};

void Holder::assign(const Value& source)
{
    typedef bool (__cdecl *Predicate)(const Value&);
    if (!((Predicate)&func_0060a2f0)(source))
    {
        new (&value) Value(source);
        type = &type_tag;
    }
    else
    {
        type = 0;
    }
}
