// roc 2011-06 006a5c00  unit: RBX::Geometry  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a5c00
//
// 006a5c00  8d81a8000000         lea eax, [ecx + 0xa8]
// 006a5c06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a5c00 {
    char pad0[168];
    int m_x;
    int* f();
};
int* S_func_006a5c00::f()
{
    return &m_x;
}
