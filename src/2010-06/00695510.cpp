// roc 2010-06 00695510  unit: RBX::JointInstance  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00695510
//
// 00695510  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 00695516  83c038               add eax, 0x38
// 00695519  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00695510 {
    char pad0[180];
    int m_x;
    int f();
};
int S_func_00695510::f()
{
    return m_x + 0x38;
}
