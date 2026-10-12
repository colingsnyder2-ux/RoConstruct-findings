// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

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

struct Control {
    void* table;
    volatile long references;
};

struct Entry {
    unsigned int reserved[3];
    Object* object;
    Control* control;
};

struct Shared {
    Object* object;
    Control* control;
    Shared(Object* value, Control* owner);
    ~Shared();
};

inline Shared::Shared(Object* value, Control* owner)
    : object(value), control(owner)
{
    if (owner)
        _InterlockedExchangeAdd(&owner->references, 1);
}

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
        Object* object = entry->object;
        Shared held(object, entry->control);
        if (object) {
            Result* last = range().f();
            Result* first = range().get();
            if (object->contains(*first, *last))
                return item;
        }
    }
    return 0;
}
