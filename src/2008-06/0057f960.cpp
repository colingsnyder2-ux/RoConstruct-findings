// from server: 68% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" {
    extern void (__cdecl* _invalid_parameter_noinfo)();
    void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
}

extern char propertyDescriptorType;
extern char boolPropertyDescriptorType;

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Instance;
struct Property;
struct Vector;

struct Shared {
    Instance* pointer;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

struct Proxy {
    Vector* owner;
};

struct Position {
    Proxy* proxy;
    Property** current;
};

struct Search {
    Proxy* proxy;
    unsigned reserved[2];
    Property** first;
    Property** last;
    Position find(Property* property);
};

struct Vector {
    unsigned reserved[2];
    Search search;
};

struct Instance {
    unsigned reserved[7];
    Vector* properties;
};

struct Value {
    bool get();
    void set(const bool* value);
};

struct Iterator {
    void* owner;
    Proxy* proxy;
    Property** current;
    Iterator(void* object, const Position& position);
    Value* get(void** temporary);
};

inline Iterator::Iterator(void* object, const Position& position)
    : owner(object), proxy(position.proxy), current(position.current)
{
}

struct Selection {
    Property* property;
    bool selected;
    void apply(Shared instance);
};

void Selection::apply(Shared instance)
{
    void* object = reinterpret_cast<char*>(instance.pointer) + 20;
    Iterator iterator(object,
                      instance.pointer->properties->search.find(property));

    Proxy* proxy = iterator.proxy;
    Vector* vector = instance.pointer->properties;
    Property** end = vector->search.last;
    if (vector->search.first > end)
        _invalid_parameter_noinfo();

    Proxy* expected = vector->search.proxy;
    if (!proxy || proxy != expected)
        _invalid_parameter_noinfo();

    if (iterator.current != end) {
        if (!proxy)
            _invalid_parameter_noinfo();
        else
            proxy = reinterpret_cast<Proxy*>(proxy->owner);

        if (iterator.current >= reinterpret_cast<Search*>(proxy)->last)
            _invalid_parameter_noinfo();

        if (__RTDynamicCast(*iterator.current, 0,
                            &propertyDescriptorType,
                            &boolPropertyDescriptorType, 0)) {
            void* temporary[2];
            if (iterator.get(temporary)->get() != selected)
                iterator.get(temporary)->set(&selected);
        }
    }
}
