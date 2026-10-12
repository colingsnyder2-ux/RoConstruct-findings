// from server: 85% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Item {
    void* object;
    Control* control;

    Item(const Item&);
    ~Item();
};

inline Item::Item(const Item& other)
    : object(other.object), control(other.control) {
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Item::~Item() {
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Vector;

struct Proxy {
    Vector* container;
};

struct Iterator {
    Proxy* owner;
    Item* current;
};

struct Vector {
    Proxy* proxy;
    unsigned int reserved[2];
    Item* first;
    Item* last;

    Iterator begin(void (__cdecl *invalid)());
    Iterator end(void (__cdecl *invalid)());
};

inline Iterator Vector::end(void (__cdecl *invalid)()) {
    Item* p = last;
    if (first > p)
        invalid();
    Iterator result;
    result.owner = proxy;
    result.current = p;
    return result;
}

inline Iterator Vector::begin(void (__cdecl *invalid)()) {
    Item* p = first;
    if (p > last)
        invalid();
    Iterator result;
    result.owner = proxy;
    result.current = p;
    return result;
}

struct SharedVector {
    Vector* object;
    Control* control;

    SharedVector copy() const;
    ~SharedVector();
};

inline SharedVector::~SharedVector() {
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct S {
    unsigned char reserved[0x108];
    SharedVector items;

    void visit(void (__cdecl *callback)(Item));
};

void S::visit(void (__cdecl *callback)(Item)) {
    if (items.object) {
        SharedVector snapshot = items.copy();
        Vector* vector = snapshot.object;
        void (__cdecl *invalid)() = _invalid_parameter_noinfo;
        Iterator finish = vector->end(invalid);
        Item* position = vector->first;
        Proxy* finishOwner = finish.owner;

        if (position > vector->last)
            invalid();

        Proxy* owner = vector->proxy;

        for (;;) {
            if (!owner || owner != finishOwner)
                invalid();

            if (position == finish.current)
                break;

            if (!owner)
                invalid();

            Vector* container = owner ? owner->container : 0;
            if (position >= container->last)
                invalid();

            callback(*position);

            if (!owner)
                invalid();

            container = owner ? owner->container : 0;
            if (position >= container->last)
                invalid();

            ++position;
        }
    }
}
