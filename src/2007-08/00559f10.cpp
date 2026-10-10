// from server: 49% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct Creator {
    void* vptr;
    void* factory;
};

extern "C" void* __cdecl sub_559E90(void** out);

void __stdcall sub_559F10(Creator* out, void* arg) {
    void* temp = 0;
    sub_559E90(&temp);
    out->vptr = *(void**)temp;
    void* obj = *(void**)((char*)temp + 4);
    out->factory = obj;
    if (obj) {
        _InterlockedExchangeAdd((volatile long*)((char*)obj + 4), 1);
    }
    RefCounted* rc = (RefCounted*)arg;
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            (*(void(__thiscall**)(RefCounted*))(*(void***)rc)[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakRefCount, -1) == 1) {
                (*(void(__thiscall**)(RefCounted*))(*(void***)rc)[2])(rc);
            }
        }
    }
}
