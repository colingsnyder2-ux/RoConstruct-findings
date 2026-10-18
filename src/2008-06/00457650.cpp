// from server: 52% by colin
struct EventData;

struct Listener
{
    void detach(EventData*);
};

struct SharedData
{
    void* object;
    void* control;
};

struct EventBase
{
    virtual ~EventBase();
};

struct EventData : EventBase
{
    void* field4;
    Listener* listener;
    SharedData data;

    virtual ~EventData();
};

__forceinline EventBase::~EventBase()
{
}

extern "C" void __cdecl copy_shared(SharedData*, SharedData*);

EventData::~EventData()
{
    Listener* l = listener;
    if (l)
    {
        l->detach(this);
        SharedData tmp;
        copy_shared(&tmp, &data);
        l->detach(this);
    }
}
