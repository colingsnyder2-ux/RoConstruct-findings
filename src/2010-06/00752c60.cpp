// roc 2010-06 00752c60  unit: RBX::MotorJoint  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00752c60
//
// 00752c60  8d4104               lea eax, [ecx + 4]
// 00752c63  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00752c60 {
    char pad0[4];
    int m_x;
    int* f();
};
int* S_func_00752c60::f()
{
    return &m_x;
}
