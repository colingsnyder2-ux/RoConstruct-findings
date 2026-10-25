// from server: 100% by tester
// roc 2011-06 0059e410  unit: RBX::VRunService::?$EventDesc  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059e410
//
// 0059e410  8a81c9000000         mov al, byte ptr [ecx + 0xc9]
// 0059e416  d0e8                 shr al, 1
// 0059e418  2401                 and al, 1
// 0059e41a  c3                   ret 

struct EnumDescriptor {
    unsigned char pad[0xc9];
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    bool get() const;
};

bool EnumDescriptor::get() const {
    return b1;
}