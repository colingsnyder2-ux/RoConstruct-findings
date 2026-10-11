// from server: 68% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refCount;
};

struct Inner {
    void method1();
    void method3();
};

struct Outer {
    virtual Inner* getInner();
};

struct Helper {
    Helper(RefCounted*);
    ~Helper();
};

struct CValueItem {
    void f();
};

void CValueItem::f() {
    RefCounted* rc = *(RefCounted**)((char*)this + 0x30c);
    RefCounted* copy = rc;
    if (copy) {
        _InterlockedExchangeAdd(&copy->refCount, 1);
    }
    Helper h(copy);

    Outer* outer = (Outer*)this;
    Inner* inner = outer->getInner();
    inner->method1();

    inner = outer->getInner();
    inner->method3();
}
