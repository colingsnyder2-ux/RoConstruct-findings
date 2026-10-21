// from server: 99% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espclaude_8e4c930f49cbe169.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/signals/slot.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/function.hpp>
#include <boost/bind.hpp>

struct Source {
    char padding[20];
    int target;
};

struct VirtualBase {
    int value;
};

typedef boost::signals::connection Result;
typedef boost::signals::scoped_connection Connection;
typedef boost::slot<boost::function<void()> > Function;

struct ManagerA {
    Result connect(void*, const Function&, int);
};

struct ManagerB {
    Result connect(void*, const Function&, int);
};

extern ManagerA managerA;
extern ManagerB managerB;

struct Tool : virtual VirtualBase {
    char padding0[0x104 - 4];
    Source* source;
    char padding1[0x218 - 0x108];
    Connection firstConnection;
    Connection secondConnection;

    void firstCallback();
    void secondCallback();
    void connectSignals();
};

void Tool::connectSignals()
{
    firstConnection = managerA.connect(source ? &source->target : 0, boost::bind(&Tool::firstCallback, this), 10);
    secondConnection = managerB.connect(source ? &source->target : 0, boost::bind(&Tool::secondCallback, this), 10);
}
