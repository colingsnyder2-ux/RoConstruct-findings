// roc 2010-06 00695520  unit: RBX::JointInstance  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00695520
//
// 00695520  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 00695526  83c068               add eax, 0x68
// 00695529  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00695520 {
    char pad0[180];
    int m_x;
    int f();
};
int S_func_00695520::f()
{
    return m_x + 0x68;
}
