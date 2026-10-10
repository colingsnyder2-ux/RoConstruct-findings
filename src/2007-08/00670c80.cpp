// from server: 49% by colin
struct CXTPToolBar_CControlButtonExpand {
    char pad0[0x80];
    int field80;
    char pad84[0x78];
    int fieldFC;
    char pad100[0x58];
    int field158;
    char pad15C[0x0C];
    int field168;
    int field16C;
    char pad170[0x28];
    int field198;

    int f(int a, int b, int c);
};

extern "C" int __stdcall sub_63A580(int);
extern "C" int __stdcall sub_639F70();
extern "C" int __stdcall sub_643980(int);
extern "C" int __stdcall sub_6329E0(int);
extern "C" int __stdcall sub_44BB40();
extern "C" int __stdcall sub_645A70(int, int);
extern "C" int __stdcall sub_63A000();
extern "C" int __stdcall sub_63C1B0(int, int, int, int, int);
extern "C" int (__stdcall *g_77ED94)(int, int, int);
extern "C" int __stdcall KillTimer(int, int);

int CXTPToolBar_CControlButtonExpand::f(int a, int b, int c)
{
    int v8;
    int vC;
    int v10;
    int v14;
    int eax;

    eax = this->field198;
    if (eax == -1) {
        int ecx = this->field158;
        if (ecx != 0) {
            eax = sub_63A580(ecx);
        }
    }
    if (eax == 0) {
        return 0;
    }
    if (sub_639F70() != 0) {
        int ecx = this->fieldFC;
        int r = sub_643980(ecx);
        sub_6329E0(r);
    }
    if (this->field168 != 0) {
        int eax2 = this->fieldFC;
        if (*(int*)(eax2 + 0xFC) != 5) {
            int edx = *(int*)eax2;
            int fn = *(int*)(edx + 0x140);
            ((int (__stdcall*)(int,int,int))fn)(0, 0, 0);
            goto after;
        }
    }
    if (sub_639F70() == 0 && this->fieldFC != 0) {
        // placeholder
    }
    if (sub_639F70() == 0 && *(int*)((char*)this + 0xF8) == 4) {
        if (a == 0) {
            int r = sub_63A000();
            int edx = *(int*)r;
            int fn = *(int*)(edx + 0xC0);
            ((int (__stdcall*)(int,int))fn)(r, (int)&v8);
            int eax3 = this->fieldFC;
            if (*(int*)(eax3 + 0xF4) == 2) {
                if (g_77ED94((int)&v8, b, c) != 0) {
                    int eax4 = this->fieldFC;
                    int ecx4 = *(int*)(eax4 + 0x20);
                    KillTimer(ecx4, 0x1b65f);
                    return 0;
                }
            }
            if (*(int*)(this->fieldFC + 0xF4) != 2) {
                if (g_77ED94((int)&v8, b, c) != 0) {
                    if (sub_44BB40() != 4) {
                        sub_63C1B0(v8, vC, v10, v14, 0);
                        return 0;
                    }
                    return 0;
                }
            }
            if (sub_44BB40() == 3) {
                return 0;
            }
        } else {
            if (sub_44BB40() != 4) {
                int edx = *(int*)this;
                int fn = *(int*)(edx + 0x98);
                ((int (__stdcall*)(void))fn)();
                return 0;
            }
            sub_645A70(this->field80, 0);
            return 0;
        }
    }
    if (sub_639F70() != 0 && this->field16C != 0) {
        int ecx = this->field16C;
        int edx = *(int*)ecx;
        int fn = *(int*)(edx + 0x178);
        if (((int (__stdcall*)(void))fn)() == 0) {
            goto after;
        }
    }
    sub_645A70(this->field80, 0);
after:
    if (sub_639F70() != 0) {
        int edx = *(int*)this;
        int fn = *(int*)(edx + 0x108);
        ((int (__stdcall*)(int,int))fn)(b, c);
    }
    return 0;
}
