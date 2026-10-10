// from server: 80% by colin
struct G3D_Texture {
    void sub_472A60();
    void method_472AB0();
    char pad0[0x10];
    unsigned int field_10;
    char pad1[0x4];
    unsigned int field_18;
    unsigned int field_1C;
};

void G3D_Texture::method_472AB0()
{
    sub_472A60();
    unsigned int zero = 0;
    field_18 += 1;
    field_10 = zero;
    field_1C += zero + (field_18 == 0 ? 1 : 0);
}
