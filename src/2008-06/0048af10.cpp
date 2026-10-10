// from server: 27% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Arg0 {
    void* p;
    void* q;
};

struct Arg1 {
    int* refcount;
};

struct Arg2 {
    void** vtable;
};

struct GetSetImpl {
    void construct(Arg0 a, Arg1 b, Arg2 c);
};

void GetSetImpl::construct(Arg0 a, Arg1 b, Arg2 c)
{
    if (b.refcount)
        _InterlockedExchangeAdd((volatile long*)(b.refcount + 1), 1);
    void** vt = c.vtable;
    void (*fn)(void*) = (void (*)(void*))vt[0];
    fn(0);
}
