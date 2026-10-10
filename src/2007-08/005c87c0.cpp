// from server: 53% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl sub_6130C0(void* a, void* b);
extern "C" void __cdecl sub_6139F0(void* a, void* b, int c, int d);

struct RefCounted
{
    long refcount;
    long weakcount;
    virtual void destroy();
    virtual void destroy2();
};

struct Obj
{
    char pad0[0x20];
    void* field20;
    char pad24[4];
    int field28;
    int field2c;
    int field30;
};

void __cdecl sub_5C87C0(Obj* obj)
{
    sub_6130C0(obj, obj->field20);

    RefCounted* rc = *(RefCounted**)((char*)obj - 8);
    long* refp = (long*)((char*)obj - 0xc);
    _InterlockedExchangeAdd(refp, -1);

    if (rc != 0)
    {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1)
        {
            rc->destroy();
            if (_InterlockedExchangeAdd(&rc->weakcount, -1) == 1)
            {
                rc->destroy2();
            }
        }
    }

    sub_6139F0(obj, (void*)obj->field28, obj->field30 * 24, 0);
    sub_6139F0(obj, obj->field20, obj->field2c * 16, 0);
    sub_6139F0(obj, (void*)((char*)obj - 0xc), 0x84, 0);
}
