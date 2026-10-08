// roc 2007-08 005b4d40  unit: RBX::Geometry  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4d40
//
// 005b4d40  8b4108               mov eax, dword ptr [ecx + 8]
// 005b4d43  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005b4d40 {
    char pad0[8];
    int m_x;
    int f();
};
int S_func_005b4d40::f()
{
    return m_x;
}
