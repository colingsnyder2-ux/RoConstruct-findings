// roc 2009-06 0066f920  unit: RBX::Geometry  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066f920
//
// 0066f920  8d4174               lea eax, [ecx + 0x74]
// 0066f923  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066f920 {
    char pad0[116];
    int m_x;
    int* f();
};
int* S_func_0066f920::f()
{
    return &m_x;
}
