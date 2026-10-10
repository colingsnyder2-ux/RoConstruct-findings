// from server: 44% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* data;
};

struct CreatorBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct FactoryProductBase {
    void* vptr;
    void* field4;
    void* field8;
};

struct Creator : CreatorBase {
    void* field4;
    long refcount8;
};

struct CreatorsMap {
    void* field0;
    void* field4;
};

extern "C" bool __cdecl sub_4879d0(void*);
extern "C" void* __cdecl sub_62fef6(unsigned int);

struct FactoryProduct : FactoryProductBase {
    FactoryProduct(const RBXName& name, void* arg);
};

FactoryProduct::FactoryProduct(const RBXName& name, void* arg)
{
    RBXName local;
    local.data = 0;
    bool found = sub_4879d0(&local);
    if (!found) {
        this->field8 = (void*)0x5f5020;
        this->vptr = (void*)0x5f2490;
        Creator* c = (Creator*)sub_62fef6(8);
        if (c) {
            c->field4 = local.data;
            c->refcount8 = 1;
            if (arg) {
                _InterlockedExchangeAdd((volatile long*)((char*)arg + 4), 1);
            }
        }
        this->field4 = c;
    }
    if (arg) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)arg + 4), -1) == 1) {
            CreatorBase* cb = (CreatorBase*)arg;
            cb->v1();
            if (_InterlockedExchangeAdd((volatile long*)((char*)arg + 8), -1) == 1) {
                cb->v2();
            }
        }
    }
}
