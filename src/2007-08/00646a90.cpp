// from server: 63% by colin
// roc 2007-08 00646a90  unit: CXTPCommandBar  size: 359 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00646a90

extern "C" short __stdcall GetKeyState(int);

struct CXTPCommandBar {
    int field_0;
    char pad[0xc4];
    int field_c8;
    int field_cc;
    char pad2[0x24];
    int field_f4;
    int field_f8;
    int field_fc;
    int field_100;

    int sub_67a9a0(int, int);
    int sub_6439b0();
    int sub_643980();
    int sub_645a70(int, int);
    int sub_64ea60();
    int sub_634750(int);
    int sub_632520(int);
    int sub_633c70();
    int sub_63023e();
    int sub_630202(int);
    int sub_646a90(int, int, int);
};

int CXTPCommandBar::sub_646a90(int a2, int a3, int a4)
{
    int ebx;
    int ebp;
    int edi;
    int eax;
    int edx;

    ebp = a4;
    ebx = sub_67a9a0(a2, ebp);

    eax = field_cc;
    if (eax != -1) {
        if (field_fc == 5) {
            if (field_f4 == 1) {
                if (ebx == 0 || *(int*)(ebx + 0x80) != eax) {
                    if (eax == field_c8) {
                        edx = *(int*)this;
                        eax = *(int*)(edx + 0x148);
                        ((int (__thiscall*)(CXTPCommandBar*, int, int))eax)(this, -1, 0);
                    }
                    sub_645a70(-1, 0);
                }
            }
        }
    }

    if (ebx == 0) {
        sub_63023e();
        return 0;
    }

    if (sub_6439b0() == 0) {
        edx = *(int*)ebx;
        eax = *(int*)(edx + 0x128);
        if (((int (__thiscall*)(int))eax)(ebx) != 0) {
            eax = sub_64ea60();
            if (sub_630202(eax) != 0) {
                if (GetKeyState(0x12) < 0) {
                    edi = sub_643980();
                    if (edi != 0) {
                        if (*(int*)(edi + 0x60) != 0) {
                            if (*(int*)(*(int*)(edi + 0x74) + 0x44) != 0) {
                                sub_634750(1);
                                sub_645a70(-1, 0);
                                edx = *(int*)this;
                                eax = *(int*)(edx + 0x148);
                                ((int (__thiscall*)(CXTPCommandBar*, int, int))eax)(this, -1, 0);
                                edx = *(int*)ebx;
                                eax = a3;
                                edx = *(int*)(edx + 0x108);
                                ((int (__thiscall*)(int, int, int))edx)(ebx, eax, ebp);
                                sub_634750(0);
                                sub_632520(0);
                                sub_633c70();
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    if (sub_6439b0() != 0) {
        eax = *(int*)ebx;
        edx = *(int*)(eax + 0x128);
        if (((int (__thiscall*)(int))edx)(ebx) == 0) {
            eax = *(int*)ebx;
            edx = *(int*)(eax + 0xe8);
            ((int (__thiscall*)(int, int, int, int))edx)(ebx, 0, a3, ebp);
            return 0;
        }
    }

    eax = *(int*)ebx;
    edx = *(int*)(eax + 0xe8);
    ((int (__thiscall*)(int, int, int, int))edx)(ebx, 0, a3, ebp);
    return 0;
}
