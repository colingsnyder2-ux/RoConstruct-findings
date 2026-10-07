// roc 2011-06 006dea10  unit: RBX::VDataModelMesh::?$NonFactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006dea10
//
// 006dea10  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 006dea16  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006dea10 {
    char pad0[184];
    int m_x;
    int f();
};
int S_func_006dea10::f()
{
    return m_x;
}
