// from server: 59% by colin
// roc 2007-08 00614820  unit: seg_00610000  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00614820

extern "C" int __cdecl sub_60EE90(int, int, int, int);
extern "C" int __cdecl sub_613C10(int, int);
extern "C" int __cdecl sub_613CC0();
extern "C" int __cdecl sub_617520(int, int, int);
extern "C" int __cdecl sub_6175C0(int, int);
extern "C" int __cdecl sub_6189F0(int);
extern "C" int __cdecl sub_6288B0(int, int);

struct S {
    int f();
};

int S::f() {
    int local8;
    int local4;
    int ebx_val;
    int esi_val;
    int ebp_val;
    int eax_val;
    int ecx_val;
    int edx_val;

    ebx_val = *(int*)((char*)this + 0x30);
    esi_val = *(int*)ebx_val;
    ebp_val = 0;
    *(char*)(esi_val + 0x4a) = 0;
    local4 = ebx_val;
    local8 = esi_val;

    if (*(int*)((char*)this + 0x10) == 0x29) {
        goto label_614928;
    }

label_614850:
    eax_val = *(int*)((char*)this + 0x10);
    eax_val -= 0x117;
    if (eax_val == 0) {
        goto label_614901;
    }
    eax_val -= 6;
    if (eax_val == 0) {
        goto label_614876;
    }
    sub_6175C0((int)this, 0x7c3484);
    goto label_61490E;

label_614876:
    ebx_val = *(int*)((char*)this + 0x18);
    sub_6189F0((int)this);
    esi_val = *(int*)((char*)this + 0x30);
    eax_val = *(unsigned char*)(esi_val + 0x32);
    ecx_val = eax_val + ebp_val + 1;
    if (ecx_val > 0xc8) {
        edx_val = *(int*)esi_val;
        eax_val = *(int*)(edx_val + 0x3c);
        if (eax_val == 0) {
            eax_val = *(int*)(esi_val + 0x10);
            sub_60EE90(eax_val, 0x7c33a8, 0xc8, 0x7c3414);
        } else {
            ecx_val = *(int*)(esi_val + 0x10);
            sub_60EE90(ecx_val, 0x7c3380, eax_val, 0x7c3414);
        }
        edx_val = *(int*)(esi_val + 0xc);
        sub_617520(edx_val, eax_val, 0);
    }
    sub_613C10((int)this, ebx_val);
    ecx_val = *(unsigned char*)(esi_val + 0x32);
    ebx_val = local4;
    ecx_val += ebp_val;
    *(unsigned short*)(esi_val + ecx_val * 2 + 0xac) = (unsigned short)eax_val;
    esi_val = local8;
    ebp_val++;
    goto label_61490E;

label_614901:
    sub_6189F0((int)this);
    *(char*)(esi_val + 0x4a) |= 2;

label_61490E:
    if (*(char*)(esi_val + 0x4a) != 0) {
        goto label_614928;
    }
    if (*(int*)((char*)this + 0x10) != 0x2c) {
        goto label_614928;
    }
    sub_6189F0((int)this);
    goto label_614850;

label_614928:
    edx_val = ebp_val;
    eax_val = (int)this;
    sub_613CC0();
    edx_val = *(unsigned char*)(esi_val + 0x4a);
    eax_val = *(unsigned char*)(ebx_val + 0x32);
    edx_val &= 1;
    eax_val -= edx_val;
    *(char*)(esi_val + 0x49) = (char)eax_val;
    ecx_val = *(unsigned char*)(ebx_val + 0x32);
    sub_6288B0(ebx_val, ecx_val);
    return 0;
}
