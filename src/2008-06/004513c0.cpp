// from server: 53% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern void (__cdecl *invalid_parameter)();

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
    Shared();
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared() {}

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared() {
    if (control && _InterlockedExchangeAdd(&control->strong, -1) == 0) {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 0)
            control->destroy();
    }
}

struct Guard {
    unsigned char storage[12];
    Guard(Shared);
    ~Guard();
};

struct Item {
    virtual void unused();
    virtual ~Item();
};

struct Vector;

struct Proxy {
    Vector* owner;
};

struct Iterator {
    Proxy* proxy;
    Item** position;
};

struct Vector {
    Proxy* proxy;
    unsigned int unused1;
    unsigned int unused2;
    Item** first;
    Item** last;
    Item** limit;
    Iterator* erase(Iterator*, Iterator, Iterator);
};

struct Owned {
    void destroy();
};

struct Source;

struct SourceTable {
    void* unused0;
    void* unused1;
    unsigned long (__stdcall *release)(Source*);
};

struct Source {
    SourceTable* table;
    void close();
};

struct S {
    unsigned char padding[0x78];
    Vector items;
    Owned* owned;
    Source* source;
    Shared* get(Shared*);
    void finish();
    void f();
};

extern S* current;
extern "C" void __cdecl free_object(void*);
extern "C" void __cdecl set_current(int, S*);

void S::f() {
    {
        Shared temporary;
        Guard guard(*get(&temporary));

        Vector* vector = &items;
        Iterator begin;
        begin.position = vector->first;
        if (begin.position > vector->last)
            invalid_parameter();
        begin.proxy = vector->proxy;

        Iterator end;
        end.position = vector->last;
        if (vector->first > end.position)
            invalid_parameter();
        end.proxy = vector->proxy;

        for (;;) {
            if (!begin.proxy || begin.proxy != end.proxy)
                invalid_parameter();
            if (begin.position == end.position)
                break;

            if (!begin.proxy)
                invalid_parameter();
            Vector* owner = begin.proxy ? begin.proxy->owner : 0;
            if (begin.position >= owner->last)
                invalid_parameter();
            delete *begin.position;

            if (!begin.proxy)
                invalid_parameter();
            owner = begin.proxy ? begin.proxy->owner : 0;
            if (begin.position >= owner->last)
                invalid_parameter();
            ++begin.position;
        }

        Iterator last;
        last.position = vector->last;
        if (vector->first > last.position)
            invalid_parameter();
        last.proxy = vector->proxy;

        Iterator first;
        first.position = vector->first;
        if (first.position > vector->last)
            invalid_parameter();
        first.proxy = vector->proxy;

        Iterator result;
        vector->erase(&result, first, last);

        Owned* old = owned;
        owned = 0;
        if (old) {
            old->destroy();
            free_object(old);
        }
    }

    if (source) {
        source->close();
        source->table->release(source);
        source = 0;
    }
    if (current == this)
        set_current(1, this);
    finish();
}
