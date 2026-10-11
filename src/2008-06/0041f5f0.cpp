// from server: 46% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    char pad0[0xc];
    void* begin;
    void* end;
};

struct Mid {
    char pad0[0x10];
    Inner* inner;
};

struct Obj {
    char pad0[0xc];
    Mid* mid;
};

struct Vtbl {
    void* pad0;
    void* pad1;
    void* pad2;
};

struct RefObj {
    Vtbl* vtbl;
    volatile long ref1;
    volatile long ref2;
};

Mid* sub_4153B0(Obj*);
RefObj* sub_413C20(Mid*, RefObj**);

int sub_41F5F0(Obj* self)
{
    Mid* m;
    if (self->mid) {
        m = sub_4153B0(self);
    } else {
        m = 0;
    }
    Inner* in = *(Inner**)((char*)m + 0x154);
    int count = (int)(((char*)in->end - (char*)in->begin) >> 3);
    if (count == 1) {
        RefObj* tmp = 0;
        RefObj* r = sub_413C20(m, &tmp);
        RefObj* result = *(RefObj**)r;
        if (tmp) {
            if (_InterlockedExchangeAdd(&tmp->ref1, -1) == 1) {
                ((void (__thiscall*)(RefObj*))tmp->vtbl->pad1)(tmp);
                if (_InterlockedExchangeAdd(&tmp->ref2, -1) == 1) {
                    ((void (__thiscall*)(RefObj*))tmp->vtbl->pad2)(tmp);
                }
            }
        }
        return (int)result;
    }
    if (count == 0) {
        return *(int*)((char*)self->mid + 0x204);
    }
    return 0;
}
