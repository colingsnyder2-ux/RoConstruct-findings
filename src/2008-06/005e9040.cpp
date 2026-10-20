// from server: 94% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_physics_1c33a65e5bc652c3.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
struct Object {};
struct Derived : Object {};
typedef boost::shared_ptr<Derived> FactoryShared;
typedef boost::shared_ptr<Object> Shared;
FactoryShared __cdecl makeShared(void*);

struct Event {
    void invoke(void*, Shared);
};

extern Event event;

struct Collection {
    void remove(void**);
};

struct S {
    char padding[0x138];
    Collection collection;

    void f(void*);
};

void S::f(void* value)
{
    collection.remove(&value);
    void* owner = this ? reinterpret_cast<char*>(this) + 0x14 : 0;
    event.invoke(owner, makeShared(value));
}
