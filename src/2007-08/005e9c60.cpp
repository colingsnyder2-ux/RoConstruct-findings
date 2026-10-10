// from server: 57% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct FactoryProduct {
    void* vptr;
    int offset4;
    int offset8;
    void invoke(void* arg1, void* arg2, void* arg3);
};

void FactoryProduct::invoke(void* arg1, void* arg2, void* arg3) {
    RefCounted* rc = (RefCounted*)arg2;
    if (rc) {
        _InterlockedExchangeAdd((volatile long*)((char*)rc + 4), 1);
    }
    void* self = this;
    int off = *(int*)((char*)self + 8);
    int base = *(int*)((char*)arg1 + 0xec);
    int delta = *(int*)(base + off);
    delta += *(int*)((char*)self + 4);
    void* fn = *(void**)self;
    void* target = (char*)arg1 + 0xec + delta;
    ((void (__thiscall*)(void*))fn)(target);
    if (rc) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 4), -1) == 1) {
            void** vt = *(void***)rc;
            ((void (__thiscall*)(void*))vt[1])(rc);
            if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
                void** vt2 = *(void***)rc;
                ((void (__thiscall*)(void*))vt2[2])(rc);
            }
        }
    }
}
