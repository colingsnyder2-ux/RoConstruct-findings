// from server: 86% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

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
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Records;

struct Record {
    char padding[0xa8];
    void* object;
    Records* getRecords();
};

struct Records {
    int getCount() const;
    Record* getAt(int index);
    void removeAt(int index);
};

struct S {
    void f(int unused, Shared value);
};

void S::f(int unused, Shared value)
{
    Record* record = reinterpret_cast<Record*>(
        reinterpret_cast<char*>(this) - 0x78);

    for (int i = record->getRecords()->getCount() - 1; i >= 0; --i) {
        if (record->getRecords()->getAt(i)->object == value.object) {
            record->getRecords()->removeAt(i);
            break;
        }
    }
}
