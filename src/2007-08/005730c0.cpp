// from server: 75% by colin
// roc 2007-08 005730c0  unit: RBX::VTexture::?$FactoryProduct  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005730c0
//
// 005730c0  d9442404             fld dword ptr [esp + 4]
// 005730c4  d8910c010000         fcom dword ptr [ecx + 0x10c]
// 005730ca  dfe0                 fnstsw ax
// 005730cc  f6c444               test ah, 0x44
// 005730cf  7b1e                 jnp 0x5730ef
// 005730d1  d9ee                 fldz 
// 005730d3  d8d9                 fcomp st(1)
// 005730d5  dfe0                 fnstsw ax
// 005730d7  f6c441               test ah, 0x41
// 005730da  7a13                 jp 0x5730ef
// 005730dc  d9990c010000         fstp dword ptr [ecx + 0x10c]
// 005730e2  c744240408278c00     mov dword ptr [esp + 4], 0x8c2708
// 005730ea  e92116edff           jmp 0x444710
// 005730ef  ddd8                 fstp st(0)
// 005730f1  c20400               ret 4

struct VTexture {
    char pad[0x10c];
    float field_10c;
    void setField(float);
};

void VTexture::setField(float value) {
    if (value == field_10c) {
        return;
    }
    if (value < 0.0f) {
        return;
    }
    field_10c = value;
    extern void someFunc();
    someFunc();
}
