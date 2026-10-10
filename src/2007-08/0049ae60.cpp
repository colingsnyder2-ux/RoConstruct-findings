// from server: 59% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* p;
    void* q;
};

struct CreatorBase {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
};

struct FactoryProduct {
    void* vptr;
    void* field4;
    void* field8;
    void construct(RBXName* out);
};

extern "C" int __cdecl sub_4879D0(RBXName* out);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);

void FactoryProduct::construct(RBXName* out)
{
    RBXName local;
    local.p = 0;
    local.q = 0;
    int ok = sub_4879D0(&local);
    if (ok == 0) {
        this->field8 = (void*)0x49ac60;
        this->vptr = (void*)0x49a560;
        void* mem = sub_62FEF6(8);
        if (mem != 0) {
            *(void**)mem = local.p;
            *(void**)((char*)mem + 4) = local.q;
            void* ctrl = local.q;
            if (ctrl != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)ctrl + 4), 1);
            }
        }
        this->field4 = mem;
    }
    void* ctrl = local.q;
    if (ctrl != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)ctrl + 4), -1) == 1) {
            CreatorBase* obj = (CreatorBase*)ctrl;
            obj->slot1();
            if (_InterlockedExchangeAdd((volatile long*)((char*)ctrl + 8), -1) == 1) {
                obj->slot2();
            }
        }
    }
}
