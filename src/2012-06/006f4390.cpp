// from server: 47% by Intel
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCountedObject {
    void* vtable;
    long refCount1;
    long refCount2;
};

struct ClearBackpackBase {
    virtual void sub_6FB7B0();
};

struct ClearBackpack : ClearBackpackBase {
    char padding[0x18];
    RefCountedObject* object;
    void ClearBackpack_dtor();
};

void ClearBackpack::ClearBackpack_dtor() {
    RefCountedObject* obj = this->object;
    if (obj) {
        if (_InterlockedExchangeAdd(&obj->refCount1, -1) == 1) {
            typedef void (__thiscall *DestructorFn)(RefCountedObject*);
            DestructorFn dtor = (DestructorFn)*((void**)obj->vtable + 1);
            dtor(obj);
            
            if (_InterlockedExchangeAdd(&obj->refCount2, -1) == 1) {
                typedef void (__thiscall *DeleteFn)(RefCountedObject*);
                DeleteFn del = (DeleteFn)*((void**)obj->vtable + 2);
                del(obj);
            }
        }
    }
    
    this->sub_6FB7B0();
}
