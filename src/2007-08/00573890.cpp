// roc 2007-08 00573890  unit: RBX::PartInstance  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00573890
//
// 00573890  8d81a4010000         lea eax, [ecx + 0x1a4]
// 00573896  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00573890 {
    char pad0[420];
    int m_x;
    int* f();
};
int* S_func_00573890::f()
{
    return &m_x;
}
