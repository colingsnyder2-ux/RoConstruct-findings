// from server: 100% by tester
// roc 2008-06 005e2900  unit: RBX::RotatePJoint  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2900
//
// 005e2900  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 005e2906  d9808c000000         fld dword ptr [eax + 0x8c]
// 005e290c  c3                   ret 

struct ConstraintAlign2Axes {
    char pad_0[0x8c];
    float baseAngle;
};

struct Joint {
    char pad_0[0x150];
    ConstraintAlign2Axes* alignmentConstraint;

    float getBaseAngle();
};

float Joint::getBaseAngle() {
    return alignmentConstraint->baseAngle;
}