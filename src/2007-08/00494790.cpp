// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct CreatorResult {
    void* ptr;
    void* ctrl;
};

struct Creator {
    CreatorResult* create(CreatorResult* result);
};

CreatorResult* GetCreatorResult(CreatorResult* result);

CreatorResult* Creator::create(CreatorResult* result) {
    CreatorResult tmp;
    tmp.ptr = 0;
    tmp.ctrl = 0;
    GetCreatorResult(&tmp);
    result->ptr = tmp.ptr;
    result->ctrl = tmp.ctrl;
    if (tmp.ctrl) {
        _InterlockedExchangeAdd((volatile long*)((char*)tmp.ctrl + 4), 1);
    }
    if (tmp.ptr) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)tmp.ptr + 4), -1) == 1) {
            (*(void(__thiscall**)(void*))((*(void***)tmp.ptr)[1]))(tmp.ptr);
            if (_InterlockedExchangeAdd((volatile long*)((char*)tmp.ptr + 8), -1) == 1) {
                (*(void(__thiscall**)(void*))((*(void***)tmp.ptr)[2]))(tmp.ptr);
            }
        }
    }
    return result;
}
