// from server: 36% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted
{
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct VClientPhysicsItem
{
    void* vptr;
    int offset;
    void invoke(int a, RefCounted* b, int c, int d);
};

void VClientPhysicsItem::invoke(int a, RefCounted* b, int c, int d)
{
    if (b)
    {
        _InterlockedExchangeAdd(&b->refCount, 1);
    }
    void (*fn)(int, RefCounted*, int, int) = *(void (**)(int, RefCounted*, int, int))((char*)this->vptr);
    fn(this->offset + c, b, a, d);
    if (b)
    {
        if (_InterlockedExchangeAdd(&b->refCount, -1) == 1)
        {
            void (*release)(RefCounted*) = *(void (**)(RefCounted*))((char*)b->vptr + 4);
            release(b);
            if (_InterlockedExchangeAdd(&b->weakRefCount, -1) == 1)
            {
                void (*destroy)(RefCounted*) = *(void (**)(RefCounted*))((char*)b->vptr + 8);
                destroy(b);
            }
        }
    }
}
