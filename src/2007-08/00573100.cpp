// from server: 77% by colin
// roc 2007-08 00573100  unit: RBX::VTexture::?$FactoryProduct  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573100
//
// 00573100  d9442404             fld dword ptr [esp + 4]
// 00573104  d89110010000         fcom dword ptr [ecx + 0x110]
// 0057310a  dfe0                 fnstsw ax
// 0057310c  f6c444               test ah, 0x44
// 0057310f  7b1e                 jnp 0x57312f
// 00573111  d9ee                 fldz 
// 00573113  d8d9                 fcomp st(1)
// 00573115  dfe0                 fnstsw ax
// 00573117  f6c405               test ah, 5
// 0057311a  7a13                 jp 0x57312f
// 0057311c  d99910010000         fstp dword ptr [ecx + 0x110]
// 00573122  c744240440278c00     mov dword ptr [esp + 4], 0x8c2740
// 0057312a  e9e115edff           jmp 0x444710
// 0057312f  ddd8                 fstp st(0)
// 00573131  c20400               ret 4

struct VTexture {
    char pad[0x110];
    float field_110;
    void setSomething(float);
};

void VTexture::setSomething(float value) {
    if (value == field_110) {
        return;
    }
    if (!(value > 0.0f)) {
        return;
    }
    field_110 = value;
    extern void someGlobalFunc();
    someGlobalFunc();
}
