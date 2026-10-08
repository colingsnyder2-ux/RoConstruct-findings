// from server: 80% by colin
// roc 2007-08 00578420  unit: RBX::VPartInstance::?$FactoryProduct  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578420
//
// 00578420  d98198010000         fld dword ptr [ecx + 0x198]
// 00578426  d9442404             fld dword ptr [esp + 4]
// 0057842a  dde1                 fucom st(1)
// 0057842c  dfe0                 fnstsw ax
// 0057842e  ddd9                 fstp st(1)
// 00578430  f6c444               test ah, 0x44
// 00578433  7b13                 jnp 0x578448
// 00578435  d99998010000         fstp dword ptr [ecx + 0x198]
// 0057843b  c744240438298c00     mov dword ptr [esp + 4], 0x8c2938
// 00578443  e9c8c2ecff           jmp 0x444710
// 00578448  ddd8                 fstp st(0)
// 0057844a  c20400               ret 4

struct S {
    char pad[0x198];
    float field_198;
    void setValue(float value);
};

extern void func_00444710();

void S::setValue(float value)
{
    if (field_198 != value) {
        field_198 = value;
        func_00444710();
    }
}
