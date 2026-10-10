// from server: 28% by colin
struct C;

struct V {
    char pad0[0x24];
    int f24;
    char pad28[0x20];
    int f48;
    int f4c;
    char pad50[0x4c];
    int f9c;
};

struct B {
    char pad0[0x190];
    int f190;
};

struct D {
    char pad0[0x38];
    int f38;
    char pad3c[0xa8];
    int fe4;
};

struct E {
    char pad0[0x48];
    int f48;
    int f4c;
};

extern "C" int __stdcall sub_6e54b0(int);
extern "C" int __stdcall sub_6308b0(int, int);
extern "C" int __stdcall sub_7383e8(int, int);
extern "C" int __stdcall sub_6e0a90(int);
extern "C" int __stdcall sub_7383ca(int, int, int, int, int, int);
extern "C" int __stdcall sub_738bc2(int, int, int, int, int, int, int);
extern "C" int __stdcall sub_6e61e0(int, int, int, int, int);

struct C {
    char pad0[0x24];
    int f24;
    char pad28[0x24];
    int f4c;
    char pad50[0x4c];
    int f9c;
    int paint(int, int, int, int, int, int);
};

int C::paint(int a1, int a2, int a3, int a4, int a5, int a6)
{
    int sp10, sp18, sp1c, sp2c, sp30, sp34, sp38;
    int ebx = a1;
    int edi = a2;
    int ebp;
    int eax, ecx, edx;

    if (this->f24 != 0 && *(int*)(ebx + 0x190) != 0)
        eax = 1;
    else
        eax = 0;
    ecx = 0;
    if (eax != 0)
        ecx = 1;
    ecx += 0x1e;
    sub_6e54b0(ecx);
    sub_6308b0(edi, (int)&sp2c);
    sub_7383e8(edi, 1);

    sp18 = sp34;
    sp10 = sp2c;
    sp1c = sp38;
    ebp = sp30;

    if (sub_6e0a90(ebx) != 0) {
        eax = this->f4c;
        if (eax == -1)
            eax = *(int*)((char*)this + 0x48);
        ecx = sp34;
        edx = sp30;
        eax = sp2c;
        ecx = ecx - eax;
        sub_7383ca(edi, eax, edx, ecx, 1, eax);
        edx = *(int*)this;
        edx = *(int*)(edx + 0x5c);
        sp2c = sp2c;
        sub_738bc2(edi, sp2c, sp30, sp34, sp38, 0, 0);
        ebp++;
    }

    edx = *(int*)this;
    edx = *(int*)(edx + 0x70);
    sub_6e61e0(0, 0, 0, 0, 0);

    eax = *(int*)ebx;
    edx = *(int*)(eax + 0x144);
    if (edx != 0) {
        eax = this->f9c;
        edx = *(int*)eax;
        edx = *(int*)(edx + 0x58);
        sub_738bc2(0, 0, 0, 0, 0, 0, 0);
    } else {
        eax = this->f9c;
        if (*(int*)(eax + 0x38) != 2) {
            eax = *(int*)(eax + 0xe4);
            ecx = *(int*)(eax + 0x4c);
            if (ecx == -1)
                ecx = *(int*)(eax + 0x48);
            edx = *(int*)(eax + 0x4c);
            if (edx == -1)
                eax = *(int*)(eax + 0x48);
            else
                eax = edx;
            edx = sp34;
            ecx = sp38;
            eax = sp30;
            ecx = ecx - eax + 2;
            edx = edx - sp2c + 2;
            sub_738bc2(edi, sp2c - 1, sp30 - 1, edx, ecx, 0, 0);
        }
    }

    sub_6e61e0(0, 0, 0, 0, 0);
    sub_6e61e0(0, 0, 0, 0, 0);
    sub_6e61e0(0, 0, 0, 0, 0);
    sub_6e61e0(0, 0, 0, 0, 0);
    return 0;
}
