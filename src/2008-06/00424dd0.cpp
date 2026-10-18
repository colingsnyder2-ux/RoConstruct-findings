// from server: 82% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Pair {
    void* value;
    Control* control;

    Pair(const Pair& other) : value(other.value), control(other.control) {
        if (control)
            _InterlockedExchangeAdd(&control->strong, 1);
    }

    ~Pair() {
        Control* p = control;
        if (p) {
            if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
                p->dispose();
                if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                    p->destroy();
            }
        }
    }
};

struct Temporary {
    char storage[12];
    Temporary(Pair);
    ~Temporary();
};

struct Owner;
struct Node;

struct OwnerTable {
    void* preceding[85];
    Pair (__thiscall* get)(Owner*);
    void* intervening;
    void (__thiscall* attach)(Owner*, Node*);
};

struct Owner {
    OwnerTable* table;
};

extern char identity;

struct Node {
    char preceding[84];
    unsigned char flags;
    char padding[3];
    Owner* owner;

    void update(void*, const void*, void*);
};

void Node::update(void*, const void* kind, void*) {
    bool matches;
    {
        Temporary temporary(owner->table->get(owner));
        matches = kind == &identity;
    }
    if (matches) {
        flags |= 1;
        owner->table->attach(owner, this);
    }
}
