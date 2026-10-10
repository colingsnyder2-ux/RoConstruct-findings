// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refCount;
};

struct CreatorBase {
    void construct(void* p, void* q);
};

struct FactoryProduct {
    void* field0;
    CreatorBase creator;
    void* field8;

    FactoryProduct(void* a, void* b);
};

void CreatorBase::construct(void* p, void* q) {
}

FactoryProduct::FactoryProduct(void* a, void* b) {
    field0 = a;
    creator.construct(a, b);
    field8 = 0;
    if (a != 0) {
        RefCounted* rc = (RefCounted*)((char*)a + 0xa4);
        if (rc != 0) {
            *(void**)rc = a;
            void* old = field8;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            void* prev = *(void**)((char*)rc + 4);
            if (prev != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)prev + 8), -1) == 1) {
                    void** vtbl = *(void***)prev;
                    void (*fn)(void*) = (void (*)(void*))vtbl[2];
                    fn(prev);
                }
            }
            *(void**)((char*)rc + 4) = old;
        }
    }
}
