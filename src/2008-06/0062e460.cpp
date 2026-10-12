// from server: 95% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern char table0[], table10[], table14[], table20[], table24[];
extern char table44[], table64[], table84[], tableA4[], tableC4[];
extern char table130[], table138[], baseTable130[];

struct Control {
    virtual void first() = 0;
    virtual void second() = 0;
    virtual void release() = 0;
    long unused;
    volatile long count;
};

struct Holder {
    void* object;
    Control* control;
    ~Holder();
};

struct Reference {
    unsigned long table;
    unsigned long padding;
    Holder holder;
    ~Reference();
};

struct Base {
    unsigned long words[76];
    ~Base();
};

struct Table {
    unsigned long value;
    ~Table();
};

struct Intermediate : Base {
    Table table;
    unsigned long padding;
    ~Intermediate();
};

struct BodyMover : Intermediate {
    Reference reference;
    ~BodyMover();
};

inline Holder::~Holder()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->count) == 0)
        p->release();
}

inline Reference::~Reference()
{
}

inline Table::~Table()
{
    value = reinterpret_cast<unsigned long>(baseTable130);
}

inline Intermediate::~Intermediate()
{
}

BodyMover::~BodyMover()
{
    words[0] = reinterpret_cast<unsigned long>(table0);
    words[4] = reinterpret_cast<unsigned long>(table10);
    words[5] = reinterpret_cast<unsigned long>(table14);
    words[8] = reinterpret_cast<unsigned long>(table20);
    words[9] = reinterpret_cast<unsigned long>(table24);
    words[17] = reinterpret_cast<unsigned long>(table44);
    words[25] = reinterpret_cast<unsigned long>(table64);
    words[33] = reinterpret_cast<unsigned long>(table84);
    words[41] = reinterpret_cast<unsigned long>(tableA4);
    words[49] = reinterpret_cast<unsigned long>(tableC4);
    table.value = reinterpret_cast<unsigned long>(table130);
    reference.table = reinterpret_cast<unsigned long>(table138);
}
