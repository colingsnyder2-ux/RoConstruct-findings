// from server: 38% by colin
struct Sub1 {
    char pad0[0x54];
    int field54;
    char pad58[0x10];
    int field68;
};

struct Sub2 {
    char pad0[0x40];
    int field40;
};

struct Sub3 {
    char pad0[0x90];
    int field90;
    int field94;
    int field98;
    int field9c;
};

struct Sub4 {
    char pad0[0x5c];
    int field5c;
};

struct Sub5 {
    char pad0[0xa0];
    int fielda0;
};

struct Sub6 {
    char pad0[0xe0];
    int fielde0;
};

struct Main {
    char pad0[0x54];
    Sub1 sub1;
    char pad58[0x8];
    int field60;
    char pad64[0x48];
    int fieldac;
    int fieldb0;
    char padb4[0xec];
    int field1a0;

    int method(int, int, int, int, int);
};

extern "C" int __stdcall func_77dd98();
extern "C" int __stdcall func_77ddbc();

int sub_6d99e0(Main*);
int sub_6db4b0(int);
int sub_6db500(int);
int sub_6e0550(Sub1*);
int sub_65e560(Sub1*);
int sub_71fa60(Sub1*, int*);
int sub_6fe6b0(Sub4*, int, int);
int sub_6fd590(Sub2*, int);
int sub_6fd5c0(Sub2*, int);
int sub_68f1b0(Sub3*);
int sub_6fd1a0(Sub2*, int);
int sub_6fe5d0(Sub4*);

int Main::method(int a1, int a2, int a3, int a4, int a5)
{
    int result = 0;
    int local18 = 0;
    int local14 = 0;
    int local1c = 0;
    int local28 = 0;
    int local30 = 0;
    int local4c = 0;
    int local50 = 0;
    int local38 = 0;
    int local3c = 0;
    int local40 = 0;
    int local44 = 0;
    int local48 = 0;

    if (fieldac != 0 || fieldac == 1) {
        Sub1* s1 = (Sub1*)field60;
        if (s1->field68 != 0) {
            Sub6* s6 = (Sub6*)s1->field68;
            int r = ((int (__thiscall*)(Sub6*))*(int*)(*(int*)s6 + 0x14))(s6);
            if (r == 0) {
                result += sub_6d99e0(this);
            }
        }
    }

    sub_6db4b0(fieldb0);

    Sub1* esi = &sub1;
    Sub5* s5 = (Sub5*)sub_6e0550(esi);
    Sub6* s6b = (Sub6*)s5->fielda0;
    int* p = (int*)s6b->fielde0;
    ((void (__thiscall*)(int*, int*))*(int*)(*p + 0x10))(p, &local28);

    local18 = sub_65e560(esi);
    if (local18 != 0) {
        do {
            int* found = (int*)sub_71fa60(esi, &local18);
            Main* ebp;
            if (found != 0) {
                ebp = (Main*)((char*)found - 0x54);
            } else {
                ebp = 0;
            }

            Sub1* ebx = &ebp->sub1;
            int r2 = ((int (__thiscall*)(Sub1*))*(int*)(*(int*)ebx + 0x14))(ebx);
            if (r2 == 0) {
                Sub4* esi2 = (Sub4*)sub_6db500(fieldb0);
                local14 = sub_65e560(ebx);
                if (local14 != 0) {
                    do {
                        int* found2 = (int*)sub_71fa60(ebx, &local14);
                        Sub3* edi;
                        if (found2 != 0) {
                            edi = (Sub3*)((char*)found2 - 0x20);
                        } else {
                            edi = 0;
                        }

                        Sub2* ebx2 = (Sub2*)sub_6fe6b0(esi2, esi2->field5c, 0);
                        ebx2->field40 = (int)edi;

                        if (ebp->field1a0 != (int)edi) {
                            ((void (__thiscall*)(Sub4*, Sub2*))*(int*)(*(int*)esi2 + 0x20))(esi2, ebx2);
                        }

                        int* p2 = (int*)edi;
                        ((void (__thiscall*)(Sub3*, int*))*(int*)(*p2 + 0x60))(edi, &local1c);
                        local40 = 0;
                        sub_6fd590(ebx2, func_77dd98());
                        local40 = -1;
                        func_77ddbc();
                        sub_6fd5c0(ebx2, ((int (__thiscall*)(Sub3*))*(int*)(*p2 + 0x68))(edi));
                        sub_6fd1a0(ebx2, sub_68f1b0(edi) & 1);

                        if (local14 != 0) {
                            continue;
                        }
                        break;
                    } while (1);
                }

                ((void (__thiscall*)(Sub4*))*(int*)(*(int*)esi2 + 0x2c))(esi2);

                local4c = local38;
                local50 = local3c;
                local40 = local44;
                local44 = local48;

                ((void (__thiscall*)(Sub4*, Sub4*, int, int, int, int, int))*(int*)(*(int*)esi2 + 0x60))(
                    esi2, esi2, local4c, local50, local40, local44, local30);

                ((Sub3*)esi2)->field90 = local4c;
                ((Sub3*)esi2)->field94 = local50;
                ((Sub3*)esi2)->field98 = local40;
                ((Sub3*)esi2)->field9c = local44;

                if (fieldac != 0 && fieldac != 1) {
                    int t = sub_6fe5d0(esi2);
                    t += local30;
                    t += local28;
                    local4c = local4c + t + 8;
                } else {
                    int t = sub_6fe5d0(esi2);
                    t += local30;
                    t += local28;
                    local50 = local50 + t + 8;
                }
            }

            if (local18 != 0) {
                continue;
            }
            break;
        } while (1);
    }

    return result;
}
