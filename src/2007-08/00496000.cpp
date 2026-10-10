// from server: 27% by colin
struct FuncDesc {
    char pad0[0x28];
    void (__thiscall *func_28)(int);
    int field_2c;
    int field_30;
    void *field_34;
    void construct(int a, int b);
};

extern "C" void __stdcall sub_56F410();
extern "C" void __stdcall sub_630B9E(int, int);
extern "C" void *__cdecl sub_630D36(int, int, int, int, int);
extern "C" void __stdcall sub_77E710(int);
extern "C" void __stdcall sub_77E69C();

void FuncDesc::construct(int a, int b) {
    int local_c;
    int local_10;
    int local_14;
    int local_18;

    local_c = this->field_30;
    if (this->field_34) {
        local_10 = ((int (__thiscall *)(void *))(*((void ***)this->field_34))[2])(this->field_34);
    } else {
        local_10 = 0;
    }

    local_14 = 0;

    ((void (__thiscall *)(void *, int *, int))(*((void ***)a))[1])((void *)a, &local_c, 1);

    void *result = sub_630D36(local_14, 0, 0x88209C, 0x88E9FC, 0);
    if (result == 0) {
        sub_77E710(0x786E04);
        sub_630B9E(0x841E0C, (int)&local_18);
    }

    sub_56F410();
    sub_77E69C();

    this->func_28(this->field_2c + (int)result);

    if (local_10) {
        ((void (__thiscall *)(void *, int))(*((void ***)local_10))[0])((void *)local_10, 1);
    }
}
