// from server: 75% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

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
    if (_InterlockedExchangeAdd(&strong, -1) == 1) {
        dispose();
        if (_InterlockedExchangeAdd(&weak, -1) == 1)
            destroy();
    }
}

struct Shared {
    Object* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        control->addRef();
}

inline Shared::~Shared()
{
    if (control)
        control->release();
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
