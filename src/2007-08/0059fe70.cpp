// from server: 95% by colin
extern "C" void __cdecl free(void*);

struct RBX_VSpawnLocation_FactoryProduct {
    char pad[0x294];
    int field_294;
    int field_298;
    void sub_0059fcf0();
    void* destroy(char flag);
};

void* RBX_VSpawnLocation_FactoryProduct::destroy(char flag) {
    sub_0059fcf0();
    int* p = *(int**)((char*)this + 0x298);
    *(int*)((char*)this + 0x294) = 0x7a4cac;
    int* q = *(int**)((char*)p + 4);
    *(int*)((char*)q + (int)this + 0x298) = 0x7a4ca4;
    if (flag & 1) {
        free(this);
    }
    return this;
}
