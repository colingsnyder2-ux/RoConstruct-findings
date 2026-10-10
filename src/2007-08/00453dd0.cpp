// from server: 37% by colin
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
    void construct(RefCounted*);
    void destroy();
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
    Helper* h = (Helper*)&copy;
    h->construct(rc);

    Outer* outer = (Outer*)this;
    Inner* inner = outer->getInner();
    inner->method1();

    inner = outer->getInner();
    inner->method3();

    h->destroy();
}
