// roc 2009-12 006b3a00  unit: RBX::DropperTool  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b3a00
//
// 006b3a00  8a81cd000000         mov al, byte ptr [ecx + 0xcd]
// 006b3a06  d0e8                 shr al, 1
// 006b3a08  2401                 and al, 1
// 006b3a0a  c3                   ret 
// copied from an identical function in another client (function ?get@EnumDescriptor@ns_ROCX000008@@QBE_NXZ)

namespace ns_ROCX000008 {
// from server: 100% by tester
struct EnumDescriptor {
    unsigned char pad[0xcd];
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    bool get() const;
};

bool EnumDescriptor::get() const {
    return b1;
}
}
