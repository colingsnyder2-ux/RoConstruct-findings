// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ChangePropertyItem {
    void* field0;
    void* field4;
    void construct(void* a, void* b);
};

struct RefCounted {
    void* vptr;
    volatile long refcount;
};

struct Holder {
    void* field0;
    void* field4;
};

extern "C" void __stdcall sub_4a7580(void*, void*);

void ChangePropertyItem::construct(void* a, void* b)
{
    this->field0 = a;
    sub_4a7580(&this->field4, b);
    if (a != 0) {
        Holder* h = (Holder*)((char*)a + 0xa4);
        if (h != 0) {
            h->field0 = a;
            void* p = this->field4;
            if (p != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)p + 8), 1);
            }
            void* q = h->field4;
            if (q != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)q + 8), -1) == 1) {
                    void** vt = *(void***)q;
                    void (*fn)(void*) = (void (*)(void*))vt[2];
                    fn(q);
                }
            }
            h->field4 = p;
        }
    }
}
