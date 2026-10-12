// from server: 93% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCount
{
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Action
{
    void invoke();
    void stop();
};

struct ActionCount
{
    RefCount* count;
    ActionCount& operator=(const ActionCount&);
};

struct SharedAction
{
    Action* value;
    ActionCount owner;
    SharedAction();
    ~SharedAction();
};

struct Auxiliary
{
    void set(int);
};

struct Signal
{
    void notify(int);
};

struct Instance
{
    char padding0[0x130];
    Signal signal;
    char padding1[0x20c - 0x130 - sizeof(Signal)];
    Action* action;
    ActionCount owner;
    char padding2[0x259 - 0x214];
    unsigned char enabled;

    Auxiliary* query();
    void update();
    void detach();
    void finish();
};

struct SharedInstance
{
    Instance* value;
    RefCount* count;
    SharedInstance(const SharedInstance&);
    ~SharedInstance();
};

struct Guard
{
    unsigned char storage[12];
    Guard(SharedInstance);
    ~Guard();
};

struct Notification
{
    void send(bool*);
};

struct Registration
{
    char padding[0x10];
    Notification notification;
};

struct Registry
{
    Registration* find(void*);
};

extern Registry registry;

inline SharedAction::SharedAction()
{
    value = 0;
    owner.count = 0;
}

inline SharedAction::~SharedAction()
{
    RefCount* p = owner.count;
    if (p)
    {
        volatile long* strong = &p->strong;
        if (_InterlockedDecrement(strong) == 0)
        {
            p->dispose();
            volatile long* weak = &p->weak;
            if (_InterlockedDecrement(weak) == 0)
                p->destroy();
        }
    }
}

inline SharedInstance::SharedInstance(const SharedInstance& other)
{
    value = other.value;
    count = other.count;
    if (count)
    {
        volatile long* p = &count->strong;
        _InterlockedExchangeAdd(p, 1);
    }
}

inline SharedInstance::~SharedInstance()
{
    RefCount* p = count;
    if (p)
    {
        volatile long* strong = &p->strong;
        if (_InterlockedDecrement(strong) == 0)
        {
            p->dispose();
            volatile long* weak = &p->weak;
            if (_InterlockedDecrement(weak) == 0)
                p->destroy();
        }
    }
}

void __cdecl function(SharedInstance instance, int stop)
{
    SharedAction action;
    Action* current;
    {
        Guard guard(instance);
        if (instance.value)
        {
            Auxiliary* auxiliary = instance.value->query();
            if (auxiliary)
                auxiliary->set(0);
        }

        instance.value->enabled = 0;
        action.value = instance.value->action;
        action.owner = instance.value->owner;
        current = action.value;
        current->invoke();
    }

    if (reinterpret_cast<bool&>(stop) && current)
        current->stop();

    {
        Guard guard(instance);
        Instance* currentInstance = instance.value;
        reinterpret_cast<bool&>(stop) = false;
        currentInstance->signal.notify(stop);

        Registration* registration = registry.find(
            currentInstance ? reinterpret_cast<char*>(currentInstance) + 0x14 : 0);
        if (registration)
            registration->notification.send(reinterpret_cast<bool*>(&stop));

        instance.value->update();
        instance.value->detach();
        instance.value->finish();
    }
}
