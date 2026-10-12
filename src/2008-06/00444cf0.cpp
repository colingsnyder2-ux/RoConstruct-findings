// from server: 99% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct S;

struct Object {
    virtual void slot0();
    virtual void setName(const void*);
    char padding[0x12C];
    unsigned char flag;
    void attach(S*);
};

struct Control {
    virtual void slot0();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

struct Handle {
    Object* object;
    Control* control;
    ~Handle();
};

struct Argument {
    void* unused;
    char* name;
};

struct S {
    Object* lookup(const void*);
    void f(Argument*);
};

Handle __cdecl create();

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

inline Handle::~Handle()
{
    if (control)
        control->release();
}

void S::f(Argument* argument)
{
    Object* object = lookup(argument->name + 4);
    if (object) {
        object->flag = 0;
        return;
    }

    Handle handle = create();
    handle.object->setName(argument->name + 4);
    handle.object->flag = 0;
    handle.object->attach(this);
}
