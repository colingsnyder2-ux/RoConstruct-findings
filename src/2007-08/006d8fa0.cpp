// from server: 38% by colin
struct CXTPDockingPane {
    char pad[0x0c];
    int field_0c;
    char pad2[0x90];
    int field_a0;
    int field_a4;
    int field_a8;
    int field_ac;
    int field_b0;
    int field_b4;
    int field_b8;
    int field_bc;
    int field_c0;

    int sub_6d8fa0(int param_1);
};

extern "C" void __stdcall sub_6d7b90(int);
extern "C" void __stdcall sub_6857a0(int, int, int);
extern "C" void __stdcall sub_685720(int, int, int, int);
extern "C" int __stdcall sub_6d7d60(int);
extern "C" int __stdcall sub_6353a0(int, int);
extern "C" void __stdcall sub_66fc80(int, int);

int CXTPDockingPane::sub_6d8fa0(int param_1)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int local_2c;
    int local_28;
    int local_24;
    int local_20;
    int local_1c;
    int local_18;
    int local_14;
    int local_10;
    int local_c;
    int local_8;
    int local_4;

    sub_6d7b90(param_1);
    sub_6857a0(param_1, 0x7cae10, (int)&this->field_a0);
    sub_685720(param_1, 0x7d8d4c, (int)&this->field_a0, 0);
    sub_685720(param_1, 0x7d8d44, (int)&this->field_a0, -1);
    sub_685720(param_1, 0x78acac, (int)&this->field_a4, 0);

    iVar1 = *(int*)(param_1 + 0x20);
    local_2c = 0;

    if (*(int*)(param_1 + 0x24) == 0) {
        iVar2 = sub_6d7d60((int)((char*)this - 0x20));
        if (iVar2 != 0) {
            iVar3 = *(int*)(iVar2 + 8);
            if (iVar3 != 0) {
                local_2c = *(int*)(iVar3 + 0x34);
            } else {
                local_2c = 0;
            }
            sub_685720(param_1, 0x7d8d34, (int)&local_2c, 0);

            iVar3 = *(int*)(iVar2 + 4);
            if (iVar3 != 0) {
                local_2c = *(int*)(iVar3 + 0x34);
            } else {
                local_2c = 0;
            }
            sub_685720(param_1, 0x7d8d24, (int)&local_2c, 0);

            iVar3 = *(int*)(iVar2 + 0xc);
            if (iVar3 != 0) {
                local_2c = *(int*)(iVar3 + 0x34);
            } else {
                local_2c = 0;
            }
            sub_685720(param_1, 0x7d8d18, (int)&local_2c, 0);
        }
    } else {
        local_28 = (int)((char*)this - 0x20);
        local_2c = 0;
        local_24 = 0;
        local_20 = 0;
        sub_685720(param_1, 0x7d8d34, (int)&local_2c, 0);

        iVar3 = local_20;
        if (iVar3 != 0) {
            iVar4 = sub_6353a0(iVar1, iVar3);
            local_1c = *(int*)iVar4;
        }
        sub_685720(param_1, 0x7d8d24, (int)&local_2c, 0);

        iVar3 = local_20;
        if (iVar3 != 0) {
            iVar4 = sub_6353a0(iVar1, iVar3);
            local_18 = *(int*)iVar4;
        }
        sub_685720(param_1, 0x7d8d18, (int)&local_2c, 0);

        iVar3 = local_20;
        if (iVar3 != 0) {
            iVar4 = sub_6353a0(iVar1, iVar3);
            local_14 = *(int*)iVar4;
        }
        sub_66fc80(this->field_0c + 0x28, (int)&local_18);
    }

    sub_685720(param_1, 0x7d8d0c, (int)&this->field_ac, 0);
    sub_685720(param_1, 0x7d8d00, (int)&this->field_b0, 0);
    sub_685720(param_1, 0x7d8cf4, (int)&this->field_b4, 0x7d00);
    sub_685720(param_1, 0x7d8ce8, (int)&this->field_b8, 0x7d00);

    if (*(int*)(param_1 + 0x28) > 9) {
        sub_685720(param_1, 0x7d8cdc, (int)&this->field_bc, -1);
        sub_685720(param_1, 0x7cad04, (int)&this->field_c0, 0);

        local_10 = this->field_a8;
        sub_685720(param_1, 0x7cafd4, (int)&local_10, 0);

        if (*(int*)(param_1 + 0x24) != 0) {
            this->field_a8 = local_10;
        }
    }

    iVar1 = local_14;
    return *(int*)iVar1 > 0;
}
