// from server: 43% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Name;

struct CreatorBase {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
};

struct CreatorImpl {
    void* field0;
    void* field4;
    void* field8;
};

struct FactoryProduct {
    void* field0;
    CreatorImpl impl;
    void construct(void* a, void* b);
    void assign(void* a, void* b);
};

void FactoryProduct::assign(void* a, void* b)
{
    this->field0 = a;
    this->construct(a, b);
    if (a) {
        CreatorImpl* p = (CreatorImpl*)((char*)a + 0xa4);
        if (p) {
            p->field0 = a;
            void* old = this->impl.field0;
            if (old) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            void* cur = p->field4;
            if (cur) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)cur + 8), -1) == 1) {
                    void** vt = *(void***)cur;
                    void (*fn)(void*) = (void (*)(void*))vt[2];
                    fn(cur);
                }
            }
            p->field4 = old;
        }
    }
}
