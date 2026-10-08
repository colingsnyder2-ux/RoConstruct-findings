// from server: 84% by colin
// roc 2007-08 005afe70  unit: RBX::RotatePJoint  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005afe70
//
// 005afe70  d9442404             fld dword ptr [esp + 4]
// 005afe74  51                   push ecx
// 005afe75  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 005afe7b  d91c24               fstp dword ptr [esp]
// 005afe7e  e81d440000           call 0x5b42a0
// 005afe83  c20400               ret 4

struct ConstraintAlign2Axes;

struct RotatePJoint {
    char pad[0xf8];
    ConstraintAlign2Axes* alignmentConstraint;
    void setBaseAngle(float value);
};

extern "C" void __stdcall ConstraintAlign2Axes_setBaseAngle(ConstraintAlign2Axes* self, float value);

void RotatePJoint::setBaseAngle(float value) {
    ConstraintAlign2Axes_setBaseAngle(alignmentConstraint, value);
}
