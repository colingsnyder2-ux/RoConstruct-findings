// from server: 100% by colin
// roc 2007-08 005afe10  unit: RBX::RotatePJoint  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005afe10
//
// 005afe10  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 005afe16  d9442404             fld dword ptr [esp + 4]
// 005afe1a  d9988c000000         fstp dword ptr [eax + 0x8c]
// 005afe20  c20400               ret 4

struct RotatePJoint {
    char pad[0xf8];
    void* ptr;
    void setBaseAngle(float value);
};

void RotatePJoint::setBaseAngle(float value) {
    *(float*)((char*)ptr + 0x8c) = value;
}
