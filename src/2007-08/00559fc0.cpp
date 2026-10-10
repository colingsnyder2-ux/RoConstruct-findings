// from server: 29% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
    long weakCount;
};

struct NameRef {
    void* ptr;
};

struct CreatorResult {
    void* ptr;
    void* ref;
};

extern "C" void __cdecl sub_559470(void* out, void* in);

struct VLocalBackpack {
    CreatorResult* __thiscall create(CreatorResult* result, void* arg);
};

CreatorResult* VLocalBackpack::create(CreatorResult* result, void* arg) {
    CreatorResult tmp;
    tmp.ptr = 0;
    tmp.ref = 0;
    sub_559470(&tmp, arg);
    result->ptr = tmp.ptr;
    result->ref = tmp.ref;
    if (result->ref) {
        _InterlockedExchangeAdd((volatile long*)((char*)result->ref + 4), 1);
    }
    if (tmp.ptr) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)tmp.ptr + 4), -1) == 1) {
            void** vt = *(void***)tmp.ptr;
            ((void (__thiscall*)(void*))vt[1])(tmp.ptr);
            if (_InterlockedExchangeAdd((volatile long*)((char*)tmp.ptr + 8), -1) == 1) {
                void** vt2 = *(void***)tmp.ptr;
                ((void (__thiscall*)(void*))vt2[2])(tmp.ptr);
            }
        }
    }
    return result;
}
