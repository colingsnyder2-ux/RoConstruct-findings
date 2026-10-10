// from server: 66% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct ScopedLock {
    void* lock;
    ScopedLock(void* l);
    ~ScopedLock();
};

struct FunctionRef {
    void* vptr;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void FunctionRef_dtor();
};

extern "C" void __cdecl sub_5BEE10(void*, int, void*);
extern "C" void __cdecl sub_725750(void*);
extern "C" void __cdecl sub_725770(void*);

void FunctionRef::FunctionRef_dtor()
{
    this->vptr = (void*)0x787200;
    void* p4 = this->field4;
    ScopedLock lock(p4);
    sub_725750(p4);

    if (this->fieldC != 0) {
        if (this->field14 != 0) {
            *(void**)((char*)this->field14 + 0x10) = this->field10;
        }
        if (this->field10 != 0) {
            *(void**)((char*)this->field10 + 0x14) = this->field14;
        }
        if (*(void**)this->fieldC == this) {
            *(void**)this->fieldC = this->field14;
        }
        this->field14 = 0;
        this->field10 = 0;
    }

    if (this->field18 != 0) {
        sub_5BEE10(this->field18, -10000, this->field1C);
        this->field1C = 0;
        this->field18 = 0;
    }

    sub_725770(p4);

    RefCounted* r = (RefCounted*)this->field8;
    if (r != 0) {
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
            void* vt = r->vptr;
            ((void (__thiscall*)(RefCounted*))*(void**)((char*)vt + 4))(r);
            if (_InterlockedExchangeAdd(&r->weakRefCount, -1) == 1) {
                void* vt2 = r->vptr;
                ((void (__thiscall*)(RefCounted*))*(void**)((char*)vt2 + 8))(r);
            }
        }
    }
}
