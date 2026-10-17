// from server: 41% by colin
struct EventData;

struct Listener
{
    void detach(EventData*);
};

struct RefCount
{
    virtual ~RefCount();
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strong;
    volatile long weak;
};

struct SharedData
{
    void* object;
    RefCount* control;
};

struct EventBase
{
    virtual ~EventBase();
};

struct EventData : EventBase
{
    SharedData data;
    Listener* listener;

    virtual ~EventData();
};

__forceinline EventBase::~EventBase()
{
}

EventData::~EventData()
{
    if (listener)
        listener->detach(this);

    RefCount* p = data.control;
    if (p)
    {
        if (--p->strong == 0)
        {
            p->dispose();
            if (--p->weak == 0)
                p->destroy();
        }
    }
}
