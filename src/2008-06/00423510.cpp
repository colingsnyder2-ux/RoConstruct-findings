// from server: 75% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    Reference();
    ~Reference();
    void assign(const Reference&);
};

inline Reference::Reference() : control(0) {}

inline Reference::~Reference() {
    if (control &&
        _InterlockedExchangeAdd(&control->strong, -1) == 0) {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 0)
            control->destroy();
    }
}

struct Shared {
    void* object;
    Reference reference;
    Shared();
    Shared(const Shared&);
};

inline Shared::Shared() : object(0) {}

inline Shared::Shared(const Shared& other) : object(other.object) {
    reference.control = other.reference.control;
    if (reference.control)
        _InterlockedExchangeAdd(&reference.control->strong, 1);
}

struct Record {
    unsigned char padding[12];
    void* object;
    Reference reference;
};

struct Selection {
    void select(void*);
};

struct Base;

struct BaseTable {
    unsigned char padding[0x150];
    Selection* (__thiscall* selection)(Base*);
    Shared (__thiscall* shared)(Base*);
};

struct Base {
    BaseTable* table;
    Record* lookup(void*);
};

struct Transaction {
    unsigned char storage[12];
    Transaction(Shared);
    ~Transaction();
};

struct FlagGuard {
    unsigned char* flag;
    unsigned char previous;
    FlagGuard(unsigned char*);
    ~FlagGuard();
};

inline FlagGuard::FlagGuard(unsigned char* value)
    : flag(value), previous(*value) {
    *flag = 1;
}

inline FlagGuard::~FlagGuard() {
    *flag = previous;
}

struct CSelectionTreeCtrl {
    unsigned char padding[0x8d];
    unsigned char updating;
    unsigned char selecting;
    void forward(int, void*);
    void f(int, void*);
};

void CSelectionTreeCtrl::f(int mode, void* item) {
    if (mode == 0) {
        Base* base = reinterpret_cast<Base*>(
            reinterpret_cast<unsigned char*>(this) - 0x54);
        Record* record = base->lookup(item);
        Shared selected;
        if (record) {
            selected.object = record->object;
            selected.reference.assign(record->reference);
        }
        {
            Transaction transaction(base->table->shared(base));
            Selection* selection = base->table->selection(base);
            {
                FlagGuard guard(&selecting);
                selection->select(selected.object);
            }
        }
        {
            FlagGuard guard(&updating);
            forward(0, item);
        }
    } else {
        forward(mode, item);
    }
}
