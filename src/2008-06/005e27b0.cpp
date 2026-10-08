// roc 2008-06 005e27b0  unit: RBX::JointInstance  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e27b0
//
// 005e27b0  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 005e27b6  83c028               add eax, 0x28
// 005e27b9  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e27b0 {
    char pad0[336];
    int m_x;
    int f();
};
int S_func_005e27b0::f()
{
    return m_x + 0x28;
}
