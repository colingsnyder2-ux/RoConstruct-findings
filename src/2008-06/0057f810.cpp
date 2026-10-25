// from server: 82% by king_originala_sol_native
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_sol_boolproperty_import_66ba6bd19498f059.cpp

// Candidate translation unit (score above; library headers required).

#include <intrin.h>


extern "C" __declspec(dllimport) void __cdecl _invalid_parameter_noinfo();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern char propertyType;
extern char booleanPropertyType;

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    __forceinline void release() {
        if (_InterlockedDecrement(&strong) == 0) {
            dispose();
            if (_InterlockedDecrement(&weak) == 0)
                destroy();
        }
    }
};

struct Model;

struct Shared {
    Model* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    if (control)
        control->release();
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

    Iterator(Selection*o,const Position&p):owner(o),proxy(p.proxy),position(p.position){}
    Property* get(Position* temporary);
};

bool filteredSelection(void* key, Shared model)
{
    Selection* selection = &model.object->selection;
    Iterator iterator(selection,selection->storage->values.find(key));
    Proxy* proxy=iterator.proxy;
    Property** position=iterator.position;

    Storage* storage = model.object->selection.storage;
    Property** end = storage->values.last;

    if (storage->values.first > end)
        _invalid_parameter_noinfo();

    Proxy* expected = storage->values.proxy;
    if (!proxy || proxy != expected)
        _invalid_parameter_noinfo();

    if (position != end) {
        Vector* vector;
        if (!proxy)
            _invalid_parameter_noinfo();
        vector = proxy->owner;

        if (position >= vector->last)
            _invalid_parameter_noinfo();

        Property* property = *position;
        if (__RTDynamicCast(property, 0, &propertyType,
                            &booleanPropertyType, 0)) {
            Position temporary;
            if (iterator.get(&temporary)->get())
                return true;
        }
    }

    return false;
}