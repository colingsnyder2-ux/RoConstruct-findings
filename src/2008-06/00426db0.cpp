// from server: 82% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct S;

struct Shared {
    S* object;
    Control* control;

    ~Shared()
    {
        Control* p = control;
        if (p) {
            if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
                p->dispose();
                if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                    p->destroy();
            }
        }
    }
};

struct Temporary {
    char storage[24];
    Temporary();
    ~Temporary();
    void assign(Shared*);
};

struct S {
    char padding[0x104];
    S* parent;

    bool f(S*);
    void setParent(S*);
    void notify(Temporary*, S*, bool, bool);
};

extern S* __cdecl lookup(S*);

void __cdecl updateParent(S* parent, Shared node)
{
    if (node.object->parent == parent)
        return;

    S* target = lookup(parent);
    if (target && !node.object->f(target)) {
        Temporary temporary;
        temporary.assign(&node);
        target->notify(&temporary, target, true, true);
    }
    node.object->setParent(parent);
}
