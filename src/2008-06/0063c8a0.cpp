// from server: 24% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" {
typedef unsigned int DWORD;
}

extern "C" {
void* __cdecl sub_598cb0();
void __cdecl sub_513220();
void __cdecl sub_4782d0();
void __cdecl sub_518b90();
void __cdecl sub_476700();
void __cdecl sub_478330();
void __cdecl sub_5d90a0();
void* __cdecl sub_5e7570();
void __cdecl sub_5e8200();
void __cdecl sub_5e82c0();
void __cdecl sub_60e8f0();
void __cdecl sub_614170();
void __cdecl sub_5e7760();
void __cdecl sub_4b2620();
void __cdecl sub_4025b0();
void __cdecl sub_5e4450();
void __cdecl sub_5d8b10();
void __cdecl sub_5e4470();
void __cdecl sub_5e4490();
void __cdecl sub_5e44c0();
void __cdecl sub_55a8f0();
}

struct VSeat {
    char pad0[0x418];
    void* field_418;
    char pad41c[0x4];
    void func(int);
};

void VSeat::func(int arg) {
    void* p = sub_598cb0();
    sub_513220();
    float f1 = *(float*)((char*)p + 0x24);
    float f2 = *(float*)((char*)p + 0x28);
    float f3 = *(float*)((char*)p + 0x2c);
    sub_4782d0();
    sub_518b90();
    sub_4782d0();
    sub_518b90();
    sub_598cb0();
    sub_476700();
    sub_478330();
    sub_476700();
    void* ebp = (void*)arg;
    sub_5d90a0();
    void* edi = sub_5e7570();
    void* ebx = *(void**)((char*)edi + 0x24);
    ebx = *(void**)((char*)ebx + 0x1c);
    if (ebx == edi) {
        sub_5e8200();
        if (!(*(unsigned char*)0x97d580 & 1)) {
            *(DWORD*)0x97d580 |= 1;
            sub_614170();
        }
    } else {
        sub_5e82c0();
        sub_5e82c0();
        sub_60e8f0();
        sub_476700();
        sub_5e8200();
        if (!(*(unsigned char*)0x97d580 & 1)) {
            *(DWORD*)0x97d580 |= 1;
            sub_614170();
        }
    }
    sub_5e7760();
    sub_598cb0();
    sub_476700();
    sub_5e82c0();
    sub_476700();
    sub_4b2620();
    void* v = *(void**)0;
    field_418 = v;
    sub_4025b0();
    void* q = *(void**)((char*)this + 0x418);
    sub_5e4450();
    void* r = *(void**)((char*)this + 0x418);
    sub_5d8b10();
    sub_5e4470();
    sub_5e4490();
    sub_5e44c0();
    sub_55a8f0();
}
