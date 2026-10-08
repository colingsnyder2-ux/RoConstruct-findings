// from server: 80% by colin
// roc 2007-08 00578450  unit: RBX::VPartInstance::?$FactoryProduct  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578450
//
// 00578450  d981e0010000         fld dword ptr [ecx + 0x1e0]
// 00578456  d9442404             fld dword ptr [esp + 4]
// 0057845a  dde1                 fucom st(1)
// 0057845c  dfe0                 fnstsw ax
// 0057845e  ddd9                 fstp st(1)
// 00578460  f6c444               test ah, 0x44
// 00578463  7b13                 jnp 0x578478
// 00578465  d999e0010000         fstp dword ptr [ecx + 0x1e0]
// 0057846b  c744240438298c00     mov dword ptr [esp + 4], 0x8c2938
// 00578473  e998c2ecff           jmp 0x444710
// 00578478  ddd8                 fstp st(0)
// 0057847a  c20400               ret 4

struct VPartInstance {
    char pad[0x1e0];
    float value;
    void setValue(float);
};

void VPartInstance::setValue(float v) {
    if (value != v) {
        value = v;
        extern void notifyChange();
        notifyChange();
    }
}
