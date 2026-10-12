// from server: 53% by colin
#pragma optimize("g", off)

struct AtomicInt32 {
    unsigned int decrement();
};

struct RefCountedBase {
    virtual void release(int);
};

struct RefCounted {
    AtomicInt32* refCount;
    RefCountedBase* ptr;
};

struct S {
    RefCounted* p;
    void f();
};

void S::f()
{
    if (p != 0) {
        if (p->refCount->decrement() == 0) {
            RefCountedBase* q = p->ptr;
            if (q != 0)
                q->release(1);
            p = 0;
        }
    }
}
