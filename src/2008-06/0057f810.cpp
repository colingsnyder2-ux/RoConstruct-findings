// from server: 65% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern char propertyType;
extern char booleanPropertyType;

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Model;

struct Shared {
    Model* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Property {
    bool get();
};

struct Vector;

struct Proxy {
    Vector* owner;
};

struct Position {
    Proxy* proxy;
    Property** position;
};

struct Vector {
    Proxy* proxy;
    unsigned reserved[2];
    Property** first;
    Property** last;

    Position find(void* key);
};

struct Storage {
    unsigned reserved[2];
    Vector values;
};

struct Selection {
    unsigned reserved[2];
    Storage* storage;
};

struct Model {
    unsigned reserved[5];
    Selection selection;
};

struct Iterator {
    Selection* owner;
    Proxy* proxy;
    Property** position;

    Property* get(Position* temporary);
};

bool filteredSelection(void* key, Shared model)
{
    Selection* selection = &model.object->selection;
    Position found = selection->storage->values.find(key);

    Iterator iterator;
    iterator.owner = selection;
    iterator.proxy = found.proxy;
    iterator.position = found.position;

    Storage* storage = model.object->selection.storage;
    Property** end = storage->values.last;

    if (storage->values.first > end)
        _invalid_parameter_noinfo();

    Proxy* expected = storage->values.proxy;
    if (!found.proxy || found.proxy != expected)
        _invalid_parameter_noinfo();

    if (found.position != end) {
        Vector* vector;
        if (!found.proxy)
            _invalid_parameter_noinfo();
        vector = found.proxy->owner;

        if (found.position >= vector->last)
            _invalid_parameter_noinfo();

        Property* property = *found.position;
        if (__RTDynamicCast(property, 0, &propertyType,
                            &booleanPropertyType, 0)) {
            Position temporary;
            if (iterator.get(&temporary)->get())
                return true;
        }
    }

    return false;
}
