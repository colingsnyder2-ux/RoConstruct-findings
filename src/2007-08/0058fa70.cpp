// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
    long weakCount;
};

struct S {
    void* field0;
    void* field4;
    void method(int* out);
};

void helper(int* out, void* a);

void S::method(int* out) {
    int local = 0;
    helper(&local, this->field0);
    out[0] = *(int*)&local;
    void* p = *(void**)((char*)&local + 4);
    out[1] = (int)p;
    if (p) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }
    RefCounted* r = (RefCounted*)this->field4;
    if (r) {
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
            void* vt = r->vptr;
            ((void (__thiscall*)(RefCounted*))((void**)vt)[1])(r);
            if (_InterlockedExchangeAdd(&r->weakCount, -1) == 1) {
                void* vt2 = r->vptr;
                ((void (__thiscall*)(RefCounted*))((void**)vt2)[2])(r);
            }
        }
    }
}
