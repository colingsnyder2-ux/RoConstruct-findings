// from server: 85% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct SharedControl {
    Control* control;
    void assign(const SharedControl&);
};

struct Shared {
    void* pointer;
    SharedControl control;
    ~Shared();
    void assign(const Shared&);
};

struct Container {
    unsigned char padding[8];
    void* map;
    unsigned char padding2[8];
    unsigned int first;
    unsigned int last;
};

struct Owner {
    unsigned char padding[8];
    Container* container;
};

struct Iterator {
    Owner* owner;
    void* map;
    unsigned int offset;
};

struct S;

struct Action {
    void (__cdecl *callback)(S*);
    S* object;
    Action(void (__cdecl *)(S*), S*);
};

extern void __cdecl callback(S*);
extern Action __cdecl traverse(Iterator, Iterator, Action);
extern Shared __cdecl acquire(void*);

struct Data {
    unsigned char padding[20];
    Owner owner;
    unsigned char remainder[228];
    void* handle;
};

struct S {
    void* reserved;
    Data* data;
    unsigned int reserved2;
    unsigned int state;
    Shared value;
    void f();
};

__forceinline Action::Action(void (__cdecl *fn)(S*), S* objectValue)
    : callback(fn), object(objectValue)
{
}

__forceinline Shared::~Shared()
{
    if (control.control) {
        Control* p = control.control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

__forceinline void Shared::assign(const Shared& other)
{
    pointer = other.pointer;
    control.assign(other.control);
}

void S::f()
{
    Iterator end;
    end.owner = &data->owner;
    Container* c = end.owner->container;
    unsigned int last = c->last;
    if (c->first > last)
        invalid_parameter_noinfo();
    end.map = c->map;
    end.offset = last;

    Iterator begin;
    begin.owner = &data->owner;
    c = begin.owner->container;
    unsigned int first = c->first;
    if (first > c->last)
        invalid_parameter_noinfo();
    begin.map = c->map;
    begin.offset = first;

    traverse(begin, end, Action(callback, this));
    value.assign(acquire(data->handle));
    state = 1;
}
