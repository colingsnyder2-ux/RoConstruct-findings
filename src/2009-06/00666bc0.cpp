// roc 2009-06 00666bc0  unit: RBX::RotatePJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00666bc0
//
// 00666bc0  8b81a8010000         mov eax, dword ptr [ecx + 0x1a8]
// 00666bc6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00666bc0 {
    char pad0[424];
    int m_x;
    int f();
};
int S_func_00666bc0::f()
{
    return m_x;
}
