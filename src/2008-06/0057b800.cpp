// from server: 99% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_datamodelstop_be4f7b9ec1d4d997.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
struct Action
{
    void invoke();
    void stop();
};

typedef boost::detail::shared_count ActionCount;
struct SharedAction { Action* value; ActionCount owner; SharedAction() : value(0) {} };

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

struct SharedInstance { Instance* value; boost::detail::shared_count count; };

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
