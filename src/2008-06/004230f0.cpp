// from server: 74% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Pair {
    void* object;
    Control* control;

    Pair(const Pair& other);
    ~Pair();
};

inline Pair::Pair(const Pair& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

struct Owner {
    void* object;
    Control* control;

    Owner(const Pair& other);
    ~Owner();
};

inline Owner::Owner(const Pair& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Owner::~Owner()
{
    if (control && _InterlockedExchangeAdd(&control->strong, -1) == 1) {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
            control->destroy();
    }
}

struct Lock {
    unsigned char storage[8];

    Lock(Pair value);
    ~Lock();
};

struct FlagGuard {
    unsigned char* address;
    unsigned char previous;

    FlagGuard(unsigned char& flag);
    ~FlagGuard();
};

inline FlagGuard::FlagGuard(unsigned char& flag)
    : address(&flag), previous(flag)
{
    flag = 1;
}

inline FlagGuard::~FlagGuard()
{
    *address = previous;
}

struct Selection {
    void select(void* object);
    void deselect(void* object);
};

struct Item {
    unsigned char padding[12];
    Pair value;
};

struct Notification {
    unsigned char padding0[4];
    int valid;
    unsigned char padding1[28];
    Item* item;
};

struct Tree;

struct TreeVTable {
    void* padding[84];
    Selection* (__thiscall* selection)(Tree*);
    Pair (__thiscall* context)(Tree*);
};

struct Tree {
    TreeVTable* vtable;
    unsigned char padding[222];
    unsigned char changing;

    void f(Notification* notification, unsigned char select);
};

void Tree::f(Notification* notification, unsigned char select)
{
    if (notification->valid && notification->item) {
        Owner object(notification->item->value);
        if (object.object) {
            Lock lock(vtable->context(this));
            Selection* selection = vtable->selection(this);
            FlagGuard guard(changing);
            if (select)
                selection->select(object.object);
            else
                selection->deselect(object.object);
        }
    }
}
