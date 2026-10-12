// from server: 70% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Object;

struct Shared {
    Object* px;
    Control* pn;
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : px(other.px), pn(other.pn)
{
    if (pn) {
        volatile long* count = &pn->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

__forceinline Shared::~Shared()
{
    Control* control = pn;
    if (control) {
        volatile long* count = &control->strong;
        if (_InterlockedExchangeAdd(count, -1) == 1) {
            control->dispose();
            count = &control->weak;
            if (_InterlockedExchangeAdd(count, -1) == 1)
                control->destroy();
        }
    }
}

struct Iterator {
    unsigned long data[7];
    Iterator(const Iterator&);
};

struct Container {
    unsigned char data[80];
    Iterator begin();
    Iterator end();
};

struct Predicate {
    Iterator first;
    Iterator last;
    Shared* object;
    bool* flag;
    Predicate(Iterator, Iterator, Shared*, bool*);
    Predicate(const Predicate&);
};

struct Dispatcher {
    void apply(void*, Predicate, Predicate);
};

struct Destination {
    unsigned long prefix;
    Dispatcher dispatcher;
};

struct Object {
    long count;
    unsigned long padding;
    Container container;
    Destination* destination;
};

struct Handle {
    Object* px;
    Control* pn;
    Handle(const Handle&);
    ~Handle();
    void* run(Shared, float, void*);
};

struct LocalShared {
    Object* px;
    Control* pn;
    float amount;
    LocalShared(Shared, float);
    ~LocalShared();
};

__forceinline LocalShared::~LocalShared()
{
    Control* control = pn;
    if (control) {
        volatile long* count = &control->strong;
        if (_InterlockedExchangeAdd(count, -1) == 1) {
            control->dispose();
            count = &control->weak;
            if (_InterlockedExchangeAdd(count, -1) == 1)
                control->destroy();
        }
    }
}

struct Flag {
    bool value;
    unsigned char padding[3];
    ~Flag();
};

__forceinline Flag::~Flag()
{
    if (value)
        value = false;
}

void* Handle::run(Shared object, float amount, void* result)
{
    Handle retained(*this);
    LocalShared local(object, amount);
    Flag flag;
    flag.value = false;

    Object* target = retained.px;
    Object* source = px;
    Dispatcher* dispatcher = &source->destination->dispatcher;

    dispatcher->apply(
        result,
        Predicate(target->container.begin(), source->container.end(),
                  reinterpret_cast<Shared*>(&local), &flag.value),
        Predicate(target->container.end(), source->container.end(),
                  reinterpret_cast<Shared*>(&local), &flag.value));

    return result;
}
