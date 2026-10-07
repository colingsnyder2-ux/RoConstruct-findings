// roc 2010-06 0069f6d0  unit: RBX::VDataModelMesh::?$NonFactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069f6d0
//
// 0069f6d0  8d81a0000000         lea eax, [ecx + 0xa0]
// 0069f6d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0069f6d0 {
    char pad0[160];
    int m_x;
    int* f();
};
int* S_func_0069f6d0::f()
{
    return &m_x;
}
