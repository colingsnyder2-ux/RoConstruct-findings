// roc 2009-06 0067b130  unit: RBX::JointInstance  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067b130
//
// 0067b130  8b81ac000000         mov eax, dword ptr [ecx + 0xac]
// 0067b136  83c038               add eax, 0x38
// 0067b139  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0067b130 {
    char pad0[172];
    int m_x;
    int f();
};
int S_func_0067b130::f()
{
    return m_x + 0x38;
}
