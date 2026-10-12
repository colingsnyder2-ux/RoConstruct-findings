// from server: 84% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long use_count;
    volatile long weak_count;
};

struct State
{
    unsigned char padding[0x138];
    int enabled;
};

struct Object
{
    State* getState();
};

struct Result
{
    Object* object;
    Control* control;
    State* getState() const;
    ~Result();
};

inline State* Result::getState() const
{
    return object ? object->getState() : 0;
}

inline Result::~Result()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->use_count, -1) == 1)
    {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak_count, -1) == 1)
            p->destroy();
    }
}

struct Pair
{
    Object* object;
    Control* control;
    Pair(const Result& other);
    ~Pair();
};

inline Pair::Pair(const Result& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->use_count, 1);
}

inline Pair::~Pair()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->use_count, -1) == 1)
    {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak_count, -1) == 1)
            p->destroy();
    }
}

struct Source
{
    Result get();
};

struct Guard
{
    unsigned char storage[12];
    Guard(Pair value);
    ~Guard();
};

struct Callback
{
    virtual void setEnabled(int value);
};

struct S
{
    unsigned char padding[0x94];
    Source* source;
    Result get();
    void f(Callback* callback);
};

void S::f(Callback* callback)
{
    Guard guard(source->get());

    State* state = get().getState();

    int enabled;
    if (state && state->enabled)
        enabled = 1;
    else
        enabled = 0;

    callback->setEnabled(enabled);
}
