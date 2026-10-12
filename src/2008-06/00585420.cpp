// from server: 58% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct BasePtr {
    char* pointer;
    Control* control;
    ~BasePtr();
};

struct SharedPtr {
    char* pointer;
    Control* control;
    SharedPtr(const BasePtr&);
    ~SharedPtr();
};

struct Getter {
    virtual void slot0();
    virtual void slot1();
    virtual void* get(void*);
};

struct Storage {
    void* pointer;
    Control* control;
    void assign(const SharedPtr&);
};

struct Output {
    void* type;
    Storage value;
};

BasePtr __cdecl acquire(void*);
void* __cdecl getType();

struct S {
    char padding[28];
    Getter* getter;
    void f(void*, Output*);
};

inline BasePtr::~BasePtr()
{
    if (control) {
        if (_InterlockedExchangeAdd(&control->strong, -1) == 1) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                control->destroy();
        }
    }
}

inline SharedPtr::SharedPtr(const BasePtr& source)
{
    pointer = source.pointer ? source.pointer + 20 : 0;
    control = source.control;
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline SharedPtr::~SharedPtr()
{
    if (control) {
        if (_InterlockedExchangeAdd(&control->strong, -1) == 1) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                control->destroy();
        }
    }
}

void S::f(void* object, Output* output)
{
    SharedPtr value(acquire(getter->get(object)));
    output->type = getType();
    output->value.assign(value);
}
