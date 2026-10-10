// from server: 47% by colin
struct CPatchedControlComboBox {
    char pad[0x60];
    int field_60;
    char pad2[0xdc - 0x64];
    int field_dc;
    int sub_63b420(int, int, int, int, int);
};

extern "C" int __stdcall sub_62ff38(int, int);
extern "C" int __stdcall sub_62ff3e(int);
extern "C" int __stdcall sub_6713d0(int, int);

int CPatchedControlComboBox::sub_63b420(int a1, int a2, int a3, int a4, int a5)
{
    int local1 = 0;
    int local2 = 0;
    int local3 = 0;
    int local4 = 0;
    int local5 = 0;

    sub_62ff3e(*(int*)((char*)this - 4));

    int result = sub_6713d0((int)this, (int)&local5);
    if (result != 0) {
        if (local1 != 0) {
            *(int*)(local1 + 4) = local2;
        }
        if (local4 != 0) {
            sub_62ff38(local3, 0);
        }
        return 0x80070057;
    }

    int obj = this->field_dc;
    if (obj != 0) {
        if (*(int*)(obj + 0x20) != 0) {
            int* vtbl = *(int**)obj;
            int (__thiscall *fn1)(void*, int, int, int) = (int (__thiscall *)(void*, int, int, int))vtbl[0x140 / 4];
            fn1((void*)obj, 1, 0, 0);

            obj = this->field_dc;
            vtbl = *(int**)obj;
            int (__thiscall *fn2)(void*, int, int) = (int (__thiscall *)(void*, int, int))vtbl[0x148 / 4];
            fn2((void*)obj, this->field_60, 1);
        }
    }

    if (local1 != 0) {
        *(int*)(local1 + 4) = local2;
    }
    if (local4 != 0) {
        sub_62ff38(local3, 0);
    }
    return 0;
}
