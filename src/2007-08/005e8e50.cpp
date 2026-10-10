// from server: 64% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* p;
    void* q;
};

struct CreatorBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct FactoryProduct {
    void* vptr;
    void* field4;
    void* field8;

    void construct(int a, int b, int c);
};

extern "C" char __cdecl sub_4879D0(void* out);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);

void FactoryProduct::construct(int a, int b, int c)
{
    RBXName name;
    name.p = 0;
    name.q = 0;

    char result = sub_4879D0(&name);
    if (result == 0) {
        this->field8 = (void*)0x5e8b60;
        this->vptr = (void*)0x5e8310;

        void* mem = sub_62FEF6(8);
        if (mem != 0) {
            *(void**)mem = name.p;
            *(void**)((char*)mem + 4) = name.q;
            void* ref = name.q;
            if (ref != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)ref + 4), 1);
            }
        }
        this->field4 = mem;
    }

    void* ref = name.q;
    if (ref != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)ref + 4), -1) == 1) {
            CreatorBase* obj = (CreatorBase*)ref;
            obj->v1();
            if (_InterlockedExchangeAdd((volatile long*)((char*)ref + 8), -1) == 1) {
                obj->v2();
            }
        }
    }
}
