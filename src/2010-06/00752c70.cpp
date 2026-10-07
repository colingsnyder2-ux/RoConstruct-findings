// roc 2010-06 00752c70  unit: RBX::MotorJoint  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00752c70
//
// 00752c70  8d411c               lea eax, [ecx + 0x1c]
// 00752c73  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00752c70 {
    char pad0[28];
    int m_x;
    int* f();
};
int* S_func_00752c70::f()
{
    return &m_x;
}
