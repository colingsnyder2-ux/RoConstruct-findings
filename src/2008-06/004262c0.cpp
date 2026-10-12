// from server: 57% by king_originala
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
    if (control && _InterlockedExchangeAdd(&control->strong, -1) == 1) {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
            control->destroy();
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

struct Vector {
    Vector** proxy;
    unsigned int reserved[2];
    void** first;
    void** last;
    void** limit;

    __forceinline Vector();
    ~Vector();
    void assign(const Vector*);
};

__forceinline Vector::Vector()
{
    proxy = static_cast<Vector**>(operator new(4));
    if (proxy)
        *proxy = this;
    first = 0;
    last = 0;
    limit = 0;
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

struct S {
    unsigned char padding0[0x0c];
    Parent* parent;
    unsigned char padding1[0x48];
    Source* source;

    void f();
};

void __cdecl callback();
struct Action {
    void (__cdecl* function)();
    unsigned int reserved;
    S* node;
    void* value;
};

struct Iterator {
    Vector** proxy;
    void** position;
};

void __cdecl apply(Iterator*, Iterator, Iterator, Action);

void S::f()
{
    Vector values;
    void* context;
    {
        Temporary temporary(source->table->get(source));
        if (parent->selection)
            values.assign(parent->selection);
        context = temporary.value;
    }

    Action action;
    action.function = callback;
    action.reserved = 0;
    action.node = this;
    action.value = context;

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

    Iterator result;
    apply(&result, first, last, action);
}
