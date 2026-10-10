// from server: 37% by colin
struct CPatchedControlComboBox {
    int sub_63B530(int, int, int, int);
};

extern "C" void __cdecl sub_62FF3E(void*, int);
extern "C" void __cdecl sub_62FF38(void*, int);
extern "C" int __cdecl sub_6713D0(void*, void*);

int CPatchedControlComboBox::sub_63B530(int a1, int a2, int a3, int a4) {
    int local0 = 0;
    int local4 = 0;
    int local8 = 0;
    int localC = 0;
    int local10 = 0;
    int local14 = 0;
    int local18 = 0;
    int local1C = 0;

    sub_62FF3E(&local0, *(int*)((char*)this - 4));

    local18 = 0;
    if (sub_6713D0(this, &local1C)) {
        if (local0) {
            *(int*)(local0 + 4) = local4;
        }
        local18 = -1;
        if (local14) {
            sub_62FF38((void*)local10, 0);
        }
        return 0x80070057;
    }

    {
        int* p = (int*)((char*)this - 0x20);
        int v = *p;
        int (*fn)(int, int, int) = *(int(**)(int,int,int))(v + 0xe8);
        fn(v, 1, 0);
    }

    if (local0) {
        *(int*)(local0 + 4) = local4;
    }
    local18 = -1;
    if (local14) {
        sub_62FF38((void*)local10, 0);
    }
    return 0;
}
