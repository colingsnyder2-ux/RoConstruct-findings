// from server: 70% by colin
// roc 2007-08 005a47c0  unit: RBX::IControllable  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a47c0
//
// 005a47c0  8a8164010000         mov al, byte ptr [ecx + 0x164]
// 005a47c6  2401                 and al, 1
// 005a47c8  c3                   ret 

struct IControllable
{
    char pad[0x164];
    unsigned char field;
    bool isControllable() const;
};

bool IControllable::isControllable() const
{
    return (field & 1) != 0;
}
