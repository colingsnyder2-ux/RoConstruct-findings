// from server: 77% by colin
struct CXTColorPageCustom {
    char pad_0x00[0x88];
    char field_0x88[0x110 - 0x88];
    char field_0x110[0x798 - 0x110];
    int field_0x798;
    char pad_0x79C[0x7A0 - 0x79C];
    int field_0x7A0;

    void sub_70E320();
};

extern "C" void __stdcall sub_62FEEA(int);
extern "C" void __stdcall sub_70D2A0(double);
extern "C" void __stdcall sub_70C680(int);
extern "C" void __stdcall sub_68EE30(int, int);

extern double g_78D3A8;

void CXTColorPageCustom::sub_70E320() {
    sub_62FEEA(1);
    double d = (double)field_0x798 / g_78D3A8;
    char *edi = field_0x110;
    sub_70D2A0(d);
    int v1 = (*(int (__thiscall **)(char *))(*((int *)edi) + 0x148))(edi);
    char *ebx = field_0x88;
    int v2 = (*(int (__thiscall **)(char *))(*((int *)ebx) + 0x148))(ebx);
    if (v1 != v2) {
        (*(void (__thiscall **)(char *, int, int))(*((int *)ebx) + 0x144))(ebx, v1, 0);
    }
    int *p = (int *)field_0x7A0;
    if (v1 != p[0x124 / 4]) {
        sub_68EE30(v1, 0);
    }
    sub_70C680(v1);
}
