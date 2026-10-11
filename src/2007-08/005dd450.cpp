// from server: 77% by colin
// roc 2007-08 005dd450  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dd450
//
// 005dd450  8b91f8000000         mov edx, dword ptr [ecx + 0xf8]
// 005dd456  d9828c000000         fld dword ptr [edx + 0x8c]
// 005dd45c  d9442404             fld dword ptr [esp + 4]
// 005dd460  dde1                 fucom st(1)
// 005dd462  dfe0                 fnstsw ax
// 005dd464  ddd9                 fstp st(1)
// 005dd466  f6c444               test ah, 0x44
// 005dd469  7b13                 jnp 0x5dd47e
// 005dd46b  d99a8c000000         fstp dword ptr [edx + 0x8c]
// 005dd471  c7442404686d8c00     mov dword ptr [esp + 4], 0x8c6d68
// 005dd479  e99272e6ff           jmp 0x444710
// 005dd47e  ddd8                 fstp st(0)
// 005dd480  c20400               ret 4

struct MotorJoint {
    char pad[0x8c];
    float desiredAngle;
};

struct VVelocityMotor {
    char pad[0xf8];
    MotorJoint* motorJoint;
    void setDesiredAngle(float angle);
};

extern "C" void __stdcall sub_444710(float angle);

void VVelocityMotor::setDesiredAngle(float angle) {
    MotorJoint* mj = motorJoint;
    if (mj->desiredAngle != angle) {
        mj->desiredAngle = angle;
        sub_444710(angle);
    }
}
