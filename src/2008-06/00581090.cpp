// from server: 64% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern char instanceType;
extern char workspaceType;
extern char playersType;

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

template<class T> struct Shared
{
    T* pointer;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

template<class T>
__forceinline Shared<T>::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

template<class T>
__forceinline Shared<T>::~Shared()
{
    if (control && _InterlockedExchangeAdd(&control->strong, -1) == 1)
    {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
            control->destroy();
    }
}

struct Instance
{
    void detach(int);
};

struct Vector;

struct Proxy
{
    Vector* container;
};

struct Iterator
{
    Proxy* owner;
    Shared<Instance>* position;
    Shared<Instance>& operator*() const;
    Iterator& operator++();
    bool operator!=(const Iterator&) const;
};

struct Vector
{
    Proxy* proxy;
    unsigned long reserved[2];
    Shared<Instance>* first;
    Shared<Instance>* last;
    Shared<Instance>* limit;

    Iterator begin();
    Iterator end();
};

__forceinline Iterator Vector::begin()
{
    Iterator result;
    result.position = first;
    if (first > last)
        _invalid_parameter_noinfo();
    result.owner = proxy;
    return result;
}

__forceinline Iterator Vector::end()
{
    Iterator result;
    result.position = last;
    if (first > last)
        _invalid_parameter_noinfo();
    result.owner = proxy;
    return result;
}

__forceinline bool Iterator::operator!=(const Iterator& other) const
{
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return position != other.position;
}

__forceinline Shared<Instance>& Iterator::operator*() const
{
    Vector* container;
    if (!owner)
    {
        _invalid_parameter_noinfo();
        container = 0;
    }
    else
        container = owner->container;
    if (position >= container->last)
        _invalid_parameter_noinfo();
    return *position;
}

__forceinline Iterator& Iterator::operator++()
{
    Vector* container;
    if (!owner)
    {
        _invalid_parameter_noinfo();
        container = 0;
    }
    else
        container = owner->container;
    if (position >= container->last)
        _invalid_parameter_noinfo();
    ++position;
    return *this;
}

struct Selection
{
    Vector* pointer;
    Control* control;
    Shared<Vector> snapshot();
};

struct Root
{
    char padding[0x154];
    Selection selection;
};

struct History
{
    void mark(int);
};

struct Context
{
    Root* root();
    History* history();
};

struct String
{
    unsigned long padding[2];
    union
    {
        char local[16];
        char* allocated;
    } data;
    unsigned long length;
    unsigned long capacity;
};

struct Argument
{
    virtual void finish(int);
};

extern void __cdecl notify(const char*, unsigned long);

struct S
{
    unsigned long padding0;
    String* name;
    unsigned long padding8;
    unsigned long value;
    unsigned long padding10[4];
    Context* context;

    void prepare();
    void f(Argument*);
};

void S::f(Argument* argument)
{
    prepare();

    Root* r = context ? context->root() : 0;
    Selection* selection = &r->selection;

    if (static_cast<unsigned long>(
            selection->pointer->last - selection->pointer->first) > 0)
    {
        Shared<Vector> snapshot = selection->snapshot();

        if (snapshot.pointer)
        {
            for (Iterator it = snapshot.pointer->begin();
                 it != snapshot.pointer->end(); ++it)
            {
                Shared<Instance> object(*it);
                if (!__RTDynamicCast(object.pointer, 0,
                                     &instanceType, &workspaceType, 0) &&
                    !__RTDynamicCast(object.pointer, 0,
                                     &instanceType, &playersType, 0))
                    object.pointer->detach(0);
            }
        }

        History* h = context ? context->history() : 0;
        h->mark(7);
        notify(name->capacity >= 16 ? name->data.allocated : name->data.local,
               value);
        argument->finish(1);
    }
}
