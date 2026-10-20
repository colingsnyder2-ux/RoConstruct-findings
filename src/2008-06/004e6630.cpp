// from server: 99% by Espeon


extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long*);
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long*);

struct Node {
    char padding[0x104];
    Node* parent;
    bool f(Node*);
};

extern Node* __cdecl findNode(Node*);

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Intrusive {
    virtual ~Intrusive();
    volatile long references;
    void cleanup();
};

struct IntrusivePtr {
    Intrusive* pointer;
    IntrusivePtr(Intrusive*);
    ~IntrusivePtr();
};

inline IntrusivePtr::IntrusivePtr(Intrusive* p) : pointer(p)
{
    InterlockedIncrement(&p->references);
}

inline IntrusivePtr::~IntrusivePtr()
{
    if (pointer) {
        if (InterlockedDecrement(&pointer->references) == 0) {
            pointer->cleanup();
            if (pointer)
                delete pointer;
        }
        pointer = 0;
    }
}

struct Receiver {
    virtual void first();
    virtual void second();
    virtual void update(IntrusivePtr&);
};

struct Holder {
    void* first;
    Receiver* receiver;
};

struct Part : Intrusive {
    char padding[0xc8];
    Holder* holder;
    char padding2[4];
    Node* node;
    void f(Shared);
};

void Part::f(Shared value)
{
    Node* found = findNode(node);
    if (!found ||
        (found != node->parent &&
         (!node->parent || !node->parent->f(found)))) {
        IntrusivePtr self(this);
        holder->receiver->update(self);
    }
}