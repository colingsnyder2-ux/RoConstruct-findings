// from server: 25% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __stdcall sub_719C7A(int, int, int, int, int);
extern "C" void __stdcall sub_719A4A(void*, void*);
extern "C" void __stdcall sub_5E8210();
extern "C" void __stdcall sub_5E8E00();

struct RefCounted {
    void* vptr;
    long refcount;
};

struct VDebrisService {
    char pad0[0x38];
    void (__stdcall *fn38)(int);
    char pad3c[4];
    RefCounted* p40;
    RefCounted* p44;
    RefCounted* p48;
    RefCounted* p4c;
    void method(int, int);
};

void VDebrisService::method(int a, int b)
{
    RefCounted* r40 = p40;
    RefCounted* r44 = p44;
    RefCounted* r48 = p48;
    RefCounted* r4c = p4c;

    void* v44 = 0;
    if (r44) {
        v44 = (void*)((int (__stdcall**)(RefCounted*))r44->vptr)[2](r44);
    }

    void* v4c = 0;
    if (r4c) {
        v4c = (void*)((int (__stdcall**)(RefCounted*))r4c->vptr)[2](r4c);
    }

    void* args1[2];
    args1[0] = r40;
    args1[1] = v44;
    ((void (__stdcall*)(void*, int, void**))((void**)a)[1])((void*)a, 1, args1);

    void* args2[2];
    args2[0] = r48;
    args2[1] = v4c;
    ((void (__stdcall*)(void*, int, void**))((void**)a)[1])((void*)a, 2, args2);

    int result = sub_719C7A(0, 0x9dbfc4, 0xa1ed10, 0, 0);
    if (result == 0) {
        sub_719A4A((void*)0x8ad350, (void*)0x984bb0);
    }

    sub_5E8210();
    sub_5E8E00();

    fn38(result);

    if (r4c) {
        ((void (__stdcall**)(RefCounted*, int))r4c->vptr)[0](r4c, 1);
    }
    if (r44) {
        ((void (__stdcall**)(RefCounted*, int))r44->vptr)[0](r44, 1);
    }
}
