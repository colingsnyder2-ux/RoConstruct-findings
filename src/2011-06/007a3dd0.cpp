// roc 2011-06 007a3dd0  unit: RBX::MotorJoint  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a3dd0
//
// 007a3dd0  8d4114               lea eax, [ecx + 0x14]
// 007a3dd3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007a3dd0 {
    char pad0[20];
    int m_x;
    int* f();
};
int* S_func_007a3dd0::f()
{
    return &m_x;
}
