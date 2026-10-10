// from server: 42% by colin
// roc 2007-08 00657840  unit: CXTPReportControl  size: 650 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00657840

extern "C" {
    int __stdcall InterlockedIncrement(int volatile*);
}

struct CXTPReportControl;

struct CXTPReportControl {
    void sub_657840(int, int);
};

void CXTPReportControl::sub_657840(int a, int b)
{
    int local_14;
    int local_18;
    int local_1c;
    int local_20;
    int local_24;
    int local_28;
    int local_2c;
    int local_30;
    int local_34;
    int local_38;
    int local_3c;
    int local_40;
    int local_44;
    int local_48;
    int local_4c;
    int local_50;
    int local_54;
    int local_58;
    int local_5c;
    int local_60;
    int local_64;
    int local_68;
    int local_6c;
    int local_70;
    int local_74;

    (*(void (__thiscall**)(int))(*(int*)(*(int*)((char*)this + 0x1c0)) + 0x58))(0);
    (*(void (__thiscall**)(int, int))(*(int*)a + 0x38))(a, 1);
    local_14 = *(int*)(b + 4);
    local_24 = (*(int (__thiscall**)(int, int))(*(int*)((char*)this + 0xa0)))(*(int*)((char*)this + 0xa0), local_14);
    if (local_24 == 0) {
        int v = *(int*)((char*)this + 0xb0);
        int e = *(int*)(v + 0x60);
        if (e == -1) e = *(int*)(v + 0x5c);
        (*(void (__thiscall**)(int, int))(*(int*)a + 0x38))(a, e);
        local_68 = 0;
        local_6c = *(int*)((char*)this + 0xb0) + 0x1f8;
        if (!(*(int (__stdcall**)(int*))(0x77dcd0))(&local_68)) {
            local_28 = *(int*)b + 5;
            local_2c = *(int*)(b + 4) + 5;
            local_30 = *(int*)(b + 8) - 5;
            local_34 = *(int*)(b + 0xc) - 5;
            local_38 = *(int*)((char*)this + 0xb0) + 0x20;
            local_3c = a;
            (*(void (__thiscall**)(int*, int*, int))(0x680550))(&local_40, &local_38, a);
            local_68 = 1;
            (*(void (__stdcall**)(int*, int, int))(0x77dcc8))(&local_68, 0x4a811, 0);
            (*(void (__stdcall**)(int*, int))(0x77dd98))(&local_68, 0);
            (*(void (__thiscall**)(int, int))(*(int*)a + 0x70))(a, 0);
            local_68 = 0;
            (*(void (__thiscall**)(int*))(0x6805d0))(&local_40);
        }
        local_68 = -1;
        (*(void (__stdcall**)(int*))(0x77ddbc))(&local_68);
    }
    if ((*(int (__thiscall**)(int, int, int))(*(int*)(*(int*)((char*)this + 0x200)) + 0x7c))(*(int*)((char*)this + 0x200), -1, 1)) {
        local_1c = *(int*)(*(int*)((char*)this + 0x200) + 0x9c);
        local_18 = *(int*)((char*)this + 0xb8);
        if (local_18 < local_24) {
            do {
                int v = (*(int (__thiscall**)(int, int))(*(int*)((char*)this + 0xa0)))(*(int*)((char*)this + 0xa0), local_18);
                if (local_14 > *(int*)(b + 0xc)) break;
                int r = (*(int (__thiscall**)(int, int, int))(*(int*)v + 0x68))(v, a, local_1c);
                int t = r + local_14;
                int u = *(int*)b + local_1c;
                (*(void (__thiscall**)(int, int, int, int, int))(*(int*)v + 0x64))(v, a, u, t, *(int*)((char*)this + 0xbc));
                local_14 = t;
                if ((*(int (__thiscall**)(CXTPReportControl*))(*(int*)this + 0x198))(this)) {
                    (*(void (__thiscall**)(int, int))(*(int*)local_20 + 0x5c))(local_20, v);
                } else {
                    local_20 = v;
                    (*(void (__stdcall**)(int))(0x77d2ec))(v + 4);
                }
                (*(void (__thiscall**)(int, int))(*(int*)(*(int*)((char*)this + 0x1c0) + 0x6c)))(*(int*)((char*)this + 0x1c0), local_20);
                local_18++;
            } while (local_18 < local_24);
        }
    }
}
