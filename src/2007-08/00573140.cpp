// from server: 75% by colin
// roc 2007-08 00573140  unit: RBX::VTexture::?$FactoryProduct  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573140
//
// 00573140  d9442404             fld dword ptr [esp + 4]
// 00573144  d89114010000         fcom dword ptr [ecx + 0x114]
// 0057314a  dfe0                 fnstsw ax
// 0057314c  f6c444               test ah, 0x44
// 0057314f  7b1e                 jnp 0x57316f
// 00573151  d9ee                 fldz 
// 00573153  d8d9                 fcomp st(1)
// 00573155  dfe0                 fnstsw ax
// 00573157  f6c405               test ah, 5
// 0057315a  7a13                 jp 0x57316f
// 0057315c  d99914010000         fstp dword ptr [ecx + 0x114]
// 00573162  c744240478278c00     mov dword ptr [esp + 4], 0x8c2778
// 0057316a  e9a115edff           jmp 0x444710
// 0057316f  ddd8                 fstp st(0)
// 00573171  c20400               ret 4

struct VTexture {
    char pad[0x114];
    float field_0x114;
    void setSize(float size);
};

void VTexture::setSize(float size) {
    if (size == field_0x114) {
        return;
    }
    if (size >= 0.0f) {
        field_0x114 = size;
        extern void updateTexture();
        updateTexture();
    }
}
