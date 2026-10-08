// from server: 78% by colin
// roc 2007-08 00472ab0  unit: G3D::Texture  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00472ab0
//
// 00472ab0  56                   push esi
// 00472ab1  8bf1                 mov esi, ecx
// 00472ab3  e8a8ffffff           call 0x472a60
// 00472ab8  83461801             add dword ptr [esi + 0x18], 1
// 00472abc  b800000000           mov eax, 0
// 00472ac1  894610               mov dword ptr [esi + 0x10], eax
// 00472ac4  11461c               adc dword ptr [esi + 0x1c], eax
// 00472ac7  5e                   pop esi
// 00472ac8  c3                   ret 

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
    field_18 += 1;
    field_10 = 0;
    field_1C += 0;
}
