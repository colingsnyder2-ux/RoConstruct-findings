// from server: 100% by colin
// roc 2007-08 005878b0  unit: RBX::Reflection::EnumDescriptor  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005878b0
//
// 005878b0  8a811d010000         mov al, byte ptr [ecx + 0x11d]
// 005878b6  d0e8                 shr al, 1
// 005878b8  2401                 and al, 1
// 005878ba  c3                   ret 

struct EnumDescriptor {
    unsigned char pad[0x11d];
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    bool get() const;
};

bool EnumDescriptor::get() const {
    return b1;
}
