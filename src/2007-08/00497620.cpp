// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct String {
    char pad[0x1c];
};

struct FuncDescBase {
    char pad[0x8];
};

struct BoundFuncDesc : FuncDescBase {
    void construct(String* src, int a, int b, int c, int d);
};

extern "C" void __stdcall string_copy_ctor(String* dst, const String* src);
extern "C" void __stdcall string_dtor(String* s);
extern "C" void* __cdecl sub_630d36(int, int, int, int, int);
extern "C" void __stdcall sub_497340();

void BoundFuncDesc::construct(String* src, int a, int b, int c, int d) {
    String local;
    string_copy_ctor(&local, src);
    void* p = sub_630d36(0, 0x881f4c, 0x88e1c8, 0, *(int*)&local);
    sub_497340();
    RefCounted* rc = (RefCounted*)p;
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void** vt = (void**)rc->vptr;
            ((void (__stdcall*)(RefCounted*))vt[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakRefCount, -1) == 1) {
                void** vt2 = (void**)rc->vptr;
                ((void (__stdcall*)(RefCounted*))vt2[2])(rc);
            }
        }
    }
    string_dtor(&local);
}
