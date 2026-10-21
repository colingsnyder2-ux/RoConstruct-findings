// from server: 99% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espclaude_ec29278c295eeeec.cpp

// Candidate translation unit (score above; library headers required).
#define _DLL
#include <boost/signals/slot.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/function.hpp>
#include <boost/bind.hpp>
typedef boost::shared_ptr<void> Shared;
Shared __cdecl makeShared(void*);
extern const float initialValue;

struct Base {
    virtual void virtualFunction();
    unsigned char storage[212];
    Base(float, const Shared&, void*);
    ~Base();
};

typedef boost::signals::connection Result;
typedef boost::signals::scoped_connection Connection;
struct S : Base {
    Shared owner;
    Connection firstConnection;
    Connection secondConnection;

    S(void*, void*, void*);
    virtual void virtualFunction();
    void firstCallback();
    void secondCallback();
};

typedef boost::slot<boost::function<void(Shared)> > Function;
struct ManagerA {
    Result connect(void*, const Function&, int);
};

struct ManagerB {
    Result connect(void*, const Function&, int);
};

extern ManagerA managerA;
extern ManagerB managerB;

inline void assign(Connection& c, const Result& r) { c=r; }
S::S(void* object, void* baseObject, void* argument)
    : Base(initialValue, makeShared(baseObject), argument),
      owner(makeShared(object))
{
    firstConnection = managerA.connect(
            object ? static_cast<unsigned char*>(object) + 20 : 0,
            boost::bind(&S::firstCallback,this), 10);
    secondConnection = managerB.connect(
            object ? static_cast<unsigned char*>(object) + 20 : 0,
            boost::bind(&S::secondCallback,this), 10);
}
