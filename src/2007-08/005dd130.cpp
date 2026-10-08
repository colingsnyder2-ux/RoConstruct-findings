// from server: 100% by colin
// roc 2007-08 005dd130  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dd130
//
// 005dd130  8b442404             mov eax, dword ptr [esp + 4]
// 005dd134  3981fc000000         cmp dword ptr [ecx + 0xfc], eax
// 005dd13a  7413                 je 0x5dd14f
// 005dd13c  8981fc000000         mov dword ptr [ecx + 0xfc], eax
// 005dd142  c7442404286d8c00     mov dword ptr [esp + 4], 0x8c6d28
// 005dd14a  e9c175e6ff           jmp 0x444710
// 005dd14f  c20400               ret 4

struct FactoryProduct {
    char pad[0xfc];
    int field_fc;
    void setValue(int value);
};

void FactoryProduct::setValue(int value) {
    if (field_fc != value) {
        field_fc = value;
        extern void __stdcall sub_444710(int);
        sub_444710(0x8c6d28);
    }
}
