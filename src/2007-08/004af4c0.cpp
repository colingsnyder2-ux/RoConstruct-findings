// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct CreatorBase {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
};

struct Creator : CreatorBase {
    int field0;
    RefCounted* field4;
    void construct(int* a, int* b);
};

struct FactoryProduct {
    int field0;
    Creator creator;
    FactoryProduct(int* a, int* b);
};

void Creator::construct(int* a, int* b)
{
    this->field0 = (int)a;
    Creator* self = this;
    void* p = (void*)&this->field4;
    (void)p;
    if (a != 0) {
        int* edi = (int*)((char*)a + 0xa4);
        if (edi != 0) {
            *edi = (int)a;
            RefCounted* esi = this->field4;
            if (esi != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)esi + 8), 1);
            }
            RefCounted* ecx = *(RefCounted**)((char*)edi + 4);
            if (ecx != 0) {
                long old = _InterlockedExchangeAdd((volatile long*)((char*)ecx + 8), -1);
                if (old == 1) {
                    void** vt = *(void***)ecx;
                    void (*fn)(void) = (void (*)(void))vt[2];
                    fn();
                }
            }
            *(RefCounted**)((char*)edi + 4) = esi;
        }
    }
}

FactoryProduct::FactoryProduct(int* a, int* b)
{
    this->creator.construct(a, b);
}
