// from server: 35% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct VCContent_RefCounted {
    void* vptr;
    long refcount;
};

struct VCContent_Inner {
    void* vptr;
    long refcount;
};

struct VCContent_Outer {
    void* vptr;
    VCContent_Inner* inner;
};

struct VCContent_Result {
    void* vptr;
    VCContent_Inner* inner;
    void* field8;
};

extern "C" void __cdecl sub_56CEF0(void*, void*);
extern "C" void __cdecl sub_56CE80(void*);
extern "C" void __cdecl sub_413F30(void*);
extern "C" void __cdecl sub_414760(void*, void*);
extern "C" void __cdecl sub_413D00(void*);

struct VCContent_ContainedObject {
    VCContent_Result* GetContent(VCContent_Outer* outer);
};

VCContent_Result* VCContent_ContainedObject::GetContent(VCContent_Outer* outer) {
    VCContent_Result* result;
    VCContent_Inner* inner;
    VCContent_Inner* tmp;
    VCContent_Result* ret;

    result = 0;
    sub_56CEF0(&result, outer);
    inner = outer->inner;
    tmp = inner;
    if (tmp != 0) {
        _InterlockedExchangeAdd(&tmp->refcount, 1);
    }
    sub_413F30(&result);
    ret = result;
    result->inner = inner;
    result->field8 = 0;
    sub_414760(&result->field8, 0);
    sub_413D00(&result);
    if (inner != 0) {
        if (_InterlockedExchangeAdd(&inner->refcount, -1) == 1) {
            ((void (__stdcall*)(VCContent_Inner*))((void**)inner->vptr)[1])(inner);
            if (_InterlockedExchangeAdd(&inner->refcount, -1) == 1) {
                ((void (__stdcall*)(VCContent_Inner*))((void**)inner->vptr)[2])(inner);
            }
        }
    }
    sub_56CE80(&result);
    return ret;
}
