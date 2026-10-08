// roc 2009-06 0067b140  unit: RBX::JointInstance  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067b140
//
// 0067b140  8b81ac000000         mov eax, dword ptr [ecx + 0xac]
// 0067b146  83c068               add eax, 0x68
// 0067b149  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0067b140 {
    char pad0[172];
    int m_x;
    int f();
};
int S_func_0067b140::f()
{
    return m_x + 0x68;
}
