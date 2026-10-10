// from server: 36% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern void G1_func_00564bb0();

struct RefCounted {
    virtual void destroy();
    virtual void release();
    long refcount;
    long weakcount;
};

struct CRobloxDoc {
    char pad[0x18];
    RefCounted* field_18;
    void sub_0044ec50();
};

void CRobloxDoc::sub_0044ec50()
{
    RefCounted* p = field_18;
    if (p != 0) {
        if (_InterlockedExchangeAdd(&p->refcount, -1) == 1) {
            p->destroy();
            if (_InterlockedExchangeAdd(&p->weakcount, -1) == 1) {
                p->release();
            }
        }
    }
    G1_func_00564bb0();
}
