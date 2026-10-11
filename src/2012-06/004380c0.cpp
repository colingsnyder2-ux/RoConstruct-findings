// from server: 4% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* g_00e163bc;
extern "C" void* g_00e163c0;

struct S
{
    void value();
};

void S::value()
{
}
