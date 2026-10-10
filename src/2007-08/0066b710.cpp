// from server: 37% by colin
extern "C" {
    void __stdcall func_00685720(int, const char*, void*, int);
    void __stdcall func_00685780(int, const char*, void*, int);
    void __stdcall func_006857c0(int, const char*, void*, int);
    void __stdcall func_00685820(int, const char*, void*, int, int);
    void __stdcall func_006301e4(void*);
}

struct CXTPCommandBar {
    char pad[0xc4];
    int field_c4;
    char pad2[0x10];
    int field_d4;
    char pad3[0x10];
    int field_e8;
    int field_ec;
    int field_f0;
    int field_f4;
    int field_f8;
    int field_fc;
    int field_100;
    int field_104;
    int field_108;
    int field_10c;
    int field_110;
    int field_114;
    int field_118;
    char pad4[0x18];
    int field_134;
    char pad5[0x38];
    int field_170;

    void func_0066b710(int);
    int func_00643810();
    void func_006437f0(int);
};

void CXTPCommandBar::func_0066b710(int param)
{
    func_00685720(param, (const char*)0x787edc, &field_f4, 1);
    func_00685720(param, (const char*)0x7aaff8, &field_fc, 0);
    func_00685720(param, (const char*)0x7cae28, &field_d4, 0);
    func_00685720(param, (const char*)0x7cae20, &field_e8, 0);
    func_00685720(param, (const char*)0x7cae18, &field_ec, 0);
    func_006857c0(param, (const char*)0x7cae10, &field_f0, (int)0x785954);
    func_00685780(param, (const char*)0x7cae00, &field_134, 1);
    func_00685720(param, (const char*)0x7cad8c, &field_c4, 0);

    if (*(int*)(param + 0x28) > 2) {
        func_00685820(param, (const char*)0x7cadf4, &field_108, 0, 0);
    }

    if (*(int*)(param + 0x24) != 0) {
        int* p = *(int**)(param + 0x20);
        field_100 = *(int*)((char*)p + 0x24);
    }

    if (*(int*)(param + 0x28) > 0x11) {
        func_00685820(param, (const char*)0x7cade8, &field_110, 0, 0);
        func_00685780(param, (const char*)0x7c5324, &field_118, 2);

        int v = func_00643810();
        func_00685780(param, (const char*)0x7cadd8, &v, 0);

        if (*(int*)(param + 0x24) != 0) {
            func_006437f0(v);
        }
    }

    if (*(int*)(param + 0x28) > 0x12) {
        func_00685720(param, (const char*)0x7cadc4, &field_170, 0);
    }

    int* vtbl = *(int**)param;
    void* result = ((void* (__stdcall*)(int, const char*))vtbl[0x70/4])(param, (const char*)0x7cadb8);

    int* p2 = *(int**)((char*)this + 0xf8);
    int* vtbl2 = *(int**)p2;
    ((void (__stdcall*)(int*, void*))vtbl2[0x5c/4])(p2, result);

    if (result != 0) {
        func_006301e4(result);
    }
}
