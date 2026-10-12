// from server: 92% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Interface {
    virtual void unused();
    virtual bool query();
};

struct Object {
    unsigned char padding[0x1f0];
    Interface interfaceValue;
};

struct Pointer {
    Object* object;
    Control* control;

    Pointer();
    Pointer(const Pointer& other);
    ~Pointer();
};

inline Pointer::Pointer() {
}

inline Pointer::Pointer(const Pointer& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Pointer::~Pointer() {
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Guard {
    unsigned char storage[12];
    Guard(Pointer value);
    ~Guard();
};

struct Source;

struct S {
    unsigned char padding[0x94];
    Source* source;
    Pointer* get(Pointer* output) throw();
    int f();
};

int S::f() {
    if (get(&Pointer())->object != 0) {
        Guard guard(*get(&Pointer()));
        int result = get(&Pointer())->object->interfaceValue.query();
        return result;
    }
    return 0;
}
