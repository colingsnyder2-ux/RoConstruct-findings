// roc 2009-06 0055f930  unit: RBX::WedgeBuilder  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0055f930
//
// 0055f930  8d8198000000         lea eax, [ecx + 0x98]
// 0055f936  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0055f930 {
    char pad0[152];
    int m_x;
    int* f();
};
int* S_func_0055f930::f()
{
    return &m_x;
}
