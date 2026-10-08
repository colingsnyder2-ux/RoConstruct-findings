// from server: 100% by colin
// roc 2007-08 005afe00  unit: RBX::RotatePJoint  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005afe00
//
// 005afe00  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 005afe06  d9808c000000         fld dword ptr [eax + 0x8c]
// 005afe0c  c3                   ret 

struct RotatePJoint {
    char pad[0xf8];
    void* field_f8;
    float getBaseAngle() const;
};

float RotatePJoint::getBaseAngle() const {
    return *(float*)((char*)field_f8 + 0x8c);
}
