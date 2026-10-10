// from server: 39% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Sub {
    char pad0[4];
    void dtor();
};

struct Inner {
    char pad0[4];
    void dtor();
};

struct Obj {
    char pad0[0xf4];
    int field_f4;
    int field_f8;
    char pad_fc[0x134 - 0xfc];
    int field_134;
    char pad_138[0x13c - 0x138];
    Sub sub13c;
    Sub sub150;
    Sub sub164;
    char pad_178[0x1e8 - 0x178];
    Inner inner_e8;

    void dtor();
};

extern "C" void __cdecl sub_5402b0();
extern "C" void __cdecl sub_5bd150();
extern "C" void __cdecl sub_7285a0();

void Obj::dtor()
{
    int* p = (int*)this->field_f8;
    *(int*)this = 0x7ac1d4;
    *(int*)((char*)this + 4) = 0x7ac1cc;
    *(int*)((char*)this + 0x10) = 0x7ac1c4;
    *(int*)((char*)this + 0x14) = 0x7ac1b4;
    *(int*)((char*)this + 0x2c) = 0x7ac1a4;
    *(int*)((char*)this + 0x44) = 0x7ac194;
    *(int*)((char*)this + 0x5c) = 0x7ac184;
    *(int*)((char*)this + 0x74) = 0x7ac174;
    *(int*)((char*)this + 0x8c) = 0x7ac164;
    *(int*)((char*)this + 0xe8) = 0x7ac14c;
    int ecx = p[1];
    *(int*)((char*)this + 0xf8 + ecx) = 0x7ac144;
    int* edx = (int*)this->field_f8;
    int eax = edx[1];
    int ecx2 = eax - 0x84;
    *(int*)((char*)this + 0xf4 + eax) = ecx2;

    sub_7285a0();
    sub_7285a0();
    sub_7285a0();

    int edi = this->field_134;
    if (edi != 0) {
        if (_InterlockedExchangeAdd((volatile long*)(edi + 4), -1) == 1) {
            int* edx2 = (int*)edi;
            int eax2 = edx2[1];
            ((void (__thiscall*)(int))eax2)(edi);
            if (_InterlockedExchangeAdd((volatile long*)(edi + 8), -1) == 1) {
                int* eax3 = (int*)edi;
                int edx3 = eax3[2];
                ((void (__thiscall*)(int))edx3)(edi);
            }
        }
    }

    sub_5bd150();

    *(int*)this = 0x7ac0cc;
    *(int*)((char*)this + 4) = 0x7ac0c4;
    *(int*)((char*)this + 0x10) = 0x7ac0bc;
    *(int*)((char*)this + 0x14) = 0x7ac0ac;
    *(int*)((char*)this + 0x2c) = 0x7ac09c;
    *(int*)((char*)this + 0x44) = 0x7ac08c;
    *(int*)((char*)this + 0x5c) = 0x7ac07c;
    *(int*)((char*)this + 0x74) = 0x7ac06c;
    *(int*)((char*)this + 0x8c) = 0x7ac05c;
    sub_5402b0();
}
