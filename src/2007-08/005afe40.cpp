// from server: 100% by colin
// roc 2007-08 005afe40  unit: RBX::RotatePJoint  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005afe40
//
// 005afe40  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 005afe46  d9442404             fld dword ptr [esp + 4]
// 005afe4a  d99890000000         fstp dword ptr [eax + 0x90]
// 005afe50  c20400               ret 4

struct RotatePJoint {
    char pad[0xf8];
    void* field_f8;
    void setBaseAngle(float value);
};

void RotatePJoint::setBaseAngle(float value) {
    *(float*)((char*)field_f8 + 0x90) = value;
}
