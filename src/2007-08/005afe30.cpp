// from server: 100% by colin
// roc 2007-08 005afe30  unit: RBX::RotatePJoint  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005afe30
//
// 005afe30  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 005afe36  d98090000000         fld dword ptr [eax + 0x90]
// 005afe3c  c3                   ret 

struct ConstraintAlign2Axes {
    char pad_0[0x90];
    float baseAngle;
};

struct Joint {
    char pad_0[0xf8];
    ConstraintAlign2Axes* alignmentConstraint;

    float getBaseAngle();
};

float Joint::getBaseAngle() {
    return alignmentConstraint->baseAngle;
}
