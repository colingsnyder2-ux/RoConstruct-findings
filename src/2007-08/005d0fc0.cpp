// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted
{
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
};

struct Backpack
{
    char pad[0x130];
    void func_005d0cd0(int);
    void func_005d0fc0(int, int, RefCounted*);
};

void Backpack::func_005d0fc0(int a, int b, RefCounted* p)
{
    func_005d0cd0(a);
    if (p)
    {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1)
        {
            p->unknown1();
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1)
            {
                p->unknown2();
            }
        }
    }
}
