// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ArgHelper {
    void* p0;
    void* p1;
};

struct RefCounted {
    void* vfptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct Target {
    void* field0;
    int field4;
    int field8;
    char pad[0xf8 - 0xc];
    void* fieldF8;
    void invoke(void* a, void* b, void* c);
};

void Target::invoke(void* a, void* b, void* c)
{
    ArgHelper local;
    local.p0 = a;
    local.p1 = b;
    if (b) {
        _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
    }
    void* vtbl = *(void**)this;
    int off = *(int*)((char*)this + 8);
    void* base = *(void**)((char*)this + 0xf8);
    int adj = *(int*)((char*)base + off);
    adj += *(int*)((char*)this + 4);
    void* obj = (char*)this + 0xf8 + adj;
    ((void (__thiscall*)(void*, void*, void*))vtbl)(obj, &local, c);
    if (b) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)b + 4), -1) == 1) {
            void* v = *(void**)b;
            ((void (__thiscall*)(void*))*(void**)((char*)v + 4))(b);
            if (_InterlockedExchangeAdd((volatile long*)((char*)b + 8), -1) == 1) {
                void* v2 = *(void**)b;
                ((void (__thiscall*)(void*))*(void**)((char*)v2 + 8))(b);
            }
        }
    }
}
