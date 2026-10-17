// from server: 83% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle {
    void* pointer;
    Control* control;

    Handle(const Handle&);
    ~Handle();
};

__forceinline Handle::Handle(const Handle& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

__forceinline Handle::~Handle()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct Owner;

struct OwnerTable {
    char padding[0x154];
    Handle (__thiscall* acquire)(Owner*);
};

struct Owner {
    OwnerTable* table;
};

struct Guard {
    char storage[12];
    Guard(Handle);
    ~Guard();
};

struct Listener {
    char storage[0x20];
    void remove(void**);
};

struct Parent {
    char padding[0x24];
    Listener first;
    Listener second;
};

struct S {
    virtual void reserved0();
    virtual void reserved1();
    virtual void refresh();
    virtual void reserved3();
    virtual void reserved4();
    virtual void reserved5();
    virtual int query();

    void* firstLink;
    void* secondLink;
    Parent* parent;
    char padding10[0x48];
    Owner* owner;
    char padding5C[0x24];
    int value;

    void f();
};

void S::f()
{
    value = query();
    refresh();
    Owner* o = owner;
    Guard guard(o->table->acquire(o));
    Parent* p = parent;
    p->first.remove(&firstLink);
    p->second.remove(&secondLink);
}
