// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Name;

struct CreatorBase {
    void* field0;
    void registerCreator(const Name* name, void* creator);
};

struct FactoryProduct {
    void* field0;
    CreatorBase field4;
    void* fieldA4;
    void* fieldA8;

    FactoryProduct(const void* arg0, const void* arg1);
};

FactoryProduct::FactoryProduct(const void* arg0, const void* arg1)
{
    this->field0 = (void*)arg0;
    this->field4.registerCreator((const Name*)arg0, (void*)arg1);

    if (arg0 != 0) {
        void* p = (char*)arg0 + 0xa4;
        if (p != 0) {
            *(void**)p = (void*)arg0;

            void* old = this->field4.field0;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }

            void* cur = *(void**)((char*)p + 4);
            if (cur != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)cur + 8), -1) == 1) {
                    void* vtbl = *(void**)cur;
                    void (*fn)(void*) = *(void (**)(void*))((char*)vtbl + 8);
                    fn(cur);
                }
            }
            *(void**)((char*)p + 4) = old;
        }
    }
}
