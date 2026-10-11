// from server: 16% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __stdcall sub_7A8BEA();
extern "C" void __stdcall sub_7A89B2();
extern "C" void* __stdcall sub_5AA550();
extern "C" void __cdecl sub_9EA89C();

struct RefCounted {
    void* vptr;
    long refcount;
};

struct VSelection {
    char pad0[0x38];
    void (__stdcall *fn38)(int);
    char pad3c[4];
    RefCounted* obj40;
    RefCounted* obj44;
    void method(int, int);
};

void VSelection::method(int a, int b)
{
    RefCounted* p40 = this->obj40;
    RefCounted* p44 = this->obj44;
    RefCounted* tmp;
    if (p44) {
        tmp = (RefCounted*)((void* (__stdcall*)(RefCounted*))p44->vptr)(p44);
    } else {
        tmp = 0;
    }
    void* args[2];
    args[0] = p40;
    args[1] = tmp;
    ((void (__stdcall*)(void*, int, void**))((void**)a)[1])((void*)a, 1, args);
    void* r = sub_7A8BEA();
    if (!r) {
        sub_9EA89C();
        sub_7A89B2();
    }
    void* q = sub_5AA550();
    void* q2 = *(void**)q;
    void* q3 = *(void**)((char*)q + 4);
    if (q3) {
        _InterlockedExchangeAdd((volatile long*)((char*)q3 + 4), 1);
    }
    this->fn38((int)r);
    if (tmp) {
        ((void (__stdcall*)(RefCounted*, int))tmp->vptr)(tmp, 1);
    }
}
