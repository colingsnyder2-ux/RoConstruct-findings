// roc 2007-08 004cfe70  unit: RBX::TextureProxyBase  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004cfe70
//
// 004cfe70  8d81ec000000         lea eax, [ecx + 0xec]
// 004cfe76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004cfe70 {
    char pad0[236];
    int m_x;
    int* f();
};
int* S_func_004cfe70::f()
{
    return &m_x;
}
