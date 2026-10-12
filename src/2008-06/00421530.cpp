// from server: 93% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount
{
    long reserved;
    volatile long count;
};

struct Shared
{
    void* pointer;
    RefCount* control;

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
    {
        volatile long* count = &control->count;
        _InterlockedExchangeAdd(count, 1);
    }
}

struct Arguments
{
    Shared first;
    Shared second;
};

struct EventData;

struct Listener
{
    virtual void slot0();
    virtual void slot1();
    virtual void invoke(int value, Arguments args);
    void remove(EventData* data);
};

struct EventData
{
    int reserved0;
    int value;
    int reserved8;
    Listener* listener;
    Arguments args;

    void dispatch();
};

void EventData::dispatch()
{
    if (listener)
    {
        try
        {
            listener->remove(this);
            listener->invoke(value, args);
        }
        catch (...)
        {
        }
        listener = 0;
    }
}
