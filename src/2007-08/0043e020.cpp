// from server: 32% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct FactoryProduct {
    void* field0;
    void* creator_vptr;
    void* creator_ptr;
    void* field8;

    void sub_43df90(void* a, void* b);
    FactoryProduct(void* a, void* b);
};

void FactoryProduct::sub_43df90(void* a, void* b) {
}

FactoryProduct::FactoryProduct(void* a, void* b) {
    field0 = a;
    sub_43df90(a, b);
    creator_vptr = 0;
    creator_ptr = 0;
    if (a != 0) {
        void** w = (void**)((char*)a + 0xa4);
        if (w != 0) {
            w[0] = a;
            void* old = creator_vptr;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            void* oldptr = w[1];
            if (oldptr != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)oldptr + 8), -1) == 1) {
                    void** vt = (void**)oldptr;
                    void (*dtor)(void*) = (void (*)(void*))vt[2];
                    dtor(oldptr);
                }
            }
            w[1] = old;
        }
    }
}
