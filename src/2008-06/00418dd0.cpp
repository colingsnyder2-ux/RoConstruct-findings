// from server: 71% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual ~Control();
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
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Pair::~Pair()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0)
    {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct String
{
    unsigned long storage[7];

    String(const String&);
    ~String();
};

struct Base
{
    unsigned char storage[20];

    Base(Pair, Pair, int);
};

struct S : Base
{
    String name;

    S(Pair, Pair, int, String);
};

S::S(Pair a, Pair b, int value, String text)
    : Base(a, b, value), name(text)
{
}
