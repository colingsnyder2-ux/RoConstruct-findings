// from server: 77% by colin
// roc 2007-08 00573180  unit: RBX::VTexture::?$FactoryProduct  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573180
//
// 00573180  d9442404             fld dword ptr [esp + 4]
// 00573184  d89118010000         fcom dword ptr [ecx + 0x118]
// 0057318a  dfe0                 fnstsw ax
// 0057318c  f6c444               test ah, 0x44
// 0057318f  7b1e                 jnp 0x5731af
// 00573191  d9ee                 fldz 
// 00573193  d8d9                 fcomp st(1)
// 00573195  dfe0                 fnstsw ax
// 00573197  f6c405               test ah, 5
// 0057319a  7a13                 jp 0x5731af
// 0057319c  d99918010000         fstp dword ptr [ecx + 0x118]
// 005731a2  c74424045c278c00     mov dword ptr [esp + 4], 0x8c275c
// 005731aa  e96115edff           jmp 0x444710
// 005731af  ddd8                 fstp st(0)
// 005731b1  c20400               ret 4

struct RBX_VTexture_FactoryProduct {
    char pad[0x118];
    float field_0x118;
    void setValue(float value);
};

void RBX_VTexture_FactoryProduct::setValue(float value) {
    if (value == field_0x118) {
        return;
    }
    if (!(value > 0.0f)) {
        return;
    }
    field_0x118 = value;
    extern void someFunction();
    someFunction();
}
