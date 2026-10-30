// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_finish_0c14e773d5c0ba02.cpp

// Candidate translation unit (score above; library headers required).
#include <typeinfo>
#include <boost/shared_ptr.hpp>
namespace RBX { class Instance; }
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


struct bad_any_cast : std::bad_cast {
    bad_any_cast();
};

bad_any_cast::bad_any_cast() : std::bad_cast("bad cast") {}

__declspec(noreturn) void __cdecl raise_bad_cast(const void*);

struct Counted {
    void* vtable;
    volatile long references;
};

struct Shared {
    void* volatile object;
    Counted* count;

    Shared(const Shared&);
    ~Shared();
};

Shared::Shared(const Shared& other)
    : object(other.object), count(other.count)
{
    if (count)
        _InterlockedIncrement(&count->references);
}

struct Placeholder {
    virtual ~Placeholder();
    virtual const type_info& type() const = 0;
};

struct Holder : Placeholder {
    Shared value;
};

struct Any {
    Placeholder* content;
};

Shared __cdecl cast_shared(const Any* source)
{
    Shared* result = 0;

    if (source) {
        const type_info& type =
            source->content ? source->content->type() : typeid(void);

        if (type == typeid(boost::shared_ptr<RBX::Instance>))
            result = &static_cast<Holder*>(source->content)->value;
    }

    if (!result) {
        bad_any_cast error;
        raise_bad_cast(&error);
    }

    return *result;
}
