// from server: 84% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Reference
{
    Control* control;
    Reference& operator=(const Reference&);
    ~Reference()
    {
        Control* p = control;
        if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
};

struct Value
{
    void* object;
    Reference reference;
};

Value __cdecl makeValue(void*);
extern char property[];

struct S
{
    char padding[0x204];
    Value value;
    void notify(const void*);
    void set(void*);
};

void S::set(void* object)
{
    if (value.object != object)
    {
        value = makeValue(object);
        notify(property);
    }
}
