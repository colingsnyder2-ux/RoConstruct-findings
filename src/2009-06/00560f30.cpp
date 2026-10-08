// roc 2009-06 00560f30  unit: RBX::Mesh::Level  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00560f30
//
// 00560f30  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00560f33  83c050               add eax, 0x50
// 00560f36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00560f30 {
    char pad0[20];
    int m_x;
    int f();
};
int S_func_00560f30::f()
{
    return m_x + 0x50;
}
