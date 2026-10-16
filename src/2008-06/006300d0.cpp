// from server: 66% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    long refCount1;
    long refCount2;
};

struct Inner {
    void* getSomething(void** out);
};

struct Outer {
    char pad0[0x10];
    Inner inner;
    char pad1[0x2c8 - 0x10 - sizeof(Inner)];
    void* field_2c8;
    void func1(void*);
    void func2(void*);
};

struct BodyGyro {
    char pad0[0x130];
    Outer outer;
    void method(void* arg1, void* arg2);
};

void BodyGyro::method(void* arg1, void* arg2)
{
    void* local;
    outer.inner.getSomething(&local);
    void* obj = local;
    void* field = *(void**)((char*)obj + 0x2c8);

    if (obj != 0) {
        RefCounted* rc = (RefCounted*)obj;
        if (_InterlockedExchangeAdd(&rc->refCount1, -1) == 1) {
            rc->unknown1();
            if (_InterlockedExchangeAdd(&rc->refCount2, -1) == 1) {
                rc->unknown2();
            }
        }
    }

    Outer* o = (Outer*)((char*)this - 0x130);
    o->func1(field);
    o->func2(field);
}
