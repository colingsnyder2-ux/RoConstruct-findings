// from server: 51% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    long refCount;
};

struct ArgHolder {
    void* p0;
    void* p1;
};

struct VReplicatorBoundFuncDesc {
    void* vptr;
    void* function;
    void* signature;
    bool init(ArgHolder* out);
    VReplicatorBoundFuncDesc(void* fn, const char* name, int security, int attributes);
};

extern "C" bool __cdecl sub_4879D0(void* out);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);

VReplicatorBoundFuncDesc::VReplicatorBoundFuncDesc(void* fn, const char* name, int security, int attributes)
{
    ArgHolder holder;
    holder.p0 = 0;
    holder.p1 = 0;

    if (!sub_4879D0(&holder)) {
        this->signature = (void*)0x4b0bc0;
        this->vptr = (void*)0x4ae4f0;
        void* mem = sub_62FEF6(8);
        if (mem) {
            *(void**)mem = holder.p0;
            *((void**)mem + 1) = holder.p1;
            if (holder.p1) {
                _InterlockedExchangeAdd((volatile long*)((char*)holder.p1 + 4), 1);
            }
        }
        this->function = mem;
    }

    if (holder.p1) {
        RefCounted* rc = (RefCounted*)holder.p1;
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void** vt = rc->vptr;
            ((void (__thiscall*)(RefCounted*))vt[1])(rc);
            if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
                void** vt2 = rc->vptr;
                ((void (__thiscall*)(RefCounted*))vt2[2])(rc);
            }
        }
    }
}
