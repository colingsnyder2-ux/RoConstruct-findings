// from server: 52% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern void* __cdecl operator new(unsigned int);
extern void __cdecl operator delete(void*);

struct Object {
    unsigned char data[72];
    Object();
};

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct ControlPtr {
    Control* value;
    ControlPtr(Object*);
    ~ControlPtr();
};

__forceinline ControlPtr::~ControlPtr()
{
    Control* p = value;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Shared {
    Object* object;
    Control* control;
    Shared(Object*, Control*);
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(Object* p, Control* c)
    : object(p), control(c)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

__forceinline Shared::Shared(const Shared& p)
    : object(p.object), control(p.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Bound {
    void* function;
    Object* object;
    Control* control;
    ~Bound();
};

__forceinline Bound::~Bound()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

extern void __cdecl func_0041d760();
extern void __cdecl func_0047d410(...);
extern Bound __cdecl func_0063b770(void (__cdecl*)(), Shared);
extern bool __cdecl func_0060a2f0(const Bound*);

typedef void (__cdecl* Manager)(void*, void*, int);

struct FunctionTable {
    Manager manager;
};

extern const FunctionTable function_table;
extern const unsigned char callback_tag[];

struct Function {
    const FunctionTable* table;
    unsigned int padding;
    void* function;
    Object* object;
    Control* control;
    Function(const Bound&);
    ~Function();
};

__forceinline Function::Function(const Bound& b)
{
    padding = 0;
    if (!func_0060a2f0(&b)) {
        function = b.function;
        object = b.object;
        control = b.control;
        if (control)
            _InterlockedExchangeAdd(&control->strong, 1);
        table = &function_table;
    } else {
        table = 0;
    }
}

__forceinline Function::~Function()
{
    if (table) {
        Manager manager = table->manager;
        if (manager)
            manager(&function, &function, 1);
    }
}

struct Callback {
    unsigned char data[32];
    Callback(const Function&, const unsigned char*);
    ~Callback();
};

struct S {
    Object* object;
    ControlPtr control;
    Callback callback;
    S();
};

S::S()
    : object(new Object),
      control(object),
      callback(
          (func_0047d410(&control, object, object),
           Function(func_0063b770(
               func_0041d760, Shared(object, control.value)))),
          callback_tag)
{
}
