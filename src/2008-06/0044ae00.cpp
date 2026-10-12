// from server: 87% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
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

struct Target {
    void apply(Shared value);
};

struct Interface;
typedef Target* (__thiscall *GetTarget)(Interface*, int, int);

struct Interface {
    GetTarget* table;
};

struct Holder {
    char padding[0x28];
    Interface* interfaceObject;
};

struct CRobloxApp {
    char padding[0x58];
    Holder* holder;
    void apply(Shared value);
};

void CRobloxApp::apply(Shared value) {
    Interface* p = holder->interfaceObject;
    Target* target = p->table[34](p, 0, 1);
    target->apply(value);
}
