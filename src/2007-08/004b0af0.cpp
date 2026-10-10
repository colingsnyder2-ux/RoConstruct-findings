// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
};

struct Holder {
    RefCounted* ptr;
};

struct VReplicatorSignalDesc {
    void* vptr;
    Holder* holder;
    void* field8;
    int ctor(void* arg1, void* arg2, void* arg3);
};

extern "C" char __cdecl sub_4879D0(void* out);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);

int VReplicatorSignalDesc::ctor(void* arg1, void* arg2, void* arg3)
{
    Holder local;
    local.ptr = 0;
    char result = sub_4879D0(&local);
    if (result == 0) {
        this->field8 = (void*)0x4aff00;
        this->vptr = (void*)0x4ae140;
        RefCounted* obj = (RefCounted*)sub_62FEF6(8);
        if (obj != 0) {
            obj->vptr = local.ptr->vptr;
            obj->refcount = local.ptr->refcount;
            if (local.ptr->refcount != 0) {
                _InterlockedExchangeAdd(&local.ptr->refcount, 1);
            }
        }
        this->holder = (Holder*)obj;
    }
    if (local.ptr != 0) {
        if (_InterlockedExchangeAdd(&local.ptr->refcount, -1) == 1) {
            void** vt = (void**)local.ptr->vptr;
            ((void (__thiscall*)(RefCounted*))vt[1])(local.ptr);
            if (_InterlockedExchangeAdd((volatile long*)((char*)local.ptr + 8), -1) == 1) {
                void** vt2 = (void**)local.ptr->vptr;
                ((void (__thiscall*)(RefCounted*))vt2[2])(local.ptr);
            }
        }
    }
    return 0;
}
