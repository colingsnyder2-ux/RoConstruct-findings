// roc 2010-06 0066ce50  unit: RBX::RotatePJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066ce50
//
// 0066ce50  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 0066ce56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066ce50 {
    char pad0[420];
    int m_x;
    int f();
};
int S_func_0066ce50::f()
{
    return m_x;
}
