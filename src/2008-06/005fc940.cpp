// from server: 86% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct ControlRef {
    Control* pointer;
    void assign(const ControlRef&);
};

struct Hook {
    virtual void slot();
};

struct FirstHook : Hook {};
struct SecondHook : Hook {};

struct Listener {
    char storage[32];
    void attach(Hook*);
};

struct Object {
    char padding[0x24];
    Listener first;
    Listener second;
};

struct Shared {
    Object* object;
    ControlRef control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    if (control.pointer)
        control.pointer->release();
}

Shared __cdecl makeShared(void*);

struct Padding {
    virtual void slot();
    char storage[0x164];
};

struct LocalBackpack : Padding, FirstHook, SecondHook {
    char reserved[0x20];
    Object* object;
    ControlRef control;

    void assign(const Shared&);
    void set(void*);
};

__forceinline void LocalBackpack::assign(const Shared& value)
{
    object = value.object;
    control.assign(value.control);
}

void LocalBackpack::set(void* argument)
{
    assign(makeShared(argument));

    Hook* first = this ? static_cast<FirstHook*>(this) : 0;
    if (object)
        object->first.attach(first);

    Hook* second = this ? static_cast<SecondHook*>(this) : 0;
    if (object)
        object->second.attach(second);
}
