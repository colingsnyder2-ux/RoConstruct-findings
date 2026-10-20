// from server: 99% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_binder_ba90486a32d74eb5.cpp

// Candidate translation unit (score above; library headers required).
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct ProductPart {
    void finish();
};

struct Product {
    unsigned char padding[20];
    ProductPart part;
};

#include <boost/shared_ptr.hpp>
#include <boost/bind.hpp>
typedef boost::shared_ptr<Product> Shared;

#include <boost/signals/connection.hpp>
typedef boost::signals::connection Result;
typedef boost::signals::scoped_connection Connection;

extern "C" void __cdecl callback(void*, void*);

typedef boost::_bi::bind_t<void, void (__cdecl*)(void*, void*),
    boost::_bi::list2<boost::_bi::value<void*>, boost::_bi::value<void*> > > Functor;

struct Function {
    unsigned char storage[40];

    Function(const Functor&);
    ~Function();
};

struct Manager {
    Result connect(ProductPart*, const Function&, int);
};

extern Manager manager;

struct Binder {
    Shared owner;
    void* context;
    Connection connection;

    Binder(Shared, void*, void*);
};

Binder::Binder(Shared value, void* first, void* second)
    : owner(value), context(first) {
    Function function(boost::bind(callback, first, second));
    connection = manager.connect(
        value.get() ? &value.get()->part : 0, function, 10);
}