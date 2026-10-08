// from server: 100% by colin
// roc 2007-08 005afe60  unit: RBX::RotatePJoint  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005afe60
//
// 005afe60  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 005afe66  d98088000000         fld dword ptr [eax + 0x88]
// 005afe6c  c3                   ret 

struct RotatePJoint {
    char pad[0xf8];
    void* ptr;
    float getBaseAngle() const;
};

float RotatePJoint::getBaseAngle() const {
    return *(float*)((char*)ptr + 0x88);
}
