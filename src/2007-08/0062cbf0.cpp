// from server: 52% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    long refCount;
};

struct SharedPtr {
    void* ptr;
    RefCounted* ref;
};

struct GroupDragTool {
    char pad0[8];
    SharedPtr member8;
    RefCounted* memberC;
    char pad10[0x14];
    void* member24;
    void assignFrom(void*);
};

extern "C" void* __cdecl sub_573d40(void*);
extern "C" SharedPtr* __cdecl sub_5e49e0(SharedPtr*, void*);

void GroupDragTool::assignFrom(void* src)
{
    if (member24) {
        void* a = sub_573d40(member24);
        SharedPtr tmp;
        sub_5e49e0(&tmp, a);
        member8.ptr = tmp.ptr;
        RefCounted* r = tmp.ref;
        if (r) {
            _InterlockedExchangeAdd(&r->refCount, 1);
        }
        if (memberC) {
            if (_InterlockedExchangeAdd(&memberC->refCount, -1) == 1) {
                void** vt = memberC->vptr;
                ((void (__thiscall*)(RefCounted*))vt[2])(memberC);
            }
        }
        memberC = r;
        RefCounted* t = tmp.ref;
        if (t) {
            if (_InterlockedExchangeAdd(&t->refCount, -1) == 1) {
                void** vt = t->vptr;
                ((void (__thiscall*)(RefCounted*))vt[1])(t);
                if (_InterlockedExchangeAdd(&t->refCount, -1) == 1) {
                    void** vt2 = t->vptr;
                    ((void (__thiscall*)(RefCounted*))vt2[2])(t);
                }
            }
        }
    } else {
        member8.ptr = 0;
        RefCounted* c = memberC;
        memberC = 0;
        if (c) {
            if (_InterlockedExchangeAdd(&c->refCount, -1) == 1) {
                void** vt = c->vptr;
                ((void (__thiscall*)(RefCounted*))vt[2])(c);
            }
        }
    }
}
