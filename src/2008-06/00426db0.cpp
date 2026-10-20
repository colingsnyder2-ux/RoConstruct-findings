// from server: 92% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_parentowner_b902d97d290bd1a2.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
// from server: 82% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S;
typedef boost::shared_ptr<S> Shared;

struct Temporary {
    char storage[24];
    Temporary();
    ~Temporary();
    void assign(Shared*);
};

struct S {
    char padding[0x104];
    S* parent;

    bool f(S*);
    void setParent(S*);
    void notify(Temporary*, S*, bool, bool);
};

extern S* __cdecl lookup(S*);

void __cdecl updateParent(S* parent, Shared node)
{
    if (node->parent == parent)
        return;

    S* target = lookup(parent);
    if (target && !node->f(target)) {
        Temporary temporary;
        temporary.assign(&node);
        target->notify(&temporary, target, true, true);
    }
    node->setParent(parent);
}
