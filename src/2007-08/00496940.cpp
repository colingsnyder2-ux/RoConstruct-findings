// from server: 52% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
};

struct SharedPtr {
    void* ptr;
    RefCounted* control;
};

struct FuncDescBase {
    void* vptr;
    void* field_4;
    void* field_8;
};

extern "C" int __cdecl sub_4879D0(void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);

struct VPlayersBoundFuncDesc {
    void* vptr;
    void* field_4;
    void* field_8;
    void construct(SharedPtr* arg);
};

void VPlayersBoundFuncDesc::construct(SharedPtr* arg) {
    SharedPtr local;
    local.ptr = 0;
    local.control = 0;

    if (!sub_4879D0(&local)) {
        this->field_8 = (void*)0x495780;
        this->vptr = (void*)0x4940B0;

        void* mem = sub_62FEF6(8);
        if (mem) {
            *(void**)mem = local.ptr;
            *(void**)((char*)mem + 4) = local.control;
            if (local.control) {
                _InterlockedExchangeAdd(&local.control->refcount, 1);
            }
        }
        this->field_4 = mem;
    }

    if (local.control) {
        RefCounted* c = local.control;
        if (_InterlockedExchangeAdd(&c->refcount, -1) == 1) {
            void** vt = (void**)c->vptr;
            ((void (__thiscall*)(RefCounted*))vt[1])(c);
            if (_InterlockedExchangeAdd(&c->refcount, -1) == 1) {
                void** vt2 = (void**)c->vptr;
                ((void (__thiscall*)(RefCounted*))vt2[2])(c);
            }
        }
    }
}
