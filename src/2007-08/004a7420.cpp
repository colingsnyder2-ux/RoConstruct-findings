// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted
{
    long refCount;
    long weakCount;
    virtual void destroy();
    virtual void destroyWeak();
};

struct VClientPhysicsItem
{
    void* vtable;
    int offset;
    void invoke(int a, int b, int c);
};

void VClientPhysicsItem::invoke(int a, int b, int c)
{
    RefCounted* p = (RefCounted*)b;
    if (p)
    {
        _InterlockedExchangeAdd(&p->refCount, 1);
    }
    void (*fn)(void*, int) = *(void (**)(void*, int))((char*)this->vtable);
    fn((char*)this + this->offset + c, a);
    if (p)
    {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1)
        {
            p->destroy();
            if (_InterlockedExchangeAdd(&p->weakCount, -1) == 1)
            {
                p->destroyWeak();
            }
        }
    }
}
