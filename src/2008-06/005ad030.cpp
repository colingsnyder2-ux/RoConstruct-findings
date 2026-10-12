// from server: 84% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Referent {
    void notify();
};

struct Link {
    bool active();
    Referent** get();
    void clear();
};

struct Object {
    char padding[0xec];
    Link link;
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Object* object;
    Control* control;
};

extern Shared* __cdecl acquire(Shared*, Object*);

struct Lookup {
    int lookup(Object**);
    char padding[0x2c];
};

struct Entry {
    Object* object;
    unsigned long value;
};

struct Iterator {
    void* owner;
    Entry* position;
};

struct Sequence {
    void* owner;
    unsigned long padding[2];
    Entry* first;
    Entry* last;

    Iterator* erase(Iterator*, Iterator);
};

struct S {
    char padding[0x15c];
    Lookup lookup;
    Sequence sequence;

    void remove(Object*);
};

void S::remove(Object* object)
{
    if (lookup.lookup(&object)) {
        Object* saved = object;
        Link* link = &saved->link;
        if (link->active()) {
            (*link->get())->notify();
            link->clear();
        }

        Shared temporary;
        Shared* value = acquire(&temporary, saved);
        Sequence* container = &sequence;

        Entry* end = container->last;
        if (container->first > end)
            _invalid_parameter_noinfo();

        Entry* current = container->first;
        if (current > container->last)
            _invalid_parameter_noinfo();

        Iterator found;
        found.owner = container->owner;
        found.position = current;

        if (current != end) {
            Object* key = value->object;
            for (; current != end; ++current) {
                if (current->object == key)
                    break;
            }
        }

        Control* control = temporary.control;
        if (control) {
            if (_InterlockedExchangeAdd(&control->strong, -1) == 0) {
                control->dispose();
                if (_InterlockedExchangeAdd(&control->weak, -1) == 0)
                    control->destroy();
            }
        }

        end = container->last;
        if (container->first > end)
            _invalid_parameter_noinfo();

        void* owner = container->owner;
        if (!found.owner || found.owner != owner)
            _invalid_parameter_noinfo();

        if (current != end) {
            found.position = current;
            Iterator result;
            container->erase(&result, found);
        }
    }
}
