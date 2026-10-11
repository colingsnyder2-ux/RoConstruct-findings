// from server: 59% by colin
struct S {
    char pad0[4];
    int field4;
    char pad8[4];
    int fieldC;
    char pad10[0x10];
    int field20;
    int method();
};

extern "C" int __stdcall sub_5805D0(int);
extern "C" int __stdcall sub_57EA40(int);
extern "C" int __stdcall sub_5CDDD0(int);
extern "C" int __stdcall sub_5CDE10(int);
extern "C" int __stdcall sub_58C5C0(int, int);

int S::method() {
    int eax;
    int edi;
    int ecx;

    ecx = field20;
    if (ecx != 0) {
        eax = sub_5805D0(ecx);
    } else {
        eax = 0;
    }
    ecx = eax;
    edi = sub_57EA40(ecx);

    eax = fieldC;
    ecx = eax + 0x288;
    eax = *(int*)ecx;
    int edx = *(int*)(eax + 4);
    eax = ((int (__stdcall*)(int, int))edx)(ecx, 1);
    ecx = eax;
    sub_5CDDD0(ecx);

    eax = fieldC;
    ecx = eax + 0x288;
    eax = *(int*)ecx;
    edx = *(int*)(eax + 4);
    eax = ((int (__stdcall*)(int, int))edx)(ecx, edi);
    ecx = eax;
    sub_5CDE10(ecx);

    eax = field4;
    ecx = fieldC;
    eax += 4;
    if (*(int*)(eax + 0x18) < 0x10) {
        eax += 4;
    } else {
        eax = *(int*)(eax + 4);
    }
    sub_58C5C0(eax, ecx);

    return 1;
}
