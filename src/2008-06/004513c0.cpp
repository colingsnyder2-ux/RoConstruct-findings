// from server: 69% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

typedef void (__cdecl* InvalidHandler)();
extern "C" InvalidHandler _invalid_parameter_noinfo;
extern "C" void __cdecl free_object(void*);

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared() {
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Guard {
    unsigned char storage[12];
    Guard(Shared);
    ~Guard();
};

struct Item {
    virtual void unused();
    virtual void deleting_destructor(unsigned int);
};

struct Vector;

struct Proxy {
    Vector* container;
};

struct Iterator {
    Proxy* owner;
    Item** position;
    bool different(const Iterator&, InvalidHandler) const;
    Item* value(InvalidHandler) const;
    void advance(InvalidHandler);
};

struct Vector {
    Proxy* proxy;
    unsigned int unused1;
    unsigned int unused2;
    Item** first;
    Item** last;
    Item** limit;
    Iterator begin(InvalidHandler);
    Iterator end(InvalidHandler);
    Iterator* erase(Iterator*, Iterator, Iterator);
};

inline bool Iterator::different(const Iterator& other, InvalidHandler invalid) const {
    if (!owner || owner != other.owner)
        invalid();
    return position != other.position;
}

inline Item* Iterator::value(InvalidHandler invalid) const {
    if (!owner)
        invalid();
    Vector* container = owner ? owner->container : 0;
    if (position >= container->last)
        invalid();
    return *position;
}

inline void Iterator::advance(InvalidHandler invalid) {
    if (!owner)
        invalid();
    Vector* container = owner ? owner->container : 0;
    if (position >= container->last)
        invalid();
    ++position;
}

inline Iterator Vector::begin(InvalidHandler invalid) {
    Item** position = first;
    if (first > last)
        invalid();
    Iterator result = { proxy, position };
    return result;
}

inline Iterator Vector::end(InvalidHandler invalid) {
    Item** position = last;
    if (first > last)
        invalid();
    Iterator result = { proxy, position };
    return result;
}

struct Owned {
    void cleanup();
};

struct Source {
    virtual void unused0();
    virtual void unused1();
    virtual unsigned long __stdcall release();
    void cleanup();
};

struct S {
    unsigned char padding[0x78];
    Vector items;
    Owned* owned;
    Source* source;
    Shared get();
    void finish();
    void f();
};

extern S* current_document;
extern void __cdecl set_document(int, S*);

void S::f() {
    {
        Guard guard(static_cast<const Shared&>(get()));

        InvalidHandler invalid = _invalid_parameter_noinfo;
        Iterator first = items.begin(invalid);
        Iterator last = items.end(invalid);

        for (; first.different(last, invalid); first.advance(invalid)) {
            Item* item = first.value(invalid);
            if (item)
                item->deleting_destructor(1);
        }

        Iterator end = items.end(invalid);
        Iterator begin = items.begin(_invalid_parameter_noinfo);
        Iterator result;
        items.erase(&result, begin, end);

        Owned* old = owned;
        owned = 0;
        if (old) {
            old->cleanup();
            free_object(old);
        }
    }

    if (source) {
        source->cleanup();
        source->release();
        source = 0;
    }

    if (current_document == this)
        set_document(1, this);

    finish();
}
