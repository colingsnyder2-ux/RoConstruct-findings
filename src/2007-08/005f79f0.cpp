// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* ptr;
};

struct RefCounted {
    void* vptr;
    volatile long refcount;
};

struct Creator {
    void* vptr;
};

struct CreatorsMap {
    void* head;
};

extern "C" void* __cdecl sub_5F7040(void* out, const void* name);

struct FactoryProductCreator {
    void* vptr;
    void* field4;
};

void __stdcall sub_5F79F0(FactoryProductCreator* out, const void* name);

void __stdcall sub_5F79F0(FactoryProductCreator* out, const void* name)
{
    void* tmp[3];
    tmp[0] = 0;
    sub_5F7040(&tmp[1], name);
    out->vptr = tmp[1];
    void* p = tmp[2];
    out->field4 = p;
    if (p != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }
    void* old = tmp[1];
    if (old != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old + 4), -1) == 1) {
            void** vt = *(void***)old;
            ((void (__stdcall*)(void*))vt[1])(old);
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                void** vt2 = *(void***)old;
                ((void (__stdcall*)(void*))vt2[2])(old);
            }
        }
    }
}
