// from server: 51% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct Holder {
    void* ptr;
    void addRef();
    void release();
};

struct Target {
    int field0;
    int field4;
    Holder holder8;
    void assign(const Holder& h);
};

void __stdcall sub_4376D0(Holder* out, const Holder* in);
void __stdcall sub_402A60(Holder* dst, const Holder* src);

void Target::assign(const Holder& h)
{
    Holder tmp;
    sub_4376D0(&tmp, &h);
    field4 = *(int*)tmp.ptr;
    holder8 = *(Holder*)((char*)tmp.ptr + 4);
    sub_402A60(&holder8, (const Holder*)((char*)tmp.ptr + 4));
    if (tmp.ptr) {
        RefCounted* rc = (RefCounted*)tmp.ptr;
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            rc->vptr = rc->vptr;
            ((void (__thiscall*)(RefCounted*))((void**)rc->vptr)[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)rc->vptr)[2])(rc);
            }
        }
    }
}
