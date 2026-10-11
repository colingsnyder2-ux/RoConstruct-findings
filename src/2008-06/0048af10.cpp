// from server: 39% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct GetSetImpl {
    void __cdecl construct(void* a, void* b, void* c);
};

void GetSetImpl::construct(void* a, void* b, void* c)
{
    char* base = (char*)this;
    if (base != 0)
        base -= 0x130;
    else
        base = 0;

    void* args[2];
    args[0] = a;
    args[1] = b;

    if (b != 0)
        _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);

    void** vtbl = *(void***)c;
    void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vtbl[0];
    fn(base, args, c);
}
