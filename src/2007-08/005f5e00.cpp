// from server: 25% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CreatorBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct FactoryProduct {
    void* vptr;
    void* field4;
    void* field8;
    FactoryProduct(const void* a, const void* b, const void* c);
};

extern "C" bool __cdecl sub_4879d0(void* out);
extern "C" void* __cdecl sub_62fef6(unsigned int size);

FactoryProduct::FactoryProduct(const void* a, const void* b, const void* c)
{
    void* local8 = 0;
    void* local4 = 0;
    bool flag = sub_4879d0(&local8);
    if (!flag) {
        this->field8 = (void*)0x5f5060;
        this->vptr = (void*)0x5f2730;
        void* mem = sub_62fef6(8);
        if (mem) {
            *(void**)mem = local8;
            *(void**)((char*)mem + 4) = local4;
            if (local4) {
                _InterlockedExchangeAdd((volatile long*)((char*)local4 + 4), 1);
            }
        }
        this->field4 = mem;
    }
    if (local4) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)local4 + 4), -1) == 1) {
            CreatorBase* obj = (CreatorBase*)local4;
            obj->v1();
            if (_InterlockedExchangeAdd((volatile long*)((char*)local4 + 8), -1) == 1) {
                obj->v2();
            }
        }
    }
}
