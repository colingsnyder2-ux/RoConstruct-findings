// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Reference
{
    Control* control;
    Reference& operator=(const Reference&);
    ~Reference();
};

struct Pair
{
    void* value;
    Reference reference;
    Pair& operator=(const Pair&);
    ~Pair();
};

struct Owner
{
    unsigned char padding[0x104];
    void* source;
};

extern Pair __cdecl fetch(void*);
extern unsigned char property;

struct S
{
    void* first;
    Owner* owner;
    unsigned long reserved;
    int state;
    Pair cached;

    void notify(const void*);
    void update(const void*);
};

__forceinline Reference::~Reference()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

__forceinline Pair::~Pair()
{
}

__forceinline Pair& Pair::operator=(const Pair& other)
{
    value = other.value;
    reference = other.reference;
    return *this;
}

void S::update(const void* key)
{
    notify(key);
    if (state != 1)
    {
        state = 2;
        return;
    }

    if (key == &property)
        cached = fetch(owner->source);
}
