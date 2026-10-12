// from server: 60% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern void* __cdecl operator new(unsigned int);

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Count {
    Control* control;
    Count(int*);
    __forceinline ~Count()
    {
        Control* p = control;
        if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
};

extern void __cdecl func_0047d410(Count*, int*, int*);

struct Callback {
    int tag;
    int* value;
    Count count;

    __forceinline Callback(const int&);
    __forceinline ~Callback();
};

__forceinline Callback::Callback(const int& v)
    : tag(3), value(new int(v)), count(value)
{
    func_0047d410(&count, value, value);
}

__forceinline Callback::~Callback()
{
}

struct Object {
    virtual ~Object();
};

struct Owner {
    Object* object;
    Owner(const void*);
    __forceinline ~Owner()
    {
        if (object)
            delete object;
    }
};

struct Link {
    unsigned long unused[2];
    unsigned long active;
};

struct Item {
    unsigned long unused[7];
    Link* link;
};

struct Shared {
    Item* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

struct Holder {
    Item* object;
    Control* control;
    unsigned long ownerData;
    Shared get();
};

struct Result {
    unsigned long unused;
    void* first;
    void* second;
    bool valid;

    __forceinline Result();
    ~Result();
};

__forceinline Result::Result()
    : first(0), second(0), valid(false)
{
}

struct Receiver {
    Result invoke(Owner*, Callback*, Shared, unsigned long);
};

struct S {
    Receiver* receiver;
    Result f(const int&, Holder*, unsigned long);
};

Result S::f(const int& value, Holder* holder, unsigned long argument)
{
    Link* link = holder->object->link;
    if (!link || !link->active)
        return Result();

    Callback callback(value);
    Owner owner(&holder->ownerData);
    return receiver->invoke(&owner, &callback, holder->get(), argument);
}
