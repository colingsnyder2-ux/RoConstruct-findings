// from server: 95% by colin
struct RBX_VFlagStand_FactoryProduct {
    char pad[0x294];
    int field_294;
    int field_298;
    void* destroy(char);
};

extern "C" void __cdecl free(void*);

void sub_005e9830();

void* RBX_VFlagStand_FactoryProduct::destroy(char flag)
{
    sub_005e9830();
    int* p = (int*)field_298;
    field_294 = 0x7a4cac;
    int* q = (int*)p[1];
    *(int*)((char*)q + (int)this + 0x298) = 0x7a4ca4;
    if (flag & 1) {
        free(this);
    }
    return this;
}
