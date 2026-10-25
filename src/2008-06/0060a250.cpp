// from server: 100% by tester
// roc 2008-06 0060a250  unit: RBX::VelocityMotor  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060a250
//
// 0060a250  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 0060a256  d98094000000         fld dword ptr [eax + 0x94]
// 0060a25c  c3                   ret 

struct PartInstance {
    char pad[0x150];
    void* primitive;
    float getMass() const;
};

float PartInstance::getMass() const {
    return *(float*)((char*)primitive + 0x94);
}