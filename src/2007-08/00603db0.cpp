// from server: 49% by colin
struct SleepStage {
    char pad0[4];
    int field4;
    int field8;
    char padC[4];
    char field10[12];
    char field1C[12];
    char field28[4];
    char field2C[4];
    void stepSleepStage(int);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" int __stdcall sub_4A86F0(int, int, int);
extern "C" int __stdcall sub_5375C0(int, int, int, int, int, int);
extern "C" int __stdcall sub_5B2FC0(int);
extern "C" int __stdcall sub_5B2FD0(int);
extern "C" int __stdcall sub_5B2FF0(int, int);
extern "C" int __stdcall sub_5B3040(int, int);
extern "C" int __stdcall sub_5B3060(int, int);
extern "C" int __stdcall sub_5B3A60(int, int, int, int, int, int);
extern "C" int __stdcall sub_5E29B0(int, int, int);
extern "C" int __stdcall sub_6271E0(int, int);
extern "C" int __stdcall sub_627200(int, int);
extern "C" int __stdcall sub_627240(int);
extern "C" int __stdcall sub_627A30(int, int);

void SleepStage::stepSleepStage(int a) {
    int* p = (int*)this;
    int* esi = (int*)a;
    int* ebx = p;
    int* edi;
    int ebp;
    int local10;
    int local14;
    int local1C;
    int local20;
    int local24;
    int local28;
    int local2C;
    int local30;
    int local34;
    int local38;

    ebp = *(int*)(esi[0x28/4]);
    edi = (int*)((char*)esi + 0x24);
    local14 = ebp;
    local10 = (int)edi;

    while (1) {
        if (edi != 0) {
            if (edi == (int*)((char*)esi + 0x24)) {
                goto skip_invalid;
            }
        }
        _invalid_parameter_noinfo();
    skip_invalid:
        local1C = esi[0x28/4];
        if (ebp == local1C) break;

        if (edi == 0) {
            _invalid_parameter_noinfo();
        }
        if (ebp == edi[1]) {
            _invalid_parameter_noinfo();
        }

        edi = (int*)ebp;
        int* ecx = (int*)edi[1];
        int* edx = (int*)*ecx;
        int eax = edx[1];
        int r = ((int (__thiscall*)(int*))eax)(ecx);
        ebp = r;

        edx = (int*)*ebx;
        eax = edx[1];
        int r2 = ((int (__thiscall*)(int*))eax)(ebx);
        if (ebp > r2) {
            sub_5B3060((int)esi, (int)edi);
            sub_5B2FD0(0);
            if (!(char)0) {
                int* ecx2 = (int*)ebx[2];
                int* edx2 = (int*)*ecx2;
                int eax2 = edx2[5];
                ((int (__thiscall*)(int*, int*))eax2)(ecx2, edi);
            }
        }
        sub_627240((int)&local10);
        ebp = local14;
        edi = (int*)local10;
    }

    local2C = (int)esi;
    if (sub_5B2FC0((int)esi) == 0) {
        int* ecx3 = (int*)ebx[2];
        sub_627200((int)ecx3, (int)esi);
    }

    int r3 = sub_5B2FC0((int)esi);
    if (r3 == 0) {
        edi = (int*)((char*)ebx + 0x10);
    } else if (r3 == 1) {
        edi = (int*)((char*)ebx + 0x1C);
    } else {
        edi = (int*)((char*)ebx + 0x28);
    }

    sub_4A86F0((int)edi, (int)&local10, (int)&local2C);

    ebp = local24;
    int edx3 = local20;
    local2C = 0;
    int eax3 = local2C;
    int ecx4 = local20;
    int eax4 = local20;
    sub_5375C0(eax4, edx3, ebp, (int)&local30, eax3, ecx4);

    edx3 = local38;
    eax3 = local34;
    int ecx5 = local30;
    sub_5B3A60((int)edi, (int)&local28, ecx5, eax3, edx3, ebp);

    sub_5B3040((int)esi, 0);
    sub_5B2FF0((int)esi, 0);

    local2C = (int)esi;
    sub_5E29B0((int)((char*)ebx + 0x1C), (int)&local10, (int)&local2C);

    sub_5B3040((int)esi, 1);
    if (sub_5B2FC0((int)esi) == 0) {
        int* ecx6 = (int*)ebx[2];
        sub_6271E0((int)ecx6, (int)esi);
    }
    sub_627A30(ebx[1], (int)esi);
}
