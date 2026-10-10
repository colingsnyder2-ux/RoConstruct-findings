// from server: 44% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct CreatorResult {
    void* ptr;
    RefCounted* ref;
};

struct Creator {
    CreatorResult* Create(CreatorResult* result);
};

extern "C" void* __cdecl sub_426B40(void** out);

CreatorResult* Creator::Create(CreatorResult* result) {
    void* temp = 0;
    void* obj = sub_426B40(&temp);
    result->ptr = *(void**)obj;
    result->ref = *(RefCounted**)((char*)obj + 4);
    if (result->ref) {
        _InterlockedExchangeAdd((volatile long*)((char*)result->ref + 4), 1);
    }
    if (temp) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)temp + 4), -1) == 1) {
            (*(void(__thiscall**)(void*))((*(void***)temp)[1]))(temp);
            if (_InterlockedExchangeAdd((volatile long*)((char*)temp + 8), -1) == 1) {
                (*(void(__thiscall**)(void*))((*(void***)temp)[2]))(temp);
            }
        }
    }
    return result;
}
