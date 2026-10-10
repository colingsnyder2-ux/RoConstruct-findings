// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CRefCounted
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    volatile long refcount1;
    volatile long refcount2;
};

struct CInstanceExplorer
{
    void* vptr;
    char pad[0x54];
    CRefCounted* field_58;
    void destroy();
};

void CInstanceExplorer::destroy()
{
    this->vptr = (void*)0x787eec;
    CRefCounted* p = this->field_58;
    if (p != 0)
    {
        if (_InterlockedExchangeAdd(&p->refcount1, -1) == 1)
        {
            p->slot1();
            if (_InterlockedExchangeAdd(&p->refcount2, -1) == 1)
            {
                p->slot2();
            }
        }
    }
    extern void __cdecl sub_661eb0(void*);
    sub_661eb0(this);
}
