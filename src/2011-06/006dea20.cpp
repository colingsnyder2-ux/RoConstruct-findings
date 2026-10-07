// roc 2011-06 006dea20  unit: RBX::VDataModelMesh::?$NonFactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006dea20
//
// 006dea20  8d819c000000         lea eax, [ecx + 0x9c]
// 006dea26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006dea20 {
    char pad0[156];
    int m_x;
    int* f();
};
int* S_func_006dea20::f()
{
    return &m_x;
}
