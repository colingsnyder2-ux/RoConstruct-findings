// from server: 98% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct String
{
    unsigned char storage[28];
    String(const char*);
    ~String();
};

struct Item;
struct S;

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Temporary
{
    Item* pointer;
    Control* control;
    ~Temporary();
};

inline Temporary::~Temporary()
{
    if (control)
        control->release();
}

struct Shared
{
    Item* pointer;
    Control* control;

    Shared(const Temporary&);
    ~Shared();
};

inline Shared::Shared(const Temporary& value)
    : pointer(value.pointer), control(value.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Item
{
    virtual void unused() = 0;
    virtual void setName(const String&) = 0;
    void attach(S*);
};

Temporary __cdecl createItem(const char*);

struct S
{
    Item* f(const char*, const char*);
};

Item* S::f(const char* name, const char* type)
{
    Shared item(createItem(type));
    {
        String text(name);
        item.pointer->setName(text);
    }
    item.pointer->attach(this);
    return item.pointer;
}
