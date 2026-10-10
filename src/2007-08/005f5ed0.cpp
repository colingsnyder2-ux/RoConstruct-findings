// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* dummy;
};

struct CreatorBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct FactoryProduct {
    void* vptr;
    void* ptr4;
    void* ptr8;
    FactoryProduct(const RBXName* name, void* arg);
};

extern "C" bool __cdecl sub_4879D0(void* out, const RBXName* name);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);

FactoryProduct::FactoryProduct(const RBXName* name, void* arg)
{
    RBXName local;
    if (!sub_4879D0(&local, name)) {
        this->ptr8 = (void*)0x5f5090;
        this->vptr = (void*)0x5f29d0;
        void* mem = sub_62FEF6(8);
        if (mem) {
            *(RBXName*)mem = local;
            void* ref = arg;
            *(void**)((char*)mem + 4) = ref;
            if (ref) {
                _InterlockedExchangeAdd((volatile long*)((char*)ref + 4), 1);
            }
        }
        this->ptr4 = mem;
    }
    if (arg) {
        void* obj = arg;
        if (_InterlockedExchangeAdd((volatile long*)((char*)obj + 4), -1) == 1) {
            CreatorBase* cb = (CreatorBase*)obj;
            cb->v1();
            if (_InterlockedExchangeAdd((volatile long*)((char*)obj + 8), -1) == 1) {
                cb->v2();
            }
        }
    }
}
