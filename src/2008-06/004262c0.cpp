// from server: 70% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

void* __cdecl operator new(unsigned int);
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Handle {
    void* pointer;
    Control* control;

    __forceinline Handle(const Handle&);
    __forceinline ~Handle();
};

__forceinline Handle::Handle(const Handle& h)
    : pointer(h.pointer), control(h.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

__forceinline Handle::~Handle()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Source;

struct SourceTable {
    void* slots[85];
    Handle (__thiscall* get)(Source*);
};

struct Source {
    SourceTable* table;
};

struct Vector;

struct Proxy {
    Vector* owner;
    __forceinline Proxy(Vector*);
};

__forceinline Proxy::Proxy(Vector* p) : owner(p)
{
}

struct VectorBase {
    Proxy* proxy;
    unsigned int reserved[2];
    void** first;
    void** last;
    void** limit;

    __forceinline VectorBase(Vector*);
    ~VectorBase();
};

__forceinline VectorBase::VectorBase(Vector* p)
    : proxy(new Proxy(p)), first(0), last(0), limit(0)
{
}

struct Vector : VectorBase {
    __forceinline Vector();
    ~Vector();
    void assign(const Vector*);
};

__forceinline Vector::Vector() : VectorBase(this)
{
}

struct Temporary {
    unsigned int storage[3];
    void* value;

    Temporary(Handle);
    ~Temporary();
};

struct Parent {
    unsigned char padding[0x108];
    Vector* selection;
};

struct Item {
    char data[8];
};

struct Target {
    void callback(Item*);
};

struct Callback {
    void (Target::*method)(Item*);
    int adjustment;
    Target* object;
    int extra;
};

struct Iterator {
    Proxy* proxy;
    void** position;
};

Callback __cdecl apply(Iterator, Iterator, Callback);

struct S : Target {
    unsigned char padding0[0x0c];
    Parent* parent;
    unsigned char padding1[0x48];
    Source* source;

    void f();
};

void S::f()
{
    Vector values;
    Callback action;
    {
        Temporary temporary(source->table->get(source));

        if (parent->selection)
            values.assign(parent->selection);

        action.extra = reinterpret_cast<int>(temporary.value);
    }

    action.method = &Target::callback;
    action.adjustment = 0;
    action.object = this;

    void** finish = values.last;
    if (values.first > values.last)
        _invalid_parameter_noinfo();

    Iterator first;
    first.proxy = values.proxy;
    first.position = values.first;
    if (values.first > values.last)
        _invalid_parameter_noinfo();

    Iterator last;
    last.proxy = values.proxy;
    last.position = finish;

    apply(first, last, action);
}
