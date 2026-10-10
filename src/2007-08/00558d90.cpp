// from server: 64% by colin
struct RBX_DataModel {
    void* field_0x0;
    void* field_0x4;
    void* field_0x8;
    int field_0xc;
    char field_0x10;
    void method(void* a1, void* a2, int a3, char a4, int a5);
};

void RBX_DataModel::method(void* a1, void* a2, int a3, char a4, int a5) {
    field_0x0 = 0;
    field_0x4 = 0;
    field_0x8 = 0;
    if (a1) {
        field_0x8 = (void*)a5;
        field_0x0 = a1;
        field_0x4 = ((void* (*)(void*, void*))a1)(a2, 0);
    }
    field_0xc = a3;
    field_0x10 = a4;
    if (a1) {
        ((void (*)(void*, void*))a1)(a2, (void*)1);
    }
}
