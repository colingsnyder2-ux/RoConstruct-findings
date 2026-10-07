// roc 2010-06 0089f460  unit: RBX::Mesh::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089f460
//
// 0089f460  8b4108               mov eax, dword ptr [ecx + 8]
// 0089f463  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0089f460 {
    char pad0[8];
    int m_x;
    int f();
};
int S_func_0089f460::f()
{
    return m_x;
}
