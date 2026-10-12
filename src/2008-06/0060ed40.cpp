// from server: 76% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Object {
    void func_00598c70();
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void addRef();
    void release();
};

inline void Control::addRef()
{
    _InterlockedExchangeAdd(&strong, 1);
}

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Count {
    Control* control;

    Count(const Count&);
    ~Count();
};

inline Count::Count(const Count& other)
    : control(other.control)
{
    if (control)
        control->addRef();
}

inline Count::~Count()
{
    if (control)
        control->release();
}

struct Shared {
    Object* object;
    Count count;

    Shared(const Shared&);
};

inline Shared::Shared(const Shared& other)
    : object(other.object), count(other.count)
{
}

struct Entry {
    Object* object;
    Control* control;
    Shared get();
};

struct Container {
    char padding[12];
    Entry* first;
    Entry* last;
};

bool __cdecl testObject(Shared value);

void __cdecl process(Container* container)
{
    for (unsigned int i = 0;
         i < static_cast<unsigned int>(container->last - container->first);
         ++i) {
        if (i >= static_cast<unsigned int>(container->last - container->first))
            _invalid_parameter_noinfo();

        Shared value = container->first[i].get();
        Object* object = value.object;
        if (testObject(value))
            object->func_00598c70();
    }
}
