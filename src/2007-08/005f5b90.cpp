// from server: 63% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
    long weakRefCount;
};

struct Name {
    void* ptr;
    void* ptr2;
};

struct FactoryProduct {
    void* vptr;
    void* product;
    void* creator;
    void construct(int a, int b, int c);
};

extern "C" int __cdecl sub_4879d0(void*);
extern "C" void* __cdecl sub_62fef6(unsigned int);

void FactoryProduct::construct(int a, int b, int c)
{
    Name name;
    name.ptr = 0;
    name.ptr2 = 0;
    int result = sub_4879d0(&name);
    if (result == 0) {
        this->creator = (void*)0x5f4fe0;
        this->vptr = (void*)0x5f1e50;
        void* mem = sub_62fef6(8);
        if (mem != 0) {
            *(int*)mem = *(int*)&name;
            *(int*)((char*)mem + 4) = *(int*)((char*)&name + 4);
            RefCounted* rc = *(RefCounted**)((char*)&name + 4);
            if (rc != 0) {
                _InterlockedExchangeAdd(&rc->refCount, 1);
            }
        }
        this->product = mem;
    }
    RefCounted* rc = *(RefCounted**)((char*)&name + 4);
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void** vt = *(void***)rc;
            ((void (__thiscall*)(RefCounted*))vt[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakRefCount, -1) == 1) {
                void** vt2 = *(void***)rc;
                ((void (__thiscall*)(RefCounted*))vt2[2])(rc);
            }
        }
    }
}
