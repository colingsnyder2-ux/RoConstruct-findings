// from server: 74% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* const _invalid_parameter_noinfo)();

namespace RBX
{
    struct Instance
    {
        virtual ~Instance();
        char padding[0x100];
        Instance* next;
    };

    struct ServiceProvider : Instance
    {
        ServiceProvider* finish();
    };

    struct PartInstance : Instance
    {
    };
}

RBX::ServiceProvider* __cdecl func_00421cb0(RBX::Instance*);

typedef void (__cdecl* InvalidHandler)();

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Entry
{
    RBX::Instance* pointer;
    Control* control;
};

struct Container;

struct Proxy
{
    Container* container;
};

struct Iterator
{
    Proxy* owner;
    Entry* current;

    RBX::Instance* dereference(InvalidHandler) const;
    void increment(InvalidHandler);
};

struct Container
{
    Proxy* proxy;
    unsigned int unused[2];
    Entry* first;
    Entry* last;

    Iterator begin();
    Iterator end();
};

inline Iterator Container::begin()
{
    Entry* position = first;
    if (position > last)
        _invalid_parameter_noinfo();
    Iterator result;
    result.owner = proxy;
    result.current = position;
    return result;
}

inline Iterator Container::end()
{
    Entry* position = last;
    if (first > position)
        _invalid_parameter_noinfo();
    Iterator result;
    result.owner = proxy;
    result.current = position;
    return result;
}

inline RBX::Instance* Iterator::dereference(InvalidHandler invalid) const
{
    if (!owner)
        invalid();
    Container* container = owner ? owner->container : 0;
    if (current >= container->last)
        invalid();
    return current->pointer;
}

inline void Iterator::increment(InvalidHandler invalid)
{
    if (!owner)
        invalid();
    Container* container = owner ? owner->container : 0;
    if (current >= container->last)
        invalid();
    ++current;
}

struct Selection
{
    char padding[0x154];
    Container* entries;
    void invoke(void*);
};

struct ControlSlot
{
    Control* control;
    void assign(const ControlSlot&);
};

struct SharedSelection
{
    Selection* pointer;
    ControlSlot ownership;

    SharedSelection& operator=(const SharedSelection&);
    ~SharedSelection();
};

inline SharedSelection& SharedSelection::operator=(const SharedSelection& other)
{
    pointer = other.pointer;
    ownership.assign(other.ownership);
    return *this;
}

inline SharedSelection::~SharedSelection()
{
    if (ownership.control)
    {
        Control* saved = ownership.control;
        if (_InterlockedExchangeAdd(&saved->strong, -1) == 1)
        {
            saved->dispose();
            if (_InterlockedExchangeAdd(&saved->weak, -1) == 1)
                saved->destroy();
        }
    }
}

SharedSelection __cdecl sub_618a40(RBX::ServiceProvider*);

struct Output
{
    void append(RBX::PartInstance* const*);
};

struct Argument
{
    unsigned int unused[2];
    RBX::Instance* instance;
};

struct S
{
    char padding[0x130];
    unsigned int callback;
    SharedSelection selection;
    Output output;

    void initialize(Argument*);
    void f(Argument*);
};

void S::f(Argument* argument)
{
    initialize(argument);
    if (!selection.pointer)
    {
        selection = sub_618a40(func_00421cb0(argument->instance));
        if (selection.pointer)
        {
            Iterator iterator = selection.pointer->entries->begin();
            for (;;)
            {
                Iterator finish = selection.pointer->entries->end();
                if (!iterator.owner || iterator.owner != finish.owner)
                    _invalid_parameter_noinfo();

                InvalidHandler invalid = _invalid_parameter_noinfo;
                if (iterator.current == finish.current)
                    break;

                RBX::PartInstance* part =
                    dynamic_cast<RBX::PartInstance*>(iterator.dereference(invalid));
                if (part)
                    output.append(&part);
                iterator.increment(invalid);
            }
            selection.pointer->invoke(&callback);
        }
    }
}
