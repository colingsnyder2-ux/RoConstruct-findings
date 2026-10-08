// from server: 100% by colin
// roc 2007-08 005a47d0  unit: RBX::IControllable  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a47d0
//
// 005a47d0  8a8164010000         mov al, byte ptr [ecx + 0x164]
// 005a47d6  c0e803               shr al, 3
// 005a47d9  2401                 and al, 1
// 005a47db  c3                   ret 

struct IControllable {
    char pad[0x164];
    unsigned char lo : 3;
    unsigned char flag : 1;
    unsigned char hi : 4;
    bool getFlag() const;
};

bool IControllable::getFlag() const {
    return flag;
}
