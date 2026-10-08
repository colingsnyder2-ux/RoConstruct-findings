// roc 2009-06 00560f20  unit: RBX::Mesh::Level  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00560f20
//
// 00560f20  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00560f23  83c068               add eax, 0x68
// 00560f26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00560f20 {
    char pad0[20];
    int m_x;
    int f();
};
int S_func_00560f20::f()
{
    return m_x + 0x68;
}
