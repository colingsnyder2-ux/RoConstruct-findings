// from server: 66% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    char pad0[0x08];
    int field_08;
    int field_0c;
    char pad10[0x04];
    int field_14;
    char pad18[0x08];
    int field_20;
    char pad24[0x04];
    int field_28;
    char pad2c[0x08];
    short field_34;
    char pad36[0x3e];
    int field_74;
};

struct Outer {
    char pad0[0x10];
    Inner* field_10;
};

struct RefObj {
    char pad0[0x04];
    volatile long refcount;
    volatile long refcount2;
};

extern "C" int __cdecl sub_6130c0(Inner*, int, int);
extern "C" int __cdecl sub_60f0f0(Inner*, int);
extern "C" int __cdecl sub_5c58d0(Inner*, void*, int);
extern "C" int __cdecl sub_5c8680(Inner*);

int __fastcall sub_5c8860(Outer* self)
{
    Inner* p = self->field_10;
    Inner* esi = *(Inner**)((char*)p + 0x70);

    sub_6130c0(esi, esi->field_20, esi->field_20);
    sub_60f0f0(esi, 1);

    esi->field_74 = 0;

    do {
        int* eax = (int*)esi->field_28;
        esi->field_14 = (int)eax;
        int v = *eax;
        esi->field_08 = v;
        esi->field_0c = v;
        esi->field_34 = 0;
    } while (sub_5c58d0(esi, (void*)0x5c87b0, 0) != 0);

    RefObj* rc = (RefObj*)((char*)esi - 0x0c);
    _InterlockedExchangeAdd(&rc->refcount, -1);

    RefObj* edi = *(RefObj**)((char*)esi - 0x08);
    if (edi != 0) {
        if (_InterlockedExchangeAdd(&edi->refcount, -1) == 1) {
            void** vt = *(void***)edi;
            ((void(__thiscall*)(RefObj*))vt[1])(edi);
        }
        if (_InterlockedExchangeAdd(&edi->refcount2, -1) == 1) {
            void** vt2 = *(void***)edi;
            ((void(__thiscall*)(RefObj*))vt2[2])(edi);
        }
    }

    return sub_5c8680(esi);
}
