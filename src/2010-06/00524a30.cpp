// roc 2010-06 00524a30  unit: RBX::Mesh::Level  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00524a30
//
// 00524a30  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00524a33  83c050               add eax, 0x50
// 00524a36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00524a30 {
    char pad0[20];
    int m_x;
    int f();
};
int S_func_00524a30::f()
{
    return m_x + 0x50;
}
