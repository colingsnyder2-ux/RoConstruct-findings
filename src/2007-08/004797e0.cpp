// from server: 69% by colin
struct S {
    void* vtable0;
    char pad[0x14];
    int field_18;
    char pad2[0x04];
    char field_1d;
    char pad3[0x1e];
    int field_3c;
    char pad4[0x2c];
    int field_6c;
    int field_70;
    int field_74;
    int field_78;
    int field_7c;
    void func_479690();
    void func_4797e0();
};

void S::func_4797e0()
{
    if (field_1d != 0) {
        void** vt = *(void***)vtable0;
        void (*fn)(void*) = (void (*)(void*))vt[0x10];
        fn(vtable0);
        field_1d = 0;
    }
    field_18++;
    field_6c = 0;
    field_70 = 0;
    field_74 = 0;
    field_78 = 0;
    field_7c = 0;
    field_3c = 0;
    func_479690();
}
