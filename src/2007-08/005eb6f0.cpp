// from server: 27% by colin
struct BodyMover {
    void sub_005eb6f0(void*, void*, void*);
};

extern "C" void __stdcall sub_00530100(void*);
extern "C" void __stdcall sub_005099a0(void*, void*, void*);
extern "C" void __stdcall sub_00473080(void*);
extern "C" void __stdcall sub_005095d0(void*, void*);
extern "C" void __stdcall sub_005aad40(void*, void*);
extern "C" void __stdcall sub_00625100(void*);
extern "C" void __stdcall sub_0061a510(void*);

extern "C" float __cdecl fabsf(float);

void BodyMover::sub_005eb6f0(void* a, void* b, void* c)
{
    char* self = (char*)this;
    char* p = (char*)a;
    char* q = (char*)b;
    char* r = (char*)c;

    sub_00530100(p);

    float v44[3];
    sub_005099a0(p + 0x84, v44, q);
    sub_00473080(v44);

    char* ebx = *(char**)(p + 4);
    char* eax = *(char**)(ebx + 4);
    eax = *(char**)(eax + 0x20);
    if (eax) {
        eax += 0x8c;
    } else {
        if (!(*(unsigned char*)0x8bd138 & 1)) {
            *(unsigned int*)0x8bd138 |= 1;
            *(float*)0x8bd12c = 0.0f;
            *(float*)0x8bd130 = 0.0f;
            *(float*)0x8bd134 = 0.0f;
        }
        eax = (char*)0x8bd12c;
    }

    float f20 = *(float*)(eax);
    float f24 = *(float*)(eax + 4);
    float f28 = *(float*)(eax + 8);

    char* ecx = *(char**)(ebx + 0x1c);
    if (ecx) {
        sub_00625100(ecx);
    } else {
        eax = ebx + 0x58;
    }
    sub_005095d0(v44, eax);
    sub_005aad40(v44, &v44[0]);

    float f70 = *(float*)(q + 4) * v44[1] * *(float*)(self + 0x12c);

    ecx = *(char**)(ebx + 0x1c);
    if (ecx) {
        sub_00625100(ecx);
    } else {
        eax = ebx + 0x58;
    }
    sub_005095d0(v44, eax);
    sub_005aad40(v44, &v44[0]);

    float f74 = -(*(float*)(q) * v44[0] * *(float*)(self + 0x12c));

    sub_00530100(p);

    sub_005099a0(p + 0x84, v44, r);

    float f14 = *(float*)(v44 + 4) * f24 + *(float*)(v44 + 8) * f28 + *(float*)(v44) * f20;
    float f18 = *(float*)(v44 + 0x10) * f24 + *(float*)(v44 + 0x14) * f28 + *(float*)(v44 + 0xc) * f20;
    float f1c = *(float*)(v44 + 0x1c) * f24 + *(float*)(v44 + 0x20) * f28 + *(float*)(v44 + 0x18) * f20;

    float f10 = fabsf(f70 - f14);

    ecx = *(char**)(ebx + 0x1c);
    if (ecx) {
        sub_00625100(ecx);
    } else {
        eax = ebx + 0x58;
    }
    sub_005095d0(v44, eax);
    sub_005aad40(v44, &v44[0]);

    if (*(float*)(self + 0x134) * v44[1] > f10) {
        f14 = f70;
    } else {
        f14 = f14 + f70;
    }

    float f70b = fabsf(f74 - f18);

    ecx = *(char**)(ebx + 0x1c);
    if (ecx) {
        sub_00625100(ecx);
    } else {
        eax = ebx + 0x58;
    }
    sub_005095d0(v44, eax);
    sub_005aad40(v44, &v44[0]);

    if (*(float*)(self + 0x138) * v44[2] > f70b) {
        f18 = f74;
    } else {
        f18 = f18 + f74;
    }

    sub_00530100(p);
    sub_00530100(p);

    sub_005099a0(p + 0x84, v44, r);

    float f2c = *(float*)(v44 + 8) * *(float*)(p + 0xc8) + *(float*)(v44 + 4) * *(float*)(p + 0xc4) + *(float*)(v44) * *(float*)(p + 0xc0);
    float f30 = *(float*)(v44 + 0x14) * *(float*)(p + 0xc8) + *(float*)(v44 + 0x10) * *(float*)(p + 0xc4) + *(float*)(v44 + 0xc) * *(float*)(p + 0xc0);

    ecx = *(char**)(ebx + 0x1c);
    if (ecx) {
        sub_00625100(ecx);
    } else {
        eax = ebx + 0x58;
    }
    sub_005095d0(v44, eax);
    sub_005aad40(v44, &v44[0]);

    f14 = f14 - *(float*)(v44 + 4) * v44[1] * *(float*)(self + 0x130);

    ecx = *(char**)(ebx + 0x1c);
    if (ecx) {
        sub_00625100(ecx);
    } else {
        eax = ebx + 0x58;
    }
    sub_005095d0(v44, eax);
    sub_005aad40(v44, &v44[0]);

    f18 = f18 - *(float*)(v44) * v44[2] * *(float*)(self + 0x130);

    sub_00530100(p);

    float f14b = *(float*)(p + 0x84 + 8) * f1c + *(float*)(p + 0x84 + 4) * f18 + *(float*)(p + 0x84) * f14;
    float f18b = *(float*)(p + 0x84 + 0x14) * f1c + *(float*)(p + 0x84 + 0x10) * f18 + *(float*)(p + 0x84 + 0xc) * f14;
    float f1cb = *(float*)(p + 0x84 + 0x20) * f1c + *(float*)(p + 0x84 + 0x1c) * f18 + *(float*)(p + 0x84 + 0x18) * f14;

    f14b = f14b - f20;
    f18b = f18b - f24;
    f1cb = f1cb - f28;

    char* esi = *(char**)(ebx + 0x20);
    if (esi) {
        if (*(unsigned char*)(esi + 4)) {
            sub_0061a510(esi);
        }
        *(float*)(esi + 0x8c) += f14b;
        *(float*)(esi + 0x90) += f18b;
        *(float*)(esi + 0x94) += f1cb;
    }
}
