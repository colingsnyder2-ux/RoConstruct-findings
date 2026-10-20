// from server: 93% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_connectionassign_9c16584cc999c488.cpp

// Candidate translation unit (score above; library headers required).
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

typedef boost::slot<boost::function<void()> > Function;
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
    {
        Function function(boost::bind(&S::firstCallback,this));
        assign(firstConnection, managerA.connect(
            object ? static_cast<unsigned char*>(object) + 20 : 0,
            function, 10));
    }
    {
        Function function(boost::bind(&S::secondCallback,this));
        assign(secondConnection, managerB.connect(
            object ? static_cast<unsigned char*>(object) + 20 : 0,
            function, 10));
    }
}