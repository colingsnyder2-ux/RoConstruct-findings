// from server: 100% by colin
// roc 2008-06 00598cc0  unit: RBX::PartInstance  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598cc0
//
// 00598cc0  8b81c8020000         mov eax, dword ptr [ecx + 0x2c8]
// 00598cc6  d9808c000000         fld dword ptr [eax + 0x8c]
// 00598ccc  c3                   ret 

struct PartInstance {
    char pad[0x2c8];
    void* primitive;
    float getMass() const;
};

float PartInstance::getMass() const {
    return *(float*)((char*)primitive + 0x8c);
}
