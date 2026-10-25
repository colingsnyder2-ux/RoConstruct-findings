// from server: 100% by tester
// roc 2008-06 005b69d0  unit: RBX::DropperTool  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b69d0
//
// 005b69d0  8a8165010000         mov al, byte ptr [ecx + 0x165]
// 005b69d6  d0e8                 shr al, 1
// 005b69d8  2401                 and al, 1
// 005b69da  c3                   ret 

struct EnumDescriptor {
    unsigned char pad[0x165];
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    bool get() const;
};

bool EnumDescriptor::get() const {
    return b1;
}