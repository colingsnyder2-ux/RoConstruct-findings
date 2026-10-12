// from server: 70% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control) {
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

typedef void (__cdecl *Callback)();

struct Bound {
    Callback callback;
    Shared first;
    Shared second;
};

extern void __cdecl callback();
extern Bound __cdecl build(Callback, Shared, Shared);

struct Function {
    void* table;
    unsigned int reserved;
    unsigned int buffer[6];
    Function(Bound, int);
    Function(const Function&);
    ~Function();
};

struct Receiver {
    void invoke(Function);
};

void __cdecl dispatch(Shared first, Shared receiver, int operation, Shared second) {
    if (operation == 1)
        static_cast<Receiver*>(receiver.pointer)->invoke(
            Function(build(callback, first, second), 0));
}
