// from server: 50% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl sub_65F600(void* a, void* b);
extern "C" void __cdecl sub_6606F0(void* a, void* b, int c, int d);

struct RefCounted {
    long refcount;
    virtual void destroy();
    virtual void release();
};

struct Obj {
    char pad0[0x20];
    void* field20;
    char pad24[0x04];
    void* field28;
    int field2c;
    int field30;
};

struct Holder {
    char pad0[0x0c];
    Obj* obj;
};

void __cdecl func(Holder* holder)
{
    Obj* o = holder->obj;
    sub_65F600(o, o->field20);

    RefCounted* rc = *(RefCounted**)((char*)o - 8);
    _InterlockedExchangeAdd(&((RefCounted*)((char*)o - 0xc))->refcount, -1);
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            rc->destroy();
        }
        if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
            rc->release();
        }
    }

    int n = o->field30;
    void* p = o->field28;
    int sz = n * 12;
    sub_6606F0(holder, p, sz, 0);
    sub_6606F0(holder, o->field20, o->field2c << 4, 0);
    sub_6606F0(holder, (char*)o - 0xc, 0x84, 0);
}
