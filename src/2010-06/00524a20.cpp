// roc 2010-06 00524a20  unit: RBX::Mesh::Level  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00524a20
//
// 00524a20  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00524a23  83c068               add eax, 0x68
// 00524a26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00524a20 {
    char pad0[20];
    int m_x;
    int f();
};
int S_func_00524a20::f()
{
    return m_x + 0x68;
}
