// from server: 63% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
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
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared()
{
    if (control && _InterlockedExchangeAdd(&control->strong, -1) == 1) {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
            control->destroy();
    }
}

struct Temporary {
    void* object;
    Control* control;
    ~Temporary();
};

struct Scope {
    unsigned char storage[12];
    Scope(Shared value);
    ~Scope();
};

struct FlagGuard {
    unsigned char* flag;
    unsigned char previous;
    FlagGuard(unsigned char& value);
    ~FlagGuard();
};

inline FlagGuard::FlagGuard(unsigned char& value)
    : flag(&value), previous(value)
{
    value = 1;
}

inline FlagGuard::~FlagGuard()
{
    *flag = previous;
}

struct Selection {
    void select(void* object);
    void deselect(void* object);
};

struct Item {
    unsigned char padding[12];
    Shared value;
};

struct Argument {
    unsigned char padding0[4];
    int valid;
    unsigned char padding1[28];
    Item* item;
};

struct Tree;

struct TreeTable {
    void* slots[84];
    Selection* (__thiscall* selection)(Tree*);
    Temporary (__thiscall* context)(Tree*);
};

struct Tree {
    TreeTable* table;
    unsigned char padding[222];
    unsigned char changing;
    void f(Argument* argument, unsigned char select);
};

void Tree::f(Argument* argument, unsigned char select)
{
    if (argument->valid && argument->item) {
        Shared value(argument->item->value);
        if (value.object) {
            Temporary temporary = table->context(this);
            Scope scope(*reinterpret_cast<Shared*>(&temporary));
            temporary.~Temporary();
            Selection* current = table->selection(this);
            {
                FlagGuard guard(changing);
                if (select)
                    current->select(value.object);
                else
                    current->deselect(value.object);
            }
        }
    }
}
