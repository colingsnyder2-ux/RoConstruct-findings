// from server: 96% by colin
// from server: 0% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_eventdispatch_e4252a803aebcc74.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
typedef boost::shared_ptr<void> Shared;
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
