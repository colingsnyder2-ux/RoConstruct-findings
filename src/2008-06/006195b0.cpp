// from server: 80% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Instance {
    virtual ~Instance();
    char padding[0x100];
    Instance* next;
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Instance* pointer;
    Control* control;
    ~Shared();
};

inline Shared::~Shared() {
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Flag;

struct ServiceProvider : Instance {
    int query(Flag*);
    ServiceProvider* find(Flag*);
    void update(Flag*);
};

struct State {
    char padding[0x178];
    int value;
    unsigned char disabled;
};

extern int __cdecl check(Instance*);
extern State* __cdecl getState(Instance*);
extern ServiceProvider* __cdecl func_00619450(Instance*);

struct Flag : Instance {
    char padding108[0x184];
    int value;
    void process(Shared);
};

void Flag::process(Shared object) {
    Instance* parent = object.pointer->next;
    if (!check(parent))
        return;

    State* state = getState(parent);
    if (!state)
        return;

    if (!state->disabled && value == state->value) {
        ServiceProvider* provider = func_00619450(this);
        if (!provider->query(this)) {
            ServiceProvider* found = provider->find(this);
            if (found)
                found->update(this);
        }
    }
}
