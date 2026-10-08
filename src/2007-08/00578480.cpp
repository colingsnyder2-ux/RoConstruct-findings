// from server: 80% by colin
// roc 2007-08 00578480  unit: RBX::VPartInstance::?$FactoryProduct  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578480
//
// 00578480  d9819c010000         fld dword ptr [ecx + 0x19c]
// 00578486  d9442404             fld dword ptr [esp + 4]
// 0057848a  dde1                 fucom st(1)
// 0057848c  dfe0                 fnstsw ax
// 0057848e  ddd9                 fstp st(1)
// 00578490  f6c444               test ah, 0x44
// 00578493  7b13                 jnp 0x5784a8
// 00578495  d9999c010000         fstp dword ptr [ecx + 0x19c]
// 0057849b  c744240448288c00     mov dword ptr [esp + 4], 0x8c2848
// 005784a3  e968c2ecff           jmp 0x444710
// 005784a8  ddd8                 fstp st(0)
// 005784aa  c20400               ret 4

struct VPartInstance {
    char pad[0x19c];
    float field_19c;
    void setField(float);
};

extern "C" void __stdcall sub_444710();

void VPartInstance::setField(float value) {
    if (field_19c != value) {
        field_19c = value;
        sub_444710();
    }
}
