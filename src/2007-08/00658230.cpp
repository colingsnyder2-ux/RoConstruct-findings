// from server: 63% by colin
struct CXTPReportControl {
    char pad0[0x54];
    int field54;
    char pad58[0x18];
    int field70;
    int field74;
    int field78;
    int field7c;
    char pad80[0x10];
    int field90;
    char pad94[0x1c];
    int fieldb0;
    int fieldb4;
    int fieldb8;
    int fieldbc;
    char padc0[0x140];
    int field200;
    char pad204[0x14];
    int field218;
    void sub_657840(int*, int*);
    void sub_658230(int*);
};

extern "C" int __stdcall sub_738322();
extern "C" void __stdcall sub_630982(int);
extern "C" void __stdcall sub_6308b0(int, int, int);
extern "C" int __stdcall sub_680000(int*, int);

void CXTPReportControl::sub_658230(int* param) {
    int local10;
    int local14;
    int local18;
    int local1c;
    int local24;
    int local28;

    if (sub_738322() & 0x2000) {
        sub_630982(0x100);
    }

    int* edi = (int*)fieldb0;
    sub_680000(&local24, (int)this);
    int ebp = (int)&local24;

    int eax = *edi;
    int edx = *(int*)(eax + 0x70);
    edx = ((int (__thiscall*)(void*, void*))edx)(edi, this);
    sub_6308b0((int)param, ebp, edx);

    int eax2 = field78;
    int* edi2 = (int*)field200;
    int edx2 = field70;
    int ecx2 = *(int*)((char*)edi2 + 0x9c);
    int ebp2 = *edi2;
    local28 = eax2;
    int eax3 = fieldbc;
    ecx2 += edx2;

    int tmp[4];
    tmp[0] = edx2;
    tmp[1] = field74;
    tmp[2] = ecx2;
    tmp[3] = field7c;

    int edx3 = *(int*)(ebp2 + 0x58);
    ((void (__thiscall*)(void*, int, int, int*))edx3)(edi2, (int)param, eax3, tmp);

    int eax4 = *edi2;
    int edx4 = *(int*)(eax4 + 0x5c);
    ((void (__thiscall*)(void*, int, int*))edx4)(edi2, (int)param, &field90 - 0x30);

    sub_657840((int*)&field90, param);

    int ecx5 = *(int*)((char*)this + 0x80);
    int eax5 = *(int*)((char*)this + 0x8c);
    int edx5 = *(int*)((char*)this + 0x88);
    local10 = ecx5;
    int ecx6 = *(int*)((char*)this + 0x84);
    local1c = eax5;
    eax5 -= ecx6;
    local14 = ecx6;
    local18 = edx5;

    if (eax5 > 0) {
        int ecx7 = fieldbc;
        int eax6 = *edi2;
        int eax7 = *(int*)(eax6 + 0x60);
        ((void (__thiscall*)(void*, int, int*, int))eax7)(edi2, (int)param, &local10, ecx7);
    }

    if (field218 != -1) {
        int edx6 = *(int*)this;
        int eax8 = *(int*)(edx6 + 0x1dc);
        ((void (__thiscall*)(void*, int))eax8)(this, (int)param);
    }

    field54 = 0;
}
