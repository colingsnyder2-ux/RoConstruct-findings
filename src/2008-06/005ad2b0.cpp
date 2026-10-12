// from server: 68% by king_originala
extern void* __cdecl operator new(unsigned int);
extern void __cdecl release(void*);
extern const char holderTable;
extern const char callableTable;
extern void* __stdcall descriptor(int, int);

struct Owner {
    void* p;
    explicit Owner(void* q) : p(q) {}
    Owner(const Owner& q) : p(q.p) {
        const_cast<Owner&>(q).p = 0;
    }
    ~Owner() {
        if (p)
            release(p);
    }
};

struct Callable {
    const void* table;
    void* object;
    int method;
    int unused;
    int adjustment;
    int virtualAdjustment;

    Callable(void* o, int m, int a, int v)
        : table(&callableTable), object(o), method(m),
          adjustment(a), virtualAdjustment(v) {}
};

struct Base {
    const void* table;
    int storage[5];
    Callable* callable;

    Base(void*, Owner, Owner);
    ~Base();
};

struct Holder : Base {
    Holder(int, int, int, int, int, Owner);
};

Holder::Holder(int a, int b, int method, int adjustment,
               int virtualAdjustment, Owner owner)
    : Base(descriptor(a, b), Owner(0), owner)
{
    table = &holderTable;
    Callable* replacement =
        new Callable(this, method, adjustment, virtualAdjustment);

    if (replacement != callable && callable)
        release(callable);

    callable = replacement;
}
