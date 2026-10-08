// from server: 71% by colin
// roc 2007-08 0060c540  unit: RBX::Block  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060c540
//
// 0060c540  d9410c               fld dword ptr [ecx + 0xc]
// 0060c543  d84908               fmul dword ptr [ecx + 8]
// 0060c546  d84904               fmul dword ptr [ecx + 4]
// 0060c549  c3                   ret 

struct Block {
    int   vtable;   // offset 0x0
    float x;        // offset 0x4
    float y;        // offset 0x8
    float z;        // offset 0xc

    float product() const;
};

float Block::product() const {
    return z * y * x;
}
