// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __stdcall sub_6A17C6(int, int, int, int, int);
extern "C" void __stdcall sub_6A158C(int, int);
extern "C" void* __stdcall sub_56D090();

struct RefCounted {
    void* vptr;
    long refcount;
};

struct Obj {
    void* vptr;
};

struct VSelection {
    char pad[0x38];
    void (__thiscall *fn38)(int);
    char pad2[0x40 - 0x3c];
    Obj* obj40;
    Obj* obj44;
    void method(int, int);
};

void VSelection::method(int a, int b)
{
    Obj* p40 = this->obj40;
    Obj* p44 = this->obj44;
    void* local8 = p40;
    void* localc;
    if (p44) {
        void** vt = *(void***)p44;
        void* (__thiscall *f)(Obj*) = (void* (__thiscall *)(Obj*))vt[2];
        localc = f(p44);
    } else {
        localc = 0;
    }
    void** vt2 = *(void***)b;
    void (__thiscall *f2)(int, void**, int) = (void (__thiscall *)(int, void**, int))vt2[1];
    f2(b, &local8, 1);
    int r = sub_6A17C6(0, (int)localc, 0x9291fc, 0x9459f8, 0);
    if (r == 0) {
        sub_56D090();
    }
    sub_56D090();
    RefCounted* rc = (RefCounted*)sub_56D090();
    RefCounted tmp;
    tmp.vptr = rc->vptr;
    tmp.refcount = rc->refcount;
    if (tmp.refcount) {
        _InterlockedExchangeAdd(&tmp.refcount, 1);
    }
    void (__thiscall *f3)(int) = (void (__thiscall *)(int))this->fn38;
    f3((int)this->fn38 + r);
    if (localc) {
        void** vt3 = *(void***)localc;
        void (__thiscall *f4)(int, int) = (void (__thiscall *)(int, int))vt3[0];
        f4((int)localc, 1);
    }
}
