// from server: 63% by colin
// roc 2007-08 005bc4d0  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bc4d0
//
// 005bc4d0  d9410c               fld dword ptr [ecx + 0xc]
// 005bc4d3  d821                 fsub dword ptr [ecx]
// 005bc4d5  d94114               fld dword ptr [ecx + 0x14]
// 005bc4d8  d86108               fsub dword ptr [ecx + 8]
// 005bc4db  dec9                 fmulp st(1)
// 005bc4dd  c3                   ret 

struct EnumPropDescriptor {
    char pad0[0xc];
    float f0;
    char pad1[4];
    float f1;
    float getValue() const;
};

float EnumPropDescriptor::getValue() const {
    return (f0 - *(float*)((char*)this + 0xc)) * (f1 - *(float*)((char*)this + 8));
}
