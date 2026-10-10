// from server: 56% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct GroupDropTool
{
    long value;
    struct Ref
    {
        long vptr;
        volatile long count;
    };
    Ref* ref;
    void f(void* out);
};

void GroupDropTool::f(void* out)
{
    long* p = (long*)out;
    p[0] = value;
    Ref* r = ref;
    p[1] = (long)r;
    if (r != 0)
        _InterlockedExchangeAdd(&r->count, 1);
}
