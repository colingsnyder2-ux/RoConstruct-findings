// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Name;

struct Creator {
    void* field0;
    void* field4;
    void construct(void* a, void* b);
};

struct FactoryProduct {
    void* field0;
    Creator creator;
    void FactoryProduct_ctor(void* a, void* b);
};

void FactoryProduct::FactoryProduct_ctor(void* a, void* b) {
    this->field0 = a;
    this->creator.construct(a, b);
    if (a != 0) {
        void** p = (void**)((char*)a + 0xa4);
        if (p != 0) {
            *p = a;
            void* old = this->creator.field0;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            void* old2 = p[1];
            if (old2 != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)old2 + 8), -1) == 1) {
                    void** vt = *(void***)old2;
                    void (*fn)(void*) = (void (*)(void*))vt[2];
                    fn(old2);
                }
            }
            p[1] = old;
        }
    }
}
