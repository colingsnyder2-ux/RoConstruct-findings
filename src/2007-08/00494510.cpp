// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
};

struct SharedPtr {
    void* ptr;
    RefCounted* control;
};

struct Creator {
    void* vptr;
    SharedPtr* create(SharedPtr* result);
};

struct Name {
    void* data;
};

extern "C" void* __cdecl sub_494480(Name* name);

void* __cdecl sub_494480(Name* name);

SharedPtr* Creator::create(SharedPtr* result) {
    Name name;
    name.data = 0;
    sub_494480(&name);
    result->ptr = name.data;
    RefCounted* ctrl = *(RefCounted**)&name;
    result->control = ctrl;
    if (ctrl) {
        _InterlockedExchangeAdd(&ctrl->refCount, 1);
    }
    RefCounted* old = result->control;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            void** vt = *(void***)old;
            ((void (__thiscall*)(RefCounted*))vt[1])(old);
            if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
                void** vt2 = *(void***)old;
                ((void (__thiscall*)(RefCounted*))vt2[2])(old);
            }
        }
    }
    return result;
}
