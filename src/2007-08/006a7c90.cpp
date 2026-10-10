// from server: 61% by colin
struct CXTPRibbonBar {
    void sub_6a7c90(int, int);
};

void CXTPRibbonBar::sub_6a7c90(int arg1, int arg2)
{
    int local[4];
    void** vtbl = *(void***)this;
    void (__thiscall *fn)(void*, int*) = (void (__thiscall *)(void*, int*))vtbl[1];
    fn(this, local);

    int* ctrl1 = *(int**)((char*)this + 0xc);
    void** vtbl1 = *(void***)ctrl1;
    int state1 = *(int*)((char*)ctrl1 + 0xd0);
    void (__thiscall *fn1)(void*, int) = (void (__thiscall *)(void*, int))vtbl1[0x94 / 4];

    if (arg1 != 0) {
        state1 &= ~8;
        fn1(ctrl1, state1);

        int a = local[0];
        int b = local[1];
        int* ctrl2 = *(int**)((char*)this + 0xc);
        void** vtbl2 = *(void***)ctrl2;
        int v1 = a - 1;
        int v2 = a + 0xc;
        void (__thiscall *fn2)(void*, int, int, int, int) = (void (__thiscall *)(void*, int, int, int, int))vtbl2[0x7c / 4];
        fn2(ctrl2, v1, b, v2, arg2);
    } else {
        state1 |= 8;
        fn1(ctrl1, state1);
    }

    if (arg2 != 0) {
        int* ctrl3 = *(int**)((char*)this + 0x10);
        int state3 = *(int*)((char*)ctrl3 + 0xd0);
        void** vtbl3 = *(void***)ctrl3;
        void (__thiscall *fn3)(void*, int) = (void (__thiscall *)(void*, int))vtbl3[0x94 / 4];
        state3 &= ~8;
        fn3(ctrl3, state3);

        int a = local[2];
        int b = local[1];
        int c = local[3];
        int* ctrl4 = *(int**)((char*)this + 0x10);
        void** vtbl4 = *(void***)ctrl4;
        int v1 = a - 0xc;
        int v2 = a + 1;
        void (__thiscall *fn4)(void*, int, int, int, int) = (void (__thiscall *)(void*, int, int, int, int))vtbl4[0x7c / 4];
        fn4(ctrl4, v1, b, v2, c);
    } else {
        int* ctrl5 = *(int**)((char*)this + 0x10);
        int state5 = *(int*)((char*)ctrl5 + 0xd0);
        void** vtbl5 = *(void***)ctrl5;
        void (__thiscall *fn5)(void*, int) = (void (__thiscall *)(void*, int))vtbl5[0x94 / 4];
        state5 |= 8;
        fn5(ctrl5, state5);
    }
}
