// from server: 34% by colin
struct ContentItem {
    char pad0[0x110];
    void* begin;
    char pad1[0x8];
    void* end;
    char pad2[0x4];
    void* end2;
    char pad3[0x4];
    void* field128;
    void* field12c;
    int f();
};

extern "C" void* __cdecl sub_6A0920(int);
extern "C" void __cdecl sub_802890();
extern "C" void sub_43A320(void*, void*, void*);
extern "C" void sub_420110(void*, void*);
extern "C" void sub_43C940(void*, void*, void*, void*, void*, void*);
extern "C" void* __cdecl sub_576F00(unsigned int);
extern "C" void sub_5773C0(void*);
extern "C" void sub_58C5C0(void*, void*);
extern "C" void sub_5A2FE0(void*);
extern "C" void* __cdecl sub_802464(void*);

int ContentItem::f()
{
    void* local60;
    void* local54;
    void* local50;
    void* local4c;
    void* local44;
    void* local40;
    void* local3c;
    void* local38;
    void* local34;
    void* local30;
    void* local2c;
    void* local28;
    void* local24;
    void* local20;
    void* local18;
    void* local48;
    void* local74;
    void* local6c;
    void* local78;
    void* local8;

    void* p = sub_6A0920(4);
    if (p) {
        *(void**)p = &local60;
    } else {
        p = 0;
    }
    local60 = p;
    local54 = 0;
    local50 = 0;
    local4c = 0;

    void* eax = *(void**)((char*)this + 0x128);
    void* edx = *(void**)((char*)eax + 0x230);
    void* esi = *(void**)((char*)this + 0x120);
    eax = (char*)eax + 0x218;
    eax = *(void**)eax;
    local38 = edx;
    local3c = eax;

    if (*(unsigned int*)((char*)this + 0x11c) > (unsigned int)esi) {
        sub_802890();
    }
    void* ecx = *(void**)((char*)this + 0x110);
    local30 = esi;
    esi = *(void**)((char*)this + 0x11c);
    local34 = ecx;
    if ((unsigned int)esi > *(unsigned int*)((char*)this + 0x120)) {
        sub_802890();
    }
    void* edi = *(void**)((char*)this + 0x110);
    local2c = edi;
    local28 = esi;

    while (1) {
        if (edi != 0 && edi == local34) {
        } else {
            sub_802890();
        }
        if (esi == local30) {
            break;
        }
        if (edi != 0) {
            edi = *(void**)edi;
        } else {
            sub_802890();
        }
        if ((unsigned int)esi < *(unsigned int*)((char*)edi + 0x10)) {
        } else {
            sub_802890();
        }
        void* edx2 = *(void**)esi;
        void* ecx2 = *(void**)((char*)this + 0x128);
        local18 = edx2;
        ecx2 = (char*)ecx2 + 0x218;
        sub_43A320(ecx2, &local44, &local18);

        void* edi2 = local44;
        if (edi2 != 0 && edi2 == local3c) {
        } else {
            sub_802890();
        }
        void* esi2 = local40;
        if (esi2 == local38) {
            goto after_inner;
        }
        if (edi2 != 0) {
            edi2 = *(void**)edi2;
        } else {
            sub_802890();
        }
        if (esi2 == *(void**)((char*)0 + 0x18)) {
        } else {
            sub_802890();
        }
        void* ebx = *(void**)((char*)esi2 + 0x1c);
        if ((unsigned int)ebx > *(unsigned int*)((char*)esi2 + 0x20)) {
            sub_802890();
        }
        void* eax2 = *(void**)((char*)esi2 + 0x10);
        local20 = ebx;
        local24 = eax2;

        if (edi2 != 0) {
            edi2 = *(void**)edi2;
        } else {
            sub_802890();
        }
        if (esi2 == *(void**)((char*)edi2 + 0x18)) {
        } else {
            sub_802890();
        }
        void* edi3 = *(void**)((char*)esi2 + 0x20);
        if (*(unsigned int*)((char*)esi2 + 0x1c) > (unsigned int)edi3) {
            sub_802890();
        }
        void* esi3 = *(void**)((char*)esi2 + 0x10);

        while (1) {
            if (eax2 != 0 && eax2 == esi3) {
            } else {
                sub_802890();
            }
            if (local20 == edi3) {
                break;
            }
            if (eax2 != 0) {
                eax2 = *(void**)eax2;
            } else {
                sub_802890();
            }
            if ((unsigned int)local20 < *(unsigned int*)((char*)eax2 + 0x10)) {
            } else {
                sub_802890();
            }
            sub_420110(&local60, local20);
            if (eax2 != 0) {
                eax2 = *(void**)eax2;
            } else {
                sub_802890();
            }
            if ((unsigned int)local20 < *(unsigned int*)((char*)eax2 + 0x10)) {
            } else {
                sub_802890();
            }
            local20 = (char*)local20 + 8;
        }
        goto after_inner2;
after_inner:
        ;
after_inner2:
        if (local2c != 0) {
            local2c = *(void**)local2c;
        } else {
            sub_802890();
        }
        if ((unsigned int)local28 < *(unsigned int*)((char*)local2c + 0x10)) {
        } else {
            sub_802890();
        }
        local28 = (char*)local28 + 4;
        edi = local2c;
        esi = local28;
    }

    void* arg8 = *(void**)((char*)this + 0x120);
    void* edi4 = local40;
    void* eax3 = (void*)0x43A720;
    void* ebx2 = eax3;
    void* eax4 = local50;
    void* ecx3 = local54;
    void* edx3 = (void*)0x71F210;
    local74 = 0;
    local6c = edx3;
    local8 = eax4;
    if ((unsigned int)ecx3 > (unsigned int)eax4) {
        sub_802890();
        eax4 = local50;
        ecx3 = local54;
    }
    void* edx4 = local60;
    local44 = edx4;
    local18 = ecx3;
    if ((unsigned int)ecx3 > (unsigned int)eax4) {
        sub_802890();
    }
    void* ecx4 = local74;
    void* edx5 = local6c;

    void* stack[6];
    stack[0] = ebx2;
    stack[1] = ecx4;
    stack[2] = this;
    stack[3] = edx5;
    stack[4] = edi4;
    stack[5] = arg8;

    sub_43C940(&local78, local44, local18, local8, local44, stack);

    void* esi4 = this;
    void* eax5 = *(void**)((char*)esi4 + 0x128);
    if (*(void**)((char*)eax5 + 0x198) != 0) {
        void* eax6 = *(void**)((char*)eax5 + 0x198);
        local48 = 0;
        local44 = 0;
        local40 = 0;
        sub_576F00((unsigned int)eax6);
        void* edx6 = *(void**)((char*)esi4 + 0x12c);
        void* eax7 = *(void**)((char*)edx6 + 4);
        void* ecx5 = (char*)eax7 + 4;
        void* r = sub_802464(ecx5);
        void* ecx6 = *(void**)((char*)esi4 + 0x128);
        void* edx7 = *(void**)((char*)ecx6 + 0x198);
        sub_58C5C0(r, edx7);
        void* eax8 = *(void**)((char*)esi4 + 0x128);
        void* eax9 = *(void**)((char*)eax8 + 0x198);
        void* edx8 = *(void**)((char*)eax9 + 0x1f0);
        void* ecx7 = (char*)eax9 + 0x1f0;
        void* eax10 = *(void**)edx8;
        ((void(__thiscall*)(void*, int))eax10)(ecx7, 1);
        sub_5773C0(&local48);
    }
    sub_5A2FE0(&local60);
    return 0;
}
