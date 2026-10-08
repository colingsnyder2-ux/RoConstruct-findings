// from server: 45% by colin
// roc 2008-06 005e2900  unit: RBX::RotatePJoint  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2900
//
// 005e2900  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 005e2906  d9808c000000         fld dword ptr [eax + 0x8c]
// 005e290c  c3                   ret 

struct RotatePJoint {
    float currentAngle;
    void* alignmentConstraint;

    float getBaseAngle() const {
        return currentAngle;
    }

    void setBaseAngle(float value) {
        currentAngle = value;
    }
};

extern "C" __declspec(dllimport) void __stdcall G1_func_00465df0();

void __stdcall func_005e2900(RotatePJoint* this_) {
    float angle = this_->currentAngle;
    G1_func_00465df0();
}
