// from server: 36% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ICreator {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct Creator : ICreator {
    void* field0;
    void* field4;
};

struct FactoryProduct {
    void* field0;
    Creator creator;
    FactoryProduct(void* a, void* b);
};

void __stdcall sub_40E1F0(Creator* self, void* a, void* b);

FactoryProduct::FactoryProduct(void* a, void* b)
{
    this->field0 = a;
    sub_40E1F0(&this->creator, a, b);
    this->creator.field0 = 0;
    if (a != 0) {
        char* p = (char*)a + 0xa4;
        if (p != 0) {
            *(void**)p = a;
            void* old = this->creator.field0;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            void* cur = *(void**)(p + 4);
            if (cur != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)cur + 8), -1) == 1) {
                    void** vt = *(void***)cur;
                    void (*fn)(void*) = (void (*)(void*))vt[2];
                    fn(cur);
                }
            }
            *(void**)(p + 4) = old;
        }
    }
}
