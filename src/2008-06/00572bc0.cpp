// from server: 71% by colin
extern "C" void __cdecl _invalid_parameter_noinfo();

extern "C" int __cdecl sub_6A17C6(int, int, int, int, int);
extern "C" void __cdecl sub_618A40(int, int);

struct RBX_ServiceProvider {
    void sub_48B030(int);
    void sub_572BC0(int);
};

void RBX_ServiceProvider::sub_572BC0(int arg) {
    int* esi;
    int* edi;
    int eax;
    int ebx;
    int local10;
    int local18;
    int local24;

    esi = *(int**)((char*)this - 0x48);
    if (esi == 0) {
        return;
    }
    eax = esi[4];
    ebx = *(int*)0x802890;
    local10 = eax;
    if ((unsigned)esi[3] > (unsigned)eax) {
        ((void (__cdecl*)())ebx)();
    }
    eax = esi[0];
    esi = *(int**)((char*)this - 0x48);
    edi = (int*)esi[3];
    local18 = eax;
    if ((unsigned)edi > (unsigned)esi[4]) {
        ((void (__cdecl*)())ebx)();
    }
    esi = (int*)esi[0];
    while (1) {
        if (esi != 0) {
            if (esi == (int*)local18) {
                goto check_end;
            }
        }
        ((void (__cdecl*)())ebx)();
    check_end:
        if (edi == (int*)local10) {
            return;
        }
        if (esi != 0) {
            eax = esi[0];
        } else {
            ((void (__cdecl*)())ebx)();
            eax = 0;
            if ((unsigned)edi < (unsigned)*(int*)(eax + 0x10)) {
                goto skip1;
            }
            ((void (__cdecl*)())ebx)();
        skip1:
            eax = edi[0];
        }
        if (sub_6A17C6(eax, 0, 0x92907C, 0x929844, 0) != 0) {
            local24 = arg;
            if (esi != 0) {
                eax = esi[0];
            } else {
                ((void (__cdecl*)())ebx)();
                eax = 0;
                if ((unsigned)edi < (unsigned)*(int*)(eax + 0x10)) {
                    goto skip2;
                }
                ((void (__cdecl*)())ebx)();
            skip2:
                eax = edi[0];
            }
            int local20;
            sub_618A40((int)&local20, eax);
            this->sub_48B030(local24);
        }
        if (esi != 0) {
            eax = esi[0];
        } else {
            ((void (__cdecl*)())ebx)();
            eax = 0;
            if ((unsigned)edi < (unsigned)*(int*)(eax + 0x10)) {
                goto skip3;
            }
            ((void (__cdecl*)())ebx)();
        skip3:
            eax = edi[0];
        }
        edi = (int*)((char*)edi + 8);
    }
}
