// from server: 37% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner
{
    void* p0;
    void* p1;
    void* p2;
    void* p3;
    void* p4;
};

struct S
{
    void f(Inner* a, void* b, void* c, void* d, void* e);
};

extern "C" void __cdecl sub_60F0A0(void*);
extern "C" void __cdecl sub_642C90();

void S::f(Inner* a, void* b, void* c, void* d, void* e)
{
    Inner local;
    local.p0 = b;
    local.p1 = c;
    local.p2 = d;
    if (e)
    {
        _InterlockedExchangeAdd((volatile long*)((char*)e + 4), 1);
    }
    local.p3 = d;
    local.p4 = e;
    if (e)
    {
        _InterlockedExchangeAdd((volatile long*)((char*)e + 4), 1);
    }
    sub_642C90();
    sub_60F0A0(&local);
}
