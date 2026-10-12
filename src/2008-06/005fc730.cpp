// from server: 86% by king_originala
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

struct ControlSlot
{
    Control* value;
    void assign(const ControlSlot&);
};

struct Listener
{
    char storage[32];
    void connect(void*);
};

struct Object
{
    char padding[0x64];
    Listener first;
    Listener second;
};

struct Pair
{
    Object* object;
    ControlSlot control;
    ~Pair();
};

Pair __cdecl acquire(void*);

struct Padding
{
    char storage[0x170];
};

struct FirstListener
{
    unsigned long value;
};

struct SecondListener
{
    unsigned long value;
};

struct S : Padding, FirstListener, SecondListener
{
    char padding[0x20];
    Object* object;
    ControlSlot control;

    void assign(const Pair&);
    void f(void*);
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

__forceinline Pair::~Pair()
{
    if (control.value)
        control.value->release();
}

__forceinline void S::assign(const Pair& source)
{
    object = source.object;
    control.assign(source.control);
}

void S::f(void* argument)
{
    assign(acquire(argument));

    void* firstListener = reinterpret_cast<unsigned long>(this)
        ? reinterpret_cast<char*>(this) + 0x170 : 0;
    if (object)
        object->first.connect(firstListener);

    void* secondListener = reinterpret_cast<unsigned long>(this)
        ? reinterpret_cast<char*>(this) + 0x174 : 0;
    if (object)
        object->second.connect(secondListener);
}
