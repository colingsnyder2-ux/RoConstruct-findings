// roc 2011-06 00789cc0  unit: RBX::HammerTool  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00789cc0
//
// 00789cc0  8d4104               lea eax, [ecx + 4]
// 00789cc3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00789cc0 {
    char pad0[4];
    int m_x;
    int* f();
};
int* S_func_00789cc0::f()
{
    return &m_x;
}
