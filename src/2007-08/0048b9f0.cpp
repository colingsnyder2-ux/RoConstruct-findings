// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Name;

struct CreatorImpl {
    int field0;
    void construct(Name* name, int arg);
};

struct FactoryProduct {
    Name* name;
    CreatorImpl impl;

    FactoryProduct(Name* n, int a);
};

void __stdcall sub_48B960(CreatorImpl* self, Name* name, int arg);

FactoryProduct::FactoryProduct(Name* n, int a) {
    this->name = n;
    sub_48B960(&this->impl, n, a);
    if (n != 0) {
        void** slot = (void**)((char*)n + 0xa4);
        if (slot != 0) {
            *slot = n;
            void* old = *(void**)&this->impl;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            void* cur = *(void**)((char*)slot + 4);
            if (cur != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)cur + 8), -1) == 1) {
                    void** vt = *(void***)cur;
                    ((void (__stdcall*)(void*))vt[2])(cur);
                }
            }
            *(void**)((char*)slot + 4) = old;
        }
    }
}
