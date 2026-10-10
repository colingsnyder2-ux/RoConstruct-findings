// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted
{
    long refcount;
    long refcount2;
    virtual void vf1();
    virtual void vf2();
};

struct CRobloxReportDocView
{
    char pad[0x7c];
    int field_7c;
    char pad2[4];
    int field_84;
    void construct(int, RefCounted*);
};

extern void G1_func_004536a0();
extern void G2_func_00653f40();

void CRobloxReportDocView::construct(int a, RefCounted* b)
{
    if (b)
    {
        _InterlockedExchangeAdd(&b->refcount, 1);
    }
    G1_func_004536a0();
    G2_func_00653f40();
    field_84 = a;
    if (b)
    {
        if (_InterlockedExchangeAdd(&b->refcount, -1) == 1)
        {
            b->vf1();
            if (_InterlockedExchangeAdd(&b->refcount2, -1) == 1)
            {
                b->vf2();
            }
        }
    }
}
