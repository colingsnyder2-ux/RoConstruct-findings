// from server: 72% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Weak {
    void* pointer;
    Control* control;
    Shared lock();
};

struct Link {
    void attach();
    void detach();
};

struct Owner {
    Link* getLink(void*);
};

struct Event {
    void* object;
    void* previous;
    void* current;
};

struct S {
    char padding[0x130];
    char linkData[12];
    Owner* owner;
    Weak parent;

    void baseChanged(Event*);
    void f(Event*);
};

extern char instanceType;
extern char partType;

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

extern Shared __cdecl makeShared(void*);
extern Owner* __cdecl findOwner(S*);

void S::f(Event* event)
{
    baseChanged(event);

    if (event->object == this) {
        const Shared& value = makeShared(
            __RTDynamicCast(event->current, 0,
                            &instanceType, &partType, 0));

        parent.pointer = value.pointer;
        Control* replacement = value.control;
        if (replacement)
            _InterlockedExchangeAdd(&replacement->weak, 1);

        Control* previous = parent.control;
        if (previous &&
            _InterlockedExchangeAdd(&previous->weak, -1) == 1)
            previous->destroy();

        parent.control = replacement;
    }

    Owner* replacement;
    {
        const Shared& value = parent.lock();
        replacement = value.pointer ? findOwner(this) : 0;
    }

    if (owner != replacement) {
        if (owner)
            owner->getLink(linkData)->detach();

        owner = replacement;

        if (replacement)
            replacement->getLink(linkData)->attach();
    }
}
