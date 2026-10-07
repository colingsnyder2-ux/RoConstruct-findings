// roc 2010-06 0069f6b0  unit: RBX::VDataModelMesh::?$NonFactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069f6b0
//
// 0069f6b0  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0069f6b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0069f6b0 {
    char pad0[184];
    int m_x;
    int f();
};
int S_func_0069f6b0::f()
{
    return m_x;
}
