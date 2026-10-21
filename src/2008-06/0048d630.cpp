// roc 2008-06 0048d630  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 355 bytes
// Draft 1: make_entry + for_each over a Shared range, releases after.
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

__forceinline void add_reference(volatile long* count)
{
    _InterlockedExchangeAdd(count, 1);
}

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared
{
    void* object;
    Control* control;

    Shared(void* object, Control* control) : object(object), control(control) {}
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        add_reference(&control->strong);
}

__forceinline Shared::~Shared()
{
    if (control)
    {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Iterator
{
    void* owner;
    Shared* position;

    Iterator(void* owner, Shared* position) : owner(owner), position(position) {}
};

struct Function
{
    void (__cdecl *invoke)(Shared, Shared);
    Shared context;
};

extern Function __cdecl for_each(Iterator first, Iterator last, Function function);
extern Function __cdecl make_entry(const void* tag, Shared s, bool flag);
extern unsigned char global_byte;
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Range
{
    void* owner;
    int reserved1;
    int reserved2;
    Shared* first;
    Shared* last;
};

void func_0048d630(void* arg1, Control* arg2, Range* arg3, Control* arg4)
{
    bool flag = global_byte;
    Shared s(arg1, arg2);
    Function fn = make_entry((const void*)0x48a690, s, flag);
    if (arg3->first > arg3->last) _invalid_parameter_noinfo();
    if (arg3->first > arg3->last) _invalid_parameter_noinfo();
    for_each(Iterator(arg3->owner, arg3->first), Iterator(arg3->owner, arg3->last), fn);
    if (arg2) arg2->release();
    if (arg4) arg4->release();
}
