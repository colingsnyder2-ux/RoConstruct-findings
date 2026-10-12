// from server: 94% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct ChangeHistoryService;

struct Shared {
    ChangeHistoryService* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        volatile long* count = &p->strong;
        long remaining = _InterlockedExchangeAdd(count, -1) - 1;
        if (!remaining) {
            p->dispose();
            volatile long* weakCount = &p->weak;
            remaining = _InterlockedExchangeAdd(weakCount, -1) - 1;
            if (!remaining)
                p->destroy();
        }
    }
}

struct Record {
    void update();
};

struct History {
    Record* find(Shared object, int value);
};

struct ChangeHistoryService {
    unsigned char padding0[0x134];
    History* history;
    unsigned char padding1[0x2c];
    bool blocked;

    void notify(Shared object, int value);
};

void ChangeHistoryService::notify(Shared object, int value)
{
    if (!blocked && object.pointer != this && history)
        history->find(object, value)->update();
}
