// from server: 96% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_toolstatereturnvalue83d8b4fa8f422fda.cpp

// Candidate translation unit (score above; library headers required).
#define NDEBUG
#include <boost/shared_ptr.hpp>
typedef boost::shared_ptr<void> Shared;
struct Empty{Empty(){}};
struct Signal
{
    Empty invoke();
};

struct Entry
{
    char padding[0x10];
    Signal signal;
};

struct Descriptor
{
    void bind(void*, Shared);
    Entry* find(void*);
    void fire(void* p){Entry* entry=find(p);if(entry){entry->signal.invoke();}}
};

extern Descriptor enteredDescriptor;
extern Descriptor activeDescriptor;
extern Descriptor inactiveDescriptor;
extern Descriptor leftDescriptor;

struct Workspace
{
    void reset();
};

struct Prefix{char padding[0x14];};
struct Identity{char padding[0x198];};
struct S:Prefix,Identity
{
    Workspace* workspace;
    char padding1[0x14];
    int state;
    char padding2[0x38];
    int connected;

    void prepare();
    boost::shared_ptr<S> getShared();
    void setState(int);
};

void S::setState(int value)
{
    const int next = value;

    if (state < 5 && next >= 5)
    {
        prepare();
        enteredDescriptor.bind(static_cast<Identity*>(this), getShared());
    }

    if (next == 6)
    {
        activeDescriptor.fire(static_cast<Identity*>(this));
    }

    if (state == 6)
    {
        inactiveDescriptor.fire(static_cast<Identity*>(this));
    }

    if (state >= 5 && next < 5)
    {
        leftDescriptor.fire(static_cast<Identity*>(this));

        if (connected)
        {
            connected = 0;
            workspace->reset();
            workspace = 0;
        }
    }

    state = next;
}