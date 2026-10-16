extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;

    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Listener
{
    void* vptr;
};

struct FirstHook : Listener {};
struct SecondHook : Listener {};

struct Notifier
{
    void attach(Listener*);
};

struct Hub
{
    char pad0[0x64];
    Notifier first;
    char pad1[0x1f];
    Notifier second;
};

struct Holder
{
    Control* pointer;
    Holder& operator=(const Holder&);
};

struct Shared
{
    Hub* pointer;
    Holder owner;
    Shared& operator=(const Shared&);
    ~Shared();
};

__forceinline Shared& Shared::operator=(const Shared& value)
{
    pointer = value.pointer;
    owner = value.owner;
    return *this;
}

__forceinline Shared::~Shared()
{
    if (owner.pointer)
        owner.pointer->release();
}

extern Shared __cdecl acquire(void*);

struct HubPad
{
    char pad[0x170];
};

struct LocalBackpack : HubPad, FirstHook, SecondHook
{
    char mid[0x198 - 0x178];
    Shared hub;

    void init(void* argument);
};

void LocalBackpack::init(void* argument)
{
    hub = acquire(argument);

    FirstHook* first = this ? static_cast<FirstHook*>(this) : 0;
    if (hub.pointer)
        hub.pointer->first.attach(first);

    SecondHook* second = first ? static_cast<SecondHook*>(this) : 0;
    if (hub.pointer)
        hub.pointer->second.attach(second);
}
