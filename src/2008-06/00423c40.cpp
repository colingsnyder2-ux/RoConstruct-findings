// from server: 93% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_treefind_c01c84601aa008b4.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
struct Result {
    void* data;
    unsigned int position;
};

struct CopyVerb {
    void* data;
    unsigned int position;
    Result* get();
    Result* f();
};

struct Object {
    bool contains(Result first, Result last);
};

struct Entry { unsigned int reserved[3]; boost::shared_ptr<Object> shared; };
#define SLOT(n) virtual void slot##n();
#define FOUR(n) SLOT(n##0) SLOT(n##1) SLOT(n##2) SLOT(n##3)
#define TEN(n) FOUR(n) SLOT(n##4) SLOT(n##5) SLOT(n##6) SLOT(n##7) SLOT(n##8) SLOT(n##9)

struct CSelectionTreeCtrl {
    TEN(0)
    TEN(1)
    TEN(2)
    TEN(3)
    TEN(4)
    TEN(5)
    TEN(6)
    TEN(7)
    FOUR(8)
    virtual CopyVerb range();
    Entry* lookup(void* item);
    void* find(void* item);
};

#undef TEN
#undef FOUR
#undef SLOT

void* CSelectionTreeCtrl::find(void* item)
{
    if (!item)
        return 0;

    Entry* entry = lookup(item);
    if (entry) {
        boost::shared_ptr<Object> held(entry->shared);
        Object* object = held.get();
        if (object) {
            Result* last = range().f();
            Result* first = range().get();
            if (object->contains(*first, *last))
                return item;
        }
    }
    return 0;
}
